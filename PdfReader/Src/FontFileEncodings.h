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
#ifndef _PDF_READER_FONT_FILE_ENCODINGS_H
#define _PDF_READER_FONT_FILE_ENCODINGS_H

namespace PdfReader
{
	//------------------------------------------------------------------------
	// Type 1 and 1C font data
	//------------------------------------------------------------------------

	static char *c_arrsFontFileType1StandardEncoding[256] =
	{
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		"space",
		"exclam",
		"quotedbl",
		"numbersign",
		"dollar",
		"percent",
		"ampersand",
		"quoteright",
		"parenleft",
		"parenright",
		"asterisk",
		"plus",
		"comma",
		"hyphen",
		"period",
		"slash",
		"zero",
		"one",
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"eight",
		"nine",
		"colon",
		"semicolon",
		"less",
		"equal",
		"greater",
		"question",
		"at",
		"A",
		"B",
		"C",
		"D",
		"E",
		"F",
		"G",
		"H",
		"I",
		"J",
		"K",
		"L",
		"M",
		"N",
		"O",
		"P",
		"Q",
		"R",
		"S",
		"T",
		"U",
		"V",
		"W",
		"X",
		"Y",
		"Z",
		"bracketleft",
		"backslash",
		"bracketright",
		"asciicircum",
		"underscore",
		"quoteleft",
		"a",
		"b",
		"c",
		"d",
		"e",
		"f",
		"g",
		"h",
		"i",
		"j",
		"k",
		"l",
		"m",
		"n",
		"o",
		"p",
		"q",
		"r",
		"s",
		"t",
		"u",
		"v",
		"w",
		"x",
		"y",
		"z",
		"braceleft",
		"bar",
		"braceright",
		"asciitilde",
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		"exclamdown",
		"cent",
		"sterling",
		"fraction",
		"yen",
		"florin",
		"section",
		"currency",
		"quotesingle",
		"quotedblleft",
		"guillemotleft",
		"guilsinglleft",
		"guilsinglright",
		"fi",
		"fl",
		NULL,
		"endash",
		"dagger",
		"daggerdbl",
		"periodcentered",
		NULL,
		"paragraph",
		"bullet",
		"quotesinglbase",
		"quotedblbase",
		"quotedblright",
		"guillemotright",
		"ellipsis",
		"perthousand",
		NULL,
		"questiondown",
		NULL,
		"grave",
		"acute",
		"circumflex",
		"tilde",
		"macron",
		"breve",
		"dotaccent",
		"dieresis",
		NULL,
		"ring",
		"cedilla",
		NULL,
		"hungarumlaut",
		"ogonek",
		"caron",
		"emdash",
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		"AE",
		NULL,
		"ordfeminine",
		NULL,
		NULL,
		NULL,
		NULL,
		"Lslash",
		"Oslash",
		"OE",
		"ordmasculine",
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		"ae",
		NULL,
		NULL,
		NULL,
		"dotlessi",
		NULL,
		NULL,
		"lslash",
		"oslash",
		"oe",
		"germandbls",
		NULL,
		NULL,
		NULL,
		NULL
	};

	static char *c_arrsFontFileType1ExpertEncoding[256] =
	{
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		"space",
		"exclamsmall",
		"Hungarumlautsmall",
		NULL,
		"dollaroldstyle",
		"dollarsuperior",
		"ampersandsmall",
		"Acutesmall",
		"parenleftsuperior",
		"parenrightsuperior",
		"twodotenleader",
		"onedotenleader",
		"comma",
		"hyphen",
		"period",
		"fraction",
		"zerooldstyle",
		"oneoldstyle",
		"twooldstyle",
		"threeoldstyle",
		"fouroldstyle",
		"fiveoldstyle",
		"sixoldstyle",
		"sevenoldstyle",
		"eightoldstyle",
		"nineoldstyle",
		"colon",
		"semicolon",
		"commasuperior",
		"threequartersemdash",
		"periodsuperior",
		"questionsmall",
		NULL,
		"asuperior",
		"bsuperior",
		"centsuperior",
		"dsuperior",
		"esuperior",
		NULL,
		NULL,
		NULL,
		"isuperior",
		NULL,
		NULL,
		"lsuperior",
		"msuperior",
		"nsuperior",
		"osuperior",
		NULL,
		NULL,
		"rsuperior",
		"ssuperior",
		"tsuperior",
		NULL,
		"ff",
		"fi",
		"fl",
		"ffi",
		"ffl",
		"parenleftinferior",
		NULL,
		"parenrightinferior",
		"Circumflexsmall",
		"hyphensuperior",
		"Gravesmall",
		"Asmall",
		"Bsmall",
		"Csmall",
		"Dsmall",
		"Esmall",
		"Fsmall",
		"Gsmall",
		"Hsmall",
		"Ismall",
		"Jsmall",
		"Ksmall",
		"Lsmall",
		"Msmall",
		"Nsmall",
		"Osmall",
		"Psmall",
		"Qsmall",
		"Rsmall",
		"Ssmall",
		"Tsmall",
		"Usmall",
		"Vsmall",
		"Wsmall",
		"Xsmall",
		"Ysmall",
		"Zsmall",
		"colonmonetary",
		"onefitted",
		"rupiah",
		"Tildesmall",
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		"exclamdownsmall",
		"centoldstyle",
		"Lslashsmall",
		NULL,
		NULL,
		"Scaronsmall",
		"Zcaronsmall",
		"Dieresissmall",
		"Brevesmall",
		"Caronsmall",
		NULL,
		"Dotaccentsmall",
		NULL,
		NULL,
		"Macronsmall",
		NULL,
		NULL,
		"figuredash",
		"hypheninferior",
		NULL,
		NULL,
		"Ogoneksmall",
		"Ringsmall",
		"Cedillasmall",
		NULL,
		NULL,
		NULL,
		"onequarter",
		"onehalf",
		"threequarters",
		"questiondownsmall",
		"oneeighth",
		"threeeighths",
		"fiveeighths",
		"seveneighths",
		"onethird",
		"twothirds",
		NULL,
		NULL,
		"zerosuperior",
		"onesuperior",
		"twosuperior",
		"threesuperior",
		"foursuperior",
		"fivesuperior",
		"sixsuperior",
		"sevensuperior",
		"eightsuperior",
		"ninesuperior",
		"zeroinferior",
		"oneinferior",
		"twoinferior",
		"threeinferior",
		"fourinferior",
		"fiveinferior",
		"sixinferior",
		"seveninferior",
		"eightinferior",
		"nineinferior",
		"centinferior",
		"dollarinferior",
		"periodinferior",
		"commainferior",
		"Agravesmall",
		"Aacutesmall",
		"Acircumflexsmall",
		"Atildesmall",
		"Adieresissmall",
		"Aringsmall",
		"AEsmall",
		"Ccedillasmall",
		"Egravesmall",
		"Eacutesmall",
		"Ecircumflexsmall",
		"Edieresissmall",
		"Igravesmall",
		"Iacutesmall",
		"Icircumflexsmall",
		"Idieresissmall",
		"Ethsmall",
		"Ntildesmall",
		"Ogravesmall",
		"Oacutesmall",
		"Ocircumflexsmall",
		"Otildesmall",
		"Odieresissmall",
		"OEsmall",
		"Oslashsmall",
		"Ugravesmall",
		"Uacutesmall",
		"Ucircumflexsmall",
		"Udieresissmall",
		"Yacutesmall",
		"Thornsmall",
		"Ydieresissmall"
	};


	//------------------------------------------------------------------------
	// Type 1C font data
	//------------------------------------------------------------------------

	static char *c_arrsFontFileType1CStandardStrings[391] =
	{
		".notdef",
		"space",
		"exclam",
		"quotedbl",
		"numbersign",
		"dollar",
		"percent",
		"ampersand",
		"quoteright",
		"parenleft",
		"parenright",
		"asterisk",
		"plus",
		"comma",
		"hyphen",
		"period",
		"slash",
		"zero",
		"one",
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"eight",
		"nine",
		"colon",
		"semicolon",
		"less",
		"equal",
		"greater",
		"question",
		"at",
		"A",
		"B",
		"C",
		"D",
		"E",
		"F",
		"G",
		"H",
		"I",
		"J",
		"K",
		"L",
		"M",
		"N",
		"O",
		"P",
		"Q",
		"R",
		"S",
		"T",
		"U",
		"V",
		"W",
		"X",
		"Y",
		"Z",
		"bracketleft",
		"backslash",
		"bracketright",
		"asciicircum",
		"underscore",
		"quoteleft",
		"a",
		"b",
		"c",
		"d",
		"e",
		"f",
		"g",
		"h",
		"i",
		"j",
		"k",
		"l",
		"m",
		"n",
		"o",
		"p",
		"q",
		"r",
		"s",
		"t",
		"u",
		"v",
		"w",
		"x",
		"y",
		"z",
		"braceleft",
		"bar",
		"braceright",
		"asciitilde",
		"exclamdown",
		"cent",
		"sterling",
		"fraction",
		"yen",
		"florin",
		"section",
		"currency",
		"quotesingle",
		"quotedblleft",
		"guillemotleft",
		"guilsinglleft",
		"guilsinglright",
		"fi",
		"fl",
		"endash",
		"dagger",
		"daggerdbl",
		"periodcentered",
		"paragraph",
		"bullet",
		"quotesinglbase",
		"quotedblbase",
		"quotedblright",
		"guillemotright",
		"ellipsis",
		"perthousand",
		"questiondown",
		"grave",
		"acute",
		"circumflex",
		"tilde",
		"macron",
		"breve",
		"dotaccent",
		"dieresis",
		"ring",
		"cedilla",
		"hungarumlaut",
		"ogonek",
		"caron",
		"emdash",
		"AE",
		"ordfeminine",
		"Lslash",
		"Oslash",
		"OE",
		"ordmasculine",
		"ae",
		"dotlessi",
		"lslash",
		"oslash",
		"oe",
		"germandbls",
		"onesuperior",
		"logicalnot",
		"mu",
		"trademark",
		"Eth",
		"onehalf",
		"plusminus",
		"Thorn",
		"onequarter",
		"divide",
		"brokenbar",
		"degree",
		"thorn",
		"threequarters",
		"twosuperior",
		"registered",
		"minus",
		"eth",
		"multiply",
		"threesuperior",
		"copyright",
		"Aacute",
		"Acircumflex",
		"Adieresis",
		"Agrave",
		"Aring",
		"Atilde",
		"Ccedilla",
		"Eacute",
		"Ecircumflex",
		"Edieresis",
		"Egrave",
		"Iacute",
		"Icircumflex",
		"Idieresis",
		"Igrave",
		"Ntilde",
		"Oacute",
		"Ocircumflex",
		"Odieresis",
		"Ograve",
		"Otilde",
		"Scaron",
		"Uacute",
		"Ucircumflex",
		"Udieresis",
		"Ugrave",
		"Yacute",
		"Ydieresis",
		"Zcaron",
		"aacute",
		"acircumflex",
		"adieresis",
		"agrave",
		"aring",
		"atilde",
		"ccedilla",
		"eacute",
		"ecircumflex",
		"edieresis",
		"egrave",
		"iacute",
		"icircumflex",
		"idieresis",
		"igrave",
		"ntilde",
		"oacute",
		"ocircumflex",
		"odieresis",
		"ograve",
		"otilde",
		"scaron",
		"uacute",
		"ucircumflex",
		"udieresis",
		"ugrave",
		"yacute",
		"ydieresis",
		"zcaron",
		"exclamsmall",
		"Hungarumlautsmall",
		"dollaroldstyle",
		"dollarsuperior",
		"ampersandsmall",
		"Acutesmall",
		"parenleftsuperior",
		"parenrightsuperior",
		"twodotenleader",
		"onedotenleader",
		"zerooldstyle",
		"oneoldstyle",
		"twooldstyle",
		"threeoldstyle",
		"fouroldstyle",
		"fiveoldstyle",
		"sixoldstyle",
		"sevenoldstyle",
		"eightoldstyle",
		"nineoldstyle",
		"commasuperior",
		"threequartersemdash",
		"periodsuperior",
		"questionsmall",
		"asuperior",
		"bsuperior",
		"centsuperior",
		"dsuperior",
		"esuperior",
		"isuperior",
		"lsuperior",
		"msuperior",
		"nsuperior",
		"osuperior",
		"rsuperior",
		"ssuperior",
		"tsuperior",
		"ff",
		"ffi",
		"ffl",
		"parenleftinferior",
		"parenrightinferior",
		"Circumflexsmall",
		"hyphensuperior",
		"Gravesmall",
		"Asmall",
		"Bsmall",
		"Csmall",
		"Dsmall",
		"Esmall",
		"Fsmall",
		"Gsmall",
		"Hsmall",
		"Ismall",
		"Jsmall",
		"Ksmall",
		"Lsmall",
		"Msmall",
		"Nsmall",
		"Osmall",
		"Psmall",
		"Qsmall",
		"Rsmall",
		"Ssmall",
		"Tsmall",
		"Usmall",
		"Vsmall",
		"Wsmall",
		"Xsmall",
		"Ysmall",
		"Zsmall",
		"colonmonetary",
		"onefitted",
		"rupiah",
		"Tildesmall",
		"exclamdownsmall",
		"centoldstyle",
		"Lslashsmall",
		"Scaronsmall",
		"Zcaronsmall",
		"Dieresissmall",
		"Brevesmall",
		"Caronsmall",
		"Dotaccentsmall",
		"Macronsmall",
		"figuredash",
		"hypheninferior",
		"Ogoneksmall",
		"Ringsmall",
		"Cedillasmall",
		"questiondownsmall",
		"oneeighth",
		"threeeighths",
		"fiveeighths",
		"seveneighths",
		"onethird",
		"twothirds",
		"zerosuperior",
		"foursuperior",
		"fivesuperior",
		"sixsuperior",
		"sevensuperior",
		"eightsuperior",
		"ninesuperior",
		"zeroinferior",
		"oneinferior",
		"twoinferior",
		"threeinferior",
		"fourinferior",
		"fiveinferior",
		"sixinferior",
		"seveninferior",
		"eightinferior",
		"nineinferior",
		"centinferior",
		"dollarinferior",
		"periodinferior",
		"commainferior",
		"Agravesmall",
		"Aacutesmall",
		"Acircumflexsmall",
		"Atildesmall",
		"Adieresissmall",
		"Aringsmall",
		"AEsmall",
		"Ccedillasmall",
		"Egravesmall",
		"Eacutesmall",
		"Ecircumflexsmall",
		"Edieresissmall",
		"Igravesmall",
		"Iacutesmall",
		"Icircumflexsmall",
		"Idieresissmall",
		"Ethsmall",
		"Ntildesmall",
		"Ogravesmall",
		"Oacutesmall",
		"Ocircumflexsmall",
		"Otildesmall",
		"Odieresissmall",
		"OEsmall",
		"Oslashsmall",
		"Ugravesmall",
		"Uacutesmall",
		"Ucircumflexsmall",
		"Udieresissmall",
		"Yacutesmall",
		"Thornsmall",
		"Ydieresissmall",
		"001.000",
		"001.001",
		"001.002",
		"001.003",
		"Black",
		"Bold",
		"Book",
		"Light",
		"Medium",
		"Regular",
		"Roman",
		"Semibold"
	};

	static unsigned short c_arrnFontFileType1CISOAdobeCharset[229] =
	{
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
		10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
		20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
		30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
		40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
		50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
		60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
		70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
		80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
		90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
		100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
		110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
		120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
		130, 131, 132, 133, 134, 135, 136, 137, 138, 139,
		140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
		150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
		160, 161, 162, 163, 164, 165, 166, 167, 168, 169,
		170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
		180, 181, 182, 183, 184, 185, 186, 187, 188, 189,
		190, 191, 192, 193, 194, 195, 196, 197, 198, 199,
		200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
		210, 211, 212, 213, 214, 215, 216, 217, 218, 219,
		220, 221, 222, 223, 224, 225, 226, 227, 228
	};

	static unsigned short c_arrnFontFileType1CExpertCharset[166] =
	{
		0, 1, 229, 230, 231, 232, 233, 234, 235, 236,
		237, 238, 13, 14, 15, 99, 239, 240, 241, 242,
		243, 244, 245, 246, 247, 248, 27, 28, 249, 250,
		251, 252, 253, 254, 255, 256, 257, 258, 259, 260,
		261, 262, 263, 264, 265, 266, 109, 110, 267, 268,
		269, 270, 271, 272, 273, 274, 275, 276, 277, 278,
		279, 280, 281, 282, 283, 284, 285, 286, 287, 288,
		289, 290, 291, 292, 293, 294, 295, 296, 297, 298,
		299, 300, 301, 302, 303, 304, 305, 306, 307, 308,
		309, 310, 311, 312, 313, 314, 315, 316, 317, 318,
		158, 155, 163, 319, 320, 321, 322, 323, 324, 325,
		326, 150, 164, 169, 327, 328, 329, 330, 331, 332,
		333, 334, 335, 336, 337, 338, 339, 340, 341, 342,
		343, 344, 345, 346, 347, 348, 349, 350, 351, 352,
		353, 354, 355, 356, 357, 358, 359, 360, 361, 362,
		363, 364, 365, 366, 367, 368, 369, 370, 371, 372,
		373, 374, 375, 376, 377, 378
	};

	static unsigned short c_arrnFontFileType1CExpertSubsetCharset[87] =
	{
		0, 1, 231, 232, 235, 236, 237, 238, 13, 14,
		15, 99, 239, 240, 241, 242, 243, 244, 245, 246,
		247, 248, 27, 28, 249, 250, 251, 253, 254, 255,
		256, 257, 258, 259, 260, 261, 262, 263, 264, 265,
		266, 109, 110, 267, 268, 269, 270, 272, 300, 301,
		302, 305, 314, 315, 158, 155, 163, 320, 321, 322,
		323, 324, 325, 326, 150, 164, 169, 327, 328, 329,
		330, 331, 332, 333, 334, 335, 336, 337, 338, 339,
		340, 341, 342, 343, 344, 345, 346
	};


}
#endif // _PDF_READER_FONT_FILE_ENCODINGS_H
