#include "../CEpubFile.h"
#include "../../DesktopEditor/common/Directory.h"
#include "../../OfficeUtils/src/OfficeUtils.h"
#include "../../DesktopEditor/xml/include/xmlutils.h"
#include "src/CBookInfo.h"
#include "src/Docx/CDocxFile.h"
#include <iostream>

CEpubFile::CEpubFile()
{
}

CEpubFile::~CEpubFile()
{
//    NSDirectory::DeleteDirectory(m_sTempDir);
}

bool CEpubFile::IsEbubFile(const std::wstring &sfileName)
{
    COfficeUtils oOfficeUtils;

    if (oOfficeUtils.IsArchive(sfileName) == S_OK &&
        oOfficeUtils.IsFileExistInArchive(sfileName, L"META-INF/container.xml") == S_OK)
    {
        this->m_sFileName = sfileName;
        return true;
    }
    return false;
}

void CEpubFile::SetTempDirectory(const std::wstring &sTempDir)
{
    this->m_sTempDir = sTempDir;
}

bool CEpubFile::Convert(const std::wstring& sInputFile, const std::wstring& sOutputFile)
{
    NSDirectory::CreateDirectories(m_sTempDir);
    COfficeUtils oOfficeUtils;

    wchar_t* password = NULL;
    if (oOfficeUtils.ExtractToDirectory(sInputFile, m_sTempDir.c_str(), password, 1) != S_OK)
        return false;

    XmlUtils::CXmlLiteReader oXmlLiteReader;

    if (oXmlLiteReader.FromFile(m_sTempDir + L"/content.opf"))
    {
        oXmlLiteReader.ReadNextNode();

        int nParentDepth = oXmlLiteReader.GetDepth();
        while (oXmlLiteReader.ReadNextSiblingNode(nParentDepth))
        {
            std::wstring sName = oXmlLiteReader.GetName();
            if (sName == L"metadata")
            {
                m_oBookInfo.ReadInfo(oXmlLiteReader);
                m_oBookInfo.ShowInfo();
            }
            else if (sName == L"manifest")
            {
                int _nParentDepth = oXmlLiteReader.GetDepth();
                while (true)
                {
                    CBookItem oItem;
                    if (oItem.ReadItem(oXmlLiteReader, _nParentDepth))
                        m_mapRefs[oItem.GetID()] = oItem;
                    else
                        break;
                }
            }
            else if (sName == L"spine")
            {
                int _nParentDepth = oXmlLiteReader.GetDepth();
                while (true)
                {
                    CBookContentItem oContentItem;
                    if (oContentItem.ReadContentItem(oXmlLiteReader, _nParentDepth))
                        m_arContents.push_back(oContentItem);
                    else
                        break;
                }
            }
        }
    }
    else
        return false;

    if (oXmlLiteReader.FromFile(m_sTempDir + L"/toc.ncx"))
    {
        oXmlLiteReader.ReadNextNode();
        m_oToc.ReadToc(oXmlLiteReader);
        m_oToc.ShowToc();

        CDocxFile oDocxFile;
        oDocxFile.CreateTempFiles(sOutputFile, m_sTempDir);

        std::wstring sTempDir = m_sTempDir + L"/Docx";
        std::wstring _sOutputFile = m_sTempDir + L"/test.docx";

        NSFile::CFileBinary oFileBinary;
        oFileBinary.CreateFileW(_sOutputFile);




        oDocxFile.SaveToFile();

        oOfficeUtils.CompressFileOrDirectory(std::wstring(L"C:/Users/kiril/Desktop/OnlyOffice/core/EpubFile/test/build/win_64/debug/tmp/docx"),
                                             std::wstring(L"C:/Users/kiril/Desktop/OnlyOffice/core/EpubFile/test/build/win_64/debug/test.docx"));

    }

    return true;
}

void CEpubFile::ShowMap()
{
    std::cout << "-----MAP-----" << std::endl;
    for (int i = 0; i < (int)m_arContents.size(); i++)
        std::wcout << m_arContents[i].m_sID << " - " << m_mapRefs[m_arContents[i].m_sID].GetRef() << std::endl;
}