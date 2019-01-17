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
#ifndef _BUILD_IGROBJECT_CROSSPLATFORM_H_
#define _BUILD_IGROBJECT_CROSSPLATFORM_H_

#include "Types.h"

#ifdef __APPLE__
#include <libkern/OSAtomic.h>
#endif

class IGrObject
{
protected:

#ifdef __APPLE__
    volatile int32_t m_lRef;
#else
    ULONG m_lRef;
#endif

public:
    IGrObject()
    {
        m_lRef = 1;
    }

    virtual ~IGrObject()
    {
    }

#ifdef __APPLE__
    virtual ULONG AddRef()
    {
        OSAtomicIncrement32(&m_lRef);
        return (ULONG)m_lRef;
    }
    virtual ULONG Release()
    {
        int32_t ret = OSAtomicDecrement32(&m_lRef);
        if (0 == m_lRef)
            delete this;

        return (ULONG)ret;
    }
#else
    virtual ULONG AddRef()
    {
        ++m_lRef;
        return m_lRef;
    }

    virtual ULONG Release()
    {
        ULONG ret = --m_lRef;
        if (0 == m_lRef)
            delete this;
        return ret;
    }
#endif
};

#endif //_BUILD_IGROBJECT_CROSSPLATFORM_H_
