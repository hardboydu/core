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
#ifndef PPTX_LOGIC_CMEDIANODE_INCLUDE_H_
#define PPTX_LOGIC_CMEDIANODE_INCLUDE_H_

#include "./../../WrapperWritingElement.h"
#include "CTn.h"
#include "TgtEl.h"

namespace PPTX
{
	namespace Logic
	{
		class CMediaNode : public WrapperWritingElement
		{
		public:
			PPTX_LOGIC_BASE(CMediaNode)

		public:
			virtual void fromXML(XmlUtils::CXmlNode& node)
			{
				cTn			= node.ReadNode(_T("p:cTn"));
				tgtEl		= node.ReadNode(_T("p:tgtEl"));

                XmlMacroReadAttributeBase(node, L"mute", mute);
                XmlMacroReadAttributeBase(node, L"numSld", numSld);
                XmlMacroReadAttributeBase(node, L"showWhenStopped", showWhenStopped);
                XmlMacroReadAttributeBase(node, L"vol", vol);

				Normalize();

				FillParentPointersForChilds();
			}

			virtual std::wstring toXML() const
			{
				XmlUtils::CAttribute oAttr;
				oAttr.Write(_T("mute"), mute);
				oAttr.Write(_T("numSld"), numSld);
				oAttr.Write(_T("showWhenStopped"), showWhenStopped);
				oAttr.Write(_T("vol"), vol);

				XmlUtils::CNodeValue oValue;
				oValue.Write(cTn);
				oValue.Write(tgtEl);

				return XmlUtils::CreateNode(_T("p:cMediaNode"), oAttr, oValue);
			}

		public:
			CTn						cTn;
			TgtEl					tgtEl;

			nullable_bool			mute;
			nullable_int			numSld;
			nullable_bool			showWhenStopped;
			nullable_int			vol;
		protected:
			virtual void FillParentPointersForChilds()
			{
				cTn.SetParentPointer(this);
				tgtEl.SetParentPointer(this);
			}

			AVSINLINE void Normalize()
			{
				numSld.normalize_positive();
			}
		};
	} // namespace Logic
} // namespace PPTX

#endif // PPTX_LOGIC_CMEDIANODE_INCLUDE_H
