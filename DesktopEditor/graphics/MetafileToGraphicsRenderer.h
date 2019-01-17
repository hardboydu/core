﻿/*
 * (c) Copyright Ascensio System SIA 2010-2019
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at Lubanas st. 125a-25, Riga, Latvia,
 * EU, LV-1021.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
#ifndef _BUILD_METAFILE_TO_GRRENDERER_H_
#define _BUILD_METAFILE_TO_GRRENDERER_H_

#pragma once

#include "./MetafileToRenderer.h"

namespace NSOnlineOfficeBinToPdf
{
    class CMetafileToRenderterRaster_private;
    class GRAPHICS_DECL CMetafileToRenderterRaster : public IMetafileToRenderter
    {
    private:
        CMetafileToRenderterRaster_private* m_internal;

    public:
        CMetafileToRenderterRaster(IRenderer* pRenderer);
        virtual ~CMetafileToRenderterRaster();

    public:
        virtual std::wstring GetImagePath(const std::wstring& sImagePath);
        bool ConvertBuffer(BYTE* pBuffer, LONG lBufferLen);

    public:
        std::wstring GetHtmlPlace();
        void SetHtmlPlace(const std::wstring& value);

        std::wstring GetThemesPlace();
        void SetThemesPlace(const std::wstring& value);

        std::wstring GetTempDir();
        void SetTempDir(const std::wstring& value);

        std::wstring GetFileName();
        void SetFileName(const std::wstring& value);

        void SetApplication(NSFonts::IApplicationFonts* pFonts);

        int GetRasterFormat();
        void SetRasterFormat(const int& value);

        int GetSaveType();
        void SetSaveType(const int& value);

        int GetRasterW();
        void SetRasterW(const int& value);

        int GetRasterH();
        void SetRasterH(const int& value);

        bool GetIsOnlyFirst();
        void SetIsOnlyFirst(const bool& value);

        void SetOutputDpi(const double& dDpiX, const double& dDpiY);
    };
}

#endif // _BUILD_METAFILE_TO_GRRENDERER_H_
