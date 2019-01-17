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
#pragma once
#ifndef PPTX_LOGIC_BLIPFILL_INCLUDE_H_
#define PPTX_LOGIC_BLIPFILL_INCLUDE_H_

#include "./../../WrapperWritingElement.h"
#include "./../Rect.h"
#include "Blip.h"
#include "Tile.h"
#include "Stretch.h"


namespace PPTX
{
	namespace Logic
	{

		class BlipFill : public WrapperWritingElement
		{
		public:
			WritingElement_AdditionConstructors(BlipFill)
			
			BlipFill(std::wstring ns = L"p")
			{
				m_namespace = ns;
			}

			BlipFill& operator=(const BlipFill& oSrc)
			{
				parentFile		= oSrc.parentFile;
				parentElement	= oSrc.parentElement;
				
				blip			= oSrc.blip;
				srcRect			= oSrc.srcRect;
				tile			= oSrc.tile;
				stretch			= oSrc.stretch;

				dpi				= oSrc.dpi;
				rotWithShape	= oSrc.rotWithShape;

				additionalFile	= oSrc.additionalFile;
				oleData			= oSrc.oleData;

				m_namespace = oSrc.m_namespace;
				return *this;
			}
			virtual void fromXML(XmlUtils::CXmlLiteReader& oReader);
			virtual OOX::EElementType getType () const
			{
				return OOX::et_a_blipFill;
			}
			void ReadAttributes(XmlUtils::CXmlLiteReader& oReader)
			{
				WritingElement_ReadAttributes_Start_No_NS (oReader )
					WritingElement_ReadAttributes_Read_if ( oReader, _T("dpi"), dpi)
					WritingElement_ReadAttributes_Read_else_if ( oReader, _T("rotWithShape"), rotWithShape )
				WritingElement_ReadAttributes_End_No_NS	( oReader )
			}
			virtual void fromXML(XmlUtils::CXmlNode& node);
			virtual std::wstring toXML() const;
			virtual void toXmlWriter(NSBinPptxRW::CXmlWriter* pWriter) const;
			virtual void toPPTY(NSBinPptxRW::CBinaryFileWriter* pWriter) const;
			virtual void fromPPTY(NSBinPptxRW::CBinaryFileReader* pReader);
			
			mutable std::wstring m_namespace;

			nullable<Blip>		blip;
			nullable<Rect>		srcRect;
			nullable<Tile>		tile;
			nullable<Stretch>	stretch;

			nullable_int		dpi;
			nullable_bool		rotWithShape;

	//internal
			mutable smart_ptr<OOX::File>	additionalFile;
			std::wstring					oleData;
		protected:
			virtual void FillParentPointersForChilds()
			{
				if(blip.IsInit())
					blip->SetParentPointer(this);
				if(srcRect.IsInit())
					srcRect->SetParentPointer(this);
				if(tile.IsInit())
					tile->SetParentPointer(this);
				if(stretch.IsInit())
					stretch->SetParentPointer(this);
			}

			AVSINLINE void Normalize()
			{
				dpi.normalize_positive();
			}
		};
	} // namespace Logic
} // namespace PPTX

#endif // PPTX_LOGIC_BLIPFILL_INCLUDE_H_
