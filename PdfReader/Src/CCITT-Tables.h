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
#ifndef _PDF_READER_CCIT_TABLES_H
#define _PDF_READER_CCIT_TABLES_H

namespace PdfReader
{
	struct CCITTCode
	{
		short nBitsCount;
		short nCode;
	};

	#define ccittEOL -2

	//------------------------------------------------------------------------
	// 2D коды
	//------------------------------------------------------------------------

	#define Pass_2D   0
	#define Horiz_2D  1
	#define Vert0_2D  2
	#define VertR1_2D 3
	#define VertL1_2D 4
	#define VertR2_2D 5
	#define VertL2_2D 6
	#define VertR3_2D 7
	#define VertL3_2D 8

	// коды 1-7 бит
	static CCITTCode c_arrTable2D[128] =
	{
		{ -1, -1 }, { -1, -1 },               // 000000x
		{ 7, VertL3_2D },                   // 0000010
		{ 7, VertR3_2D },                   // 0000011
		{ 6, VertL2_2D }, { 6, VertL2_2D },   // 000010x
		{ 6, VertR2_2D }, { 6, VertR2_2D },   // 000011x

		{ 4, Pass_2D }, { 4, Pass_2D },       // 0001xxx
		{ 4, Pass_2D }, { 4, Pass_2D },
		{ 4, Pass_2D }, { 4, Pass_2D },
		{ 4, Pass_2D }, { 4, Pass_2D },

		{ 3, Horiz_2D }, { 3, Horiz_2D },     // 001xxxx
		{ 3, Horiz_2D }, { 3, Horiz_2D },
		{ 3, Horiz_2D }, { 3, Horiz_2D },
		{ 3, Horiz_2D }, { 3, Horiz_2D },
		{ 3, Horiz_2D }, { 3, Horiz_2D },
		{ 3, Horiz_2D }, { 3, Horiz_2D },
		{ 3, Horiz_2D }, { 3, Horiz_2D },
		{ 3, Horiz_2D }, { 3, Horiz_2D },

		{ 3, VertL1_2D }, { 3, VertL1_2D },   // 010xxxx
		{ 3, VertL1_2D }, { 3, VertL1_2D },
		{ 3, VertL1_2D }, { 3, VertL1_2D },
		{ 3, VertL1_2D }, { 3, VertL1_2D },
		{ 3, VertL1_2D }, { 3, VertL1_2D },
		{ 3, VertL1_2D }, { 3, VertL1_2D },
		{ 3, VertL1_2D }, { 3, VertL1_2D },
		{ 3, VertL1_2D }, { 3, VertL1_2D },

		{ 3, VertR1_2D }, { 3, VertR1_2D },   // 011xxxx
		{ 3, VertR1_2D }, { 3, VertR1_2D },
		{ 3, VertR1_2D }, { 3, VertR1_2D },
		{ 3, VertR1_2D }, { 3, VertR1_2D },
		{ 3, VertR1_2D }, { 3, VertR1_2D },
		{ 3, VertR1_2D }, { 3, VertR1_2D },
		{ 3, VertR1_2D }, { 3, VertR1_2D },
		{ 3, VertR1_2D }, { 3, VertR1_2D },

		{ 1, Vert0_2D }, { 1, Vert0_2D },    // 1xxxxxx
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D },
		{ 1, Vert0_2D }, { 1, Vert0_2D }
	};

	//------------------------------------------------------------------------
	// White run lengths
	//------------------------------------------------------------------------

	// коды 11-12 бит (верхние 7 бит установлены в 0)
	static CCITTCode c_arrWhiteTable1[32] =
	{
		{ -1, -1 },                               // 00000
		{ 12, ccittEOL },                         // 00001
		{ -1, -1 }, { -1, -1 },                     // 0001x
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, // 001xx
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, // 010xx
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, // 011xx
		{ 11, 1792 }, { 11, 1792 },                 // 1000x
		{ 12, 1984 },                             // 10010
		{ 12, 2048 },                             // 10011
		{ 12, 2112 },                             // 10100
		{ 12, 2176 },                             // 10101
		{ 12, 2240 },                             // 10110
		{ 12, 2304 },                             // 10111
		{ 11, 1856 }, { 11, 1856 },                 // 1100x
		{ 11, 1920 }, { 11, 1920 },                 // 1101x
		{ 12, 2368 },                             // 11100
		{ 12, 2432 },                             // 11101
		{ 12, 2496 },                             // 11110
		{ 12, 2560 }                              // 11111
	};

	// коды 1-9 бит
	static CCITTCode c_arrWhiteTable2[512] =
	{
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, // 0000000xx
		{ 8, 29 }, { 8, 29 },                       // 00000010x
		{ 8, 30 }, { 8, 30 },                       // 00000011x
		{ 8, 45 }, { 8, 45 },                       // 00000100x
		{ 8, 46 }, { 8, 46 },                       // 00000101x
		{ 7, 22 }, { 7, 22 }, { 7, 22 }, { 7, 22 },     // 0000011xx
		{ 7, 23 }, { 7, 23 }, { 7, 23 }, { 7, 23 },     // 0000100xx
		{ 8, 47 }, { 8, 47 },                       // 00001010x
		{ 8, 48 }, { 8, 48 },                       // 00001011x

		{ 6, 13 }, { 6, 13 }, { 6, 13 }, { 6, 13 },     // 000011xxx
		{ 6, 13 }, { 6, 13 }, { 6, 13 }, { 6, 13 },

		{ 7, 20 }, { 7, 20 }, { 7, 20 }, { 7, 20 },     // 0001000xx
		{ 8, 33 }, { 8, 33 },                       // 00010010x
		{ 8, 34 }, { 8, 34 },                       // 00010011x
		{ 8, 35 }, { 8, 35 },                       // 00010100x
		{ 8, 36 }, { 8, 36 },                       // 00010101x
		{ 8, 37 }, { 8, 37 },                       // 00010110x
		{ 8, 38 }, { 8, 38 },                       // 00010111x
		{ 7, 19 }, { 7, 19 }, { 7, 19 }, { 7, 19 },     // 0001100xx
		{ 8, 31 }, { 8, 31 },                       // 00011010x
		{ 8, 32 }, { 8, 32 },                       // 00011011x

		{ 6, 1 }, { 6, 1 }, { 6, 1 }, { 6, 1 },         // 000111xxx
		{ 6, 1 }, { 6, 1 }, { 6, 1 }, { 6, 1 },

		{ 6, 12 }, { 6, 12 }, { 6, 12 }, { 6, 12 },     // 001000xxx
		{ 6, 12 }, { 6, 12 }, { 6, 12 }, { 6, 12 },

		{ 8, 53 }, { 8, 53 },                       // 00100100x
		{ 8, 54 }, { 8, 54 },                       // 00100101x
		{ 7, 26 }, { 7, 26 }, { 7, 26 }, { 7, 26 },     // 0010011xx
		{ 8, 39 }, { 8, 39 },                       // 00101000x
		{ 8, 40 }, { 8, 40 },                       // 00101001x

		{ 8, 41 }, { 8, 41 },                       // 00101010x
		{ 8, 42 }, { 8, 42 },                       // 00101011x
		{ 8, 43 }, { 8, 43 },                       // 00101100x
		{ 8, 44 }, { 8, 44 },                       // 00101101x
		{ 7, 21 }, { 7, 21 }, { 7, 21 }, { 7, 21 },     // 0010111xx
		{ 7, 28 }, { 7, 28 }, { 7, 28 }, { 7, 28 },     // 0011000xx
		{ 8, 61 }, { 8, 61 },                       // 00110010x
		{ 8, 62 }, { 8, 62 },                       // 00110011x
		{ 8, 63 }, { 8, 63 },                       // 00110100x
		{ 8, 0 }, { 8, 0 },                        // 00110101x
		{ 8, 320 }, { 8, 320 },                     // 00110110x
		{ 8, 384 }, { 8, 384 },                     // 00110111x

		{ 5, 10 }, { 5, 10 }, { 5, 10 }, { 5, 10 },     // 00111xxxx
		{ 5, 10 }, { 5, 10 }, { 5, 10 }, { 5, 10 },
		{ 5, 10 }, { 5, 10 }, { 5, 10 }, { 5, 10 },
		{ 5, 10 }, { 5, 10 }, { 5, 10 }, { 5, 10 },

		{ 5, 11 }, { 5, 11 }, { 5, 11 }, { 5, 11 },     // 01000xxxx
		{ 5, 11 }, { 5, 11 }, { 5, 11 }, { 5, 11 },
		{ 5, 11 }, { 5, 11 }, { 5, 11 }, { 5, 11 },
		{ 5, 11 }, { 5, 11 }, { 5, 11 }, { 5, 11 },

		{ 7, 27 }, { 7, 27 }, { 7, 27 }, { 7, 27 },     // 0100100xx
		{ 8, 59 }, { 8, 59 },                       // 01001010x
		{ 8, 60 }, { 8, 60 },                       // 01001011x
		{ 9, 1472 },                              // 010011000
		{ 9, 1536 },                              // 010011001
		{ 9, 1600 },                              // 010011010
		{ 9, 1728 },                              // 010011011
		{ 7, 18 }, { 7, 18 }, { 7, 18 }, { 7, 18 },     // 0100111xx
		{ 7, 24 }, { 7, 24 }, { 7, 24 }, { 7, 24 },     // 0101000xx
		{ 8, 49 }, { 8, 49 },                       // 01010010x
		{ 8, 50 }, { 8, 50 },                       // 01010011x
		{ 8, 51 }, { 8, 51 },                       // 01010100x
		{ 8, 52 }, { 8, 52 },                       // 01010101x
		{ 7, 25 }, { 7, 25 }, { 7, 25 }, { 7, 25 },     // 0101011xx
		{ 8, 55 }, { 8, 55 },                       // 01011000x
		{ 8, 56 }, { 8, 56 },                       // 01011001x
		{ 8, 57 }, { 8, 57 },                       // 01011010x
		{ 8, 58 }, { 8, 58 },                       // 01011011x

		{ 6, 192 }, { 6, 192 }, { 6, 192 }, { 6, 192 }, // 010111xxx
		{ 6, 192 }, { 6, 192 }, { 6, 192 }, { 6, 192 },

		{ 6, 1664 }, { 6, 1664 }, { 6, 1664 }, { 6, 1664 },	// 011000xxx
		{ 6, 1664 }, { 6, 1664 }, { 6, 1664 }, { 6, 1664 },

		{ 8, 448 }, { 8, 448 },                     // 01100100x
		{ 8, 512 }, { 8, 512 },                     // 01100101x
		{ 9, 704 },                               // 011001100
		{ 9, 768 },                               // 011001101
		{ 8, 640 }, { 8, 640 },                     // 01100111x
		{ 8, 576 }, { 8, 576 },                     // 01101000x
		{ 9, 832 },                               // 011010010
		{ 9, 896 },                               // 011010011
		{ 9, 960 },                               // 011010100
		{ 9, 1024 },                              // 011010101
		{ 9, 1088 },                              // 011010110
		{ 9, 1152 },                              // 011010111
		{ 9, 1216 },                              // 011011000
		{ 9, 1280 },                              // 011011001
		{ 9, 1344 },                              // 011011010
		{ 9, 1408 },                              // 011011011
		{ 7, 256 }, { 7, 256 }, { 7, 256 }, { 7, 256 }, // 0110111xx

		{ 4, 2 }, { 4, 2 }, { 4, 2 }, { 4, 2 },         // 0111xxxxx
		{ 4, 2 }, { 4, 2 }, { 4, 2 }, { 4, 2 },
		{ 4, 2 }, { 4, 2 }, { 4, 2 }, { 4, 2 },
		{ 4, 2 }, { 4, 2 }, { 4, 2 }, { 4, 2 },
		{ 4, 2 }, { 4, 2 }, { 4, 2 }, { 4, 2 },
		{ 4, 2 }, { 4, 2 }, { 4, 2 }, { 4, 2 },
		{ 4, 2 }, { 4, 2 }, { 4, 2 }, { 4, 2 },
		{ 4, 2 }, { 4, 2 }, { 4, 2 }, { 4, 2 },

		{ 4, 3 }, { 4, 3 }, { 4, 3 }, { 4, 3 },         // 1000xxxxx
		{ 4, 3 }, { 4, 3 }, { 4, 3 }, { 4, 3 },
		{ 4, 3 }, { 4, 3 }, { 4, 3 }, { 4, 3 },
		{ 4, 3 }, { 4, 3 }, { 4, 3 }, { 4, 3 },
		{ 4, 3 }, { 4, 3 }, { 4, 3 }, { 4, 3 },
		{ 4, 3 }, { 4, 3 }, { 4, 3 }, { 4, 3 },
		{ 4, 3 }, { 4, 3 }, { 4, 3 }, { 4, 3 },
		{ 4, 3 }, { 4, 3 }, { 4, 3 }, { 4, 3 },

		{ 5, 128 }, { 5, 128 }, { 5, 128 }, { 5, 128 }, // 10010xxxx
		{ 5, 128 }, { 5, 128 }, { 5, 128 }, { 5, 128 },
		{ 5, 128 }, { 5, 128 }, { 5, 128 }, { 5, 128 },
		{ 5, 128 }, { 5, 128 }, { 5, 128 }, { 5, 128 },

		{ 5, 8 }, { 5, 8 }, { 5, 8 }, { 5, 8 },         // 10011xxxx
		{ 5, 8 }, { 5, 8 }, { 5, 8 }, { 5, 8 },
		{ 5, 8 }, { 5, 8 }, { 5, 8 }, { 5, 8 },
		{ 5, 8 }, { 5, 8 }, { 5, 8 }, { 5, 8 },

		{ 5, 9 }, { 5, 9 }, { 5, 9 }, { 5, 9 },         // 10100xxxx
		{ 5, 9 }, { 5, 9 }, { 5, 9 }, { 5, 9 },
		{ 5, 9 }, { 5, 9 }, { 5, 9 }, { 5, 9 },
		{ 5, 9 }, { 5, 9 }, { 5, 9 }, { 5, 9 },

		{ 6, 16 }, { 6, 16 }, { 6, 16 }, { 6, 16 },     // 101010xxx
		{ 6, 16 }, { 6, 16 }, { 6, 16 }, { 6, 16 },

		{ 6, 17 }, { 6, 17 }, { 6, 17 }, { 6, 17 },	    // 101011xxx
		{ 6, 17 }, { 6, 17 }, { 6, 17 }, { 6, 17 },

		{ 4, 4 }, { 4, 4 }, { 4, 4 }, { 4, 4 },         // 1011xxxxx
		{ 4, 4 }, { 4, 4 }, { 4, 4 }, { 4, 4 },
		{ 4, 4 }, { 4, 4 }, { 4, 4 }, { 4, 4 },
		{ 4, 4 }, { 4, 4 }, { 4, 4 }, { 4, 4 },
		{ 4, 4 }, { 4, 4 }, { 4, 4 }, { 4, 4 },
		{ 4, 4 }, { 4, 4 }, { 4, 4 }, { 4, 4 },
		{ 4, 4 }, { 4, 4 }, { 4, 4 }, { 4, 4 },
		{ 4, 4 }, { 4, 4 }, { 4, 4 }, { 4, 4 },

		{ 4, 5 }, { 4, 5 }, { 4, 5 }, { 4, 5 },        // 1100xxxxx
		{ 4, 5 }, { 4, 5 }, { 4, 5 }, { 4, 5 },
		{ 4, 5 }, { 4, 5 }, { 4, 5 }, { 4, 5 },
		{ 4, 5 }, { 4, 5 }, { 4, 5 }, { 4, 5 },
		{ 4, 5 }, { 4, 5 }, { 4, 5 }, { 4, 5 },
		{ 4, 5 }, { 4, 5 }, { 4, 5 }, { 4, 5 },
		{ 4, 5 }, { 4, 5 }, { 4, 5 }, { 4, 5 },
		{ 4, 5 }, { 4, 5 }, { 4, 5 }, { 4, 5 },

		{ 6, 14 }, { 6, 14 }, { 6, 14 }, { 6, 14 },    // 110100xxx
		{ 6, 14 }, { 6, 14 }, { 6, 14 }, { 6, 14 },

		{ 6, 15 }, { 6, 15 }, { 6, 15 }, { 6, 15 },    // 110101xxx
		{ 6, 15 }, { 6, 15 }, { 6, 15 }, { 6, 15 },

		{ 5, 64 }, { 5, 64 }, { 5, 64 }, { 5, 64 },    // 11011xxxx
		{ 5, 64 }, { 5, 64 }, { 5, 64 }, { 5, 64 },
		{ 5, 64 }, { 5, 64 }, { 5, 64 }, { 5, 64 },
		{ 5, 64 }, { 5, 64 }, { 5, 64 }, { 5, 64 },

		{ 4, 6 }, { 4, 6 }, { 4, 6 }, { 4, 6 },        // 1110xxxxx
		{ 4, 6 }, { 4, 6 }, { 4, 6 }, { 4, 6 },
		{ 4, 6 }, { 4, 6 }, { 4, 6 }, { 4, 6 },
		{ 4, 6 }, { 4, 6 }, { 4, 6 }, { 4, 6 },
		{ 4, 6 }, { 4, 6 }, { 4, 6 }, { 4, 6 },
		{ 4, 6 }, { 4, 6 }, { 4, 6 }, { 4, 6 },
		{ 4, 6 }, { 4, 6 }, { 4, 6 }, { 4, 6 },
		{ 4, 6 }, { 4, 6 }, { 4, 6 }, { 4, 6 },

		{ 4, 7 }, { 4, 7 }, { 4, 7 }, { 4, 7 },        // 1111xxxxx
		{ 4, 7 }, { 4, 7 }, { 4, 7 }, { 4, 7 },
		{ 4, 7 }, { 4, 7 }, { 4, 7 }, { 4, 7 },
		{ 4, 7 }, { 4, 7 }, { 4, 7 }, { 4, 7 },
		{ 4, 7 }, { 4, 7 }, { 4, 7 }, { 4, 7 },
		{ 4, 7 }, { 4, 7 }, { 4, 7 }, { 4, 7 },
		{ 4, 7 }, { 4, 7 }, { 4, 7 }, { 4, 7 },
		{ 4, 7 }, { 4, 7 }, { 4, 7 }, { 4, 7 }
	};

	//------------------------------------------------------------------------
	// Black run lengths
	//------------------------------------------------------------------------

	// коды 10-13 бит (верхние 6 бит установлены в 0)
	static CCITTCode c_arrBlackTable1[128] =
	{
		{ -1, -1 }, { -1, -1 },                             // 000000000000x
		{ 12, ccittEOL }, { 12, ccittEOL },                 // 000000000001x
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 },         // 00000000001xx
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 },	        // 00000000010xx
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 },         // 00000000011xx
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 },         // 00000000100xx
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 },         // 00000000101xx
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 },         // 00000000110xx
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 },         // 00000000111xx
		{ 11, 1792 }, { 11, 1792 }, { 11, 1792 }, { 11, 1792 }, // 00000001000xx
		{ 12, 1984 }, { 12, 1984 },                         // 000000010010x
		{ 12, 2048 }, { 12, 2048 },                         // 000000010011x
		{ 12, 2112 }, { 12, 2112 },                         // 000000010100x
		{ 12, 2176 }, { 12, 2176 },                         // 000000010101x
		{ 12, 2240 }, { 12, 2240 },                         // 000000010110x
		{ 12, 2304 }, { 12, 2304 },                         // 000000010111x
		{ 11, 1856 }, { 11, 1856 }, { 11, 1856 }, { 11, 1856 },	// 00000001100xx
		{ 11, 1920 }, { 11, 1920 }, { 11, 1920 }, { 11, 1920 },	// 00000001101xx
		{ 12, 2368 }, { 12, 2368 },                         // 000000011100x
		{ 12, 2432 }, { 12, 2432 },                         // 000000011101x
		{ 12, 2496 }, { 12, 2496 },                         // 000000011110x
		{ 12, 2560 }, { 12, 2560 },                         // 000000011111x

		{ 10, 18 }, { 10, 18 }, { 10, 18 }, { 10, 18 },         // 0000001000xxx
		{ 10, 18 }, { 10, 18 }, { 10, 18 }, { 10, 18 },

		{ 12, 52 }, { 12, 52 },                             // 000000100100x
		{ 13, 640 },                                      // 0000001001010
		{ 13, 704 },                                      // 0000001001011
		{ 13, 768 },                                      // 0000001001100
		{ 13, 832 },                                      // 0000001001101
		{ 12, 55 }, { 12, 55 },                             // 000000100111x
		{ 12, 56 }, { 12, 56 },                             // 000000101000x
		{ 13, 1280 },                                     // 0000001010010
		{ 13, 1344 },                                     // 0000001010011
		{ 13, 1408 },                                     // 0000001010100
		{ 13, 1472 },                                     // 0000001010101
		{ 12, 59 }, { 12, 59 },                             // 000000101011x
		{ 12, 60 }, { 12, 60 },	                            // 000000101100x
		{ 13, 1536 },                                     // 0000001011010
		{ 13, 1600 },                                     // 0000001011011
		{ 11, 24 }, { 11, 24 }, { 11, 24 }, { 11, 24 },         // 00000010111xx
		{ 11, 25 }, { 11, 25 }, { 11, 25 }, { 11, 25 },         // 00000011000xx
		{ 13, 1664 },                                     // 0000001100100
		{ 13, 1728 },                                     // 0000001100101
		{ 12, 320 }, { 12, 320 },                           // 000000110011x
		{ 12, 384 }, { 12, 384 },                           // 000000110100x
		{ 12, 448 }, { 12, 448 },                           // 000000110101x
		{ 13, 512 },                                      // 0000001101100
		{ 13, 576 },                                      // 0000001101101
		{ 12, 53 }, { 12, 53 },                             // 000000110111x
		{ 12, 54 }, { 12, 54 },                             // 000000111000x
		{ 13, 896 },                                      // 0000001110010
		{ 13, 960 },                                      // 0000001110011
		{ 13, 1024 },                                     // 0000001110100
		{ 13, 1088 },                                     // 0000001110101
		{ 13, 1152 },	                                    // 0000001110110
		{ 13, 1216 },                                     // 0000001110111
		{ 10, 64 }, { 10, 64 }, { 10, 64 }, { 10, 64 },         // 0000001111xxx
		{ 10, 64 }, { 10, 64 }, { 10, 64 }, { 10, 64 }
	};

	// коды 7-12 быит (верхние 4 бита установлены в 0)
	static CCITTCode c_arrBlackTable2[192] =
	{
		{ 8, 13 }, { 8, 13 }, { 8, 13 }, { 8, 13 },    // 00000100xxxx
		{ 8, 13 }, { 8, 13 }, { 8, 13 }, { 8, 13 },
		{ 8, 13 }, { 8, 13 }, { 8, 13 }, { 8, 13 },
		{ 8, 13 }, { 8, 13 }, { 8, 13 }, { 8, 13 },

		{ 11, 23 }, { 11, 23 },                    // 00000101000x
		{ 12, 50 },                              // 000001010010
		{ 12, 51 },                              // 000001010011
		{ 12, 44 },                              // 000001010100
		{ 12, 45 },                              // 000001010101
		{ 12, 46 },                              // 000001010110
		{ 12, 47 },                              // 000001010111
		{ 12, 57 },                              // 000001011000
		{ 12, 58 },                              // 000001011001
		{ 12, 61 },                              // 000001011010
		{ 12, 256 },                             // 000001011011
		{ 10, 16 }, { 10, 16 }, { 10, 16 }, { 10, 16 },// 0000010111xx
		{ 10, 17 }, { 10, 17 }, { 10, 17 }, { 10, 17 },// 0000011000xx
		{ 12, 48 },                              // 000001100100
		{ 12, 49 },                              // 000001100101
		{ 12, 62 },                              // 000001100110
		{ 12, 63 },                              // 000001100111
		{ 12, 30 },                              // 000001101000
		{ 12, 31 },                              // 000001101001
		{ 12, 32 },                              // 000001101010
		{ 12, 33 },                              // 000001101011
		{ 12, 40 },                              // 000001101100
		{ 12, 41 },                              // 000001101101
		{ 11, 22 }, { 11, 22 },                    // 00000110111x

		{ 8, 14 }, { 8, 14 }, { 8, 14 }, { 8, 14 },    // 00000111xxxx
		{ 8, 14 }, { 8, 14 }, { 8, 14 }, { 8, 14 },
		{ 8, 14 }, { 8, 14 }, { 8, 14 }, { 8, 14 },
		{ 8, 14 }, { 8, 14 }, { 8, 14 }, { 8, 14 },

		{ 7, 10 }, { 7, 10 }, { 7, 10 }, { 7, 10 },    // 0000100xxxxx
		{ 7, 10 }, { 7, 10 }, { 7, 10 }, { 7, 10 },
		{ 7, 10 }, { 7, 10 }, { 7, 10 }, { 7, 10 },
		{ 7, 10 }, { 7, 10 }, { 7, 10 }, { 7, 10 },
		{ 7, 10 }, { 7, 10 }, { 7, 10 }, { 7, 10 },
		{ 7, 10 }, { 7, 10 }, { 7, 10 }, { 7, 10 },
		{ 7, 10 }, { 7, 10 }, { 7, 10 }, { 7, 10 },
		{ 7, 10 }, { 7, 10 }, { 7, 10 }, { 7, 10 },

		{ 7, 11 }, { 7, 11 }, { 7, 11 }, { 7, 11 },    // 0000101xxxxx
		{ 7, 11 }, { 7, 11 }, { 7, 11 }, { 7, 11 },
		{ 7, 11 }, { 7, 11 }, { 7, 11 }, { 7, 11 },
		{ 7, 11 }, { 7, 11 }, { 7, 11 }, { 7, 11 },
		{ 7, 11 }, { 7, 11 }, { 7, 11 }, { 7, 11 },
		{ 7, 11 }, { 7, 11 }, { 7, 11 }, { 7, 11 },
		{ 7, 11 }, { 7, 11 }, { 7, 11 }, { 7, 11 },
		{ 7, 11 }, { 7, 11 }, { 7, 11 }, { 7, 11 },

		{ 9, 15 }, { 9, 15 }, { 9, 15 }, { 9, 15 },    // 000011000xxx
		{ 9, 15 }, { 9, 15 }, { 9, 15 }, { 9, 15 },

		{ 12, 128 },                             // 000011001000
		{ 12, 192 },                             // 000011001001
		{ 12, 26 },                              // 000011001010
		{ 12, 27 },                              // 000011001011
		{ 12, 28 },                              // 000011001100
		{ 12, 29 },                              // 000011001101
		{ 11, 19 }, { 11, 19 },                    // 00001100111x
		{ 11, 20 }, { 11, 20 },                    // 00001101000x
		{ 12, 34 },                              // 000011010010
		{ 12, 35 },                              // 000011010011
		{ 12, 36 },                              // 000011010100
		{ 12, 37 },                              // 000011010101
		{ 12, 38 },                              // 000011010110
		{ 12, 39 },                              // 000011010111
		{ 11, 21 }, { 11, 21 },                    // 00001101100x
		{ 12, 42 },                              // 000011011010
		{ 12, 43 },                              // 000011011011
		{ 10, 0 }, { 10, 0 }, { 10, 0 }, { 10, 0 },    // 0000110111xx

		{ 7, 12 }, { 7, 12 }, { 7, 12 }, { 7, 12 },    // 0000111xxxxx
		{ 7, 12 }, { 7, 12 }, { 7, 12 }, { 7, 12 },
		{ 7, 12 }, { 7, 12 }, { 7, 12 }, { 7, 12 },
		{ 7, 12 }, { 7, 12 }, { 7, 12 }, { 7, 12 },
		{ 7, 12 }, { 7, 12 }, { 7, 12 }, { 7, 12 },
		{ 7, 12 }, { 7, 12 }, { 7, 12 }, { 7, 12 },
		{ 7, 12 }, { 7, 12 }, { 7, 12 }, { 7, 12 },
		{ 7, 12 }, { 7, 12 }, { 7, 12 }, { 7, 12 }
	};

	// коды 2-6 бит
	static CCITTCode c_arrBlackTable3[64] =
	{
		{ -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, // 0000xx
		{ 6, 9 },                                 // 000100
		{ 6, 8 },                                 // 000101
		{ 5, 7 }, { 5, 7 },                         // 00011x
		{ 4, 6 }, { 4, 6 }, { 4, 6 }, { 4, 6 },         // 0010xx
		{ 4, 5 }, { 4, 5 }, { 4, 5 }, { 4, 5 },         // 0011xx

		{ 3, 1 }, { 3, 1 }, { 3, 1 }, { 3, 1 },         // 010xxx
		{ 3, 1 }, { 3, 1 }, { 3, 1 }, { 3, 1 },

		{ 3, 4 }, { 3, 4 }, { 3, 4 }, { 3, 4 },         // 011xxx
		{ 3, 4 }, { 3, 4 }, { 3, 4 }, { 3, 4 },

		{ 2, 3 }, { 2, 3 }, { 2, 3 }, { 2, 3 },         // 10xxxx
		{ 2, 3 }, { 2, 3 }, { 2, 3 }, { 2, 3 },
		{ 2, 3 }, { 2, 3 }, { 2, 3 }, { 2, 3 },
		{ 2, 3 }, { 2, 3 }, { 2, 3 }, { 2, 3 },

		{ 2, 2 }, { 2, 2 }, { 2, 2 }, { 2, 2 },         // 11xxxx
		{ 2, 2 }, { 2, 2 }, { 2, 2 }, { 2, 2 },
		{ 2, 2 }, { 2, 2 }, { 2, 2 }, { 2, 2 },
		{ 2, 2 }, { 2, 2 }, { 2, 2 }, { 2, 2 }
	};
}

#endif // _PDF_READER_CCIT_TABLES_H