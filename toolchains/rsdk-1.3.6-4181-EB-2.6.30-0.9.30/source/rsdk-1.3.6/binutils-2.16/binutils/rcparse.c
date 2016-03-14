/* A Bison parser, made from rcparse.y
   by GNU bison 1.35.  */

#define YYBISON 1		/* Identify Bison output.  */

# define	BEG	257
# define	END	258
# define	ACCELERATORS	259
# define	VIRTKEY	260
# define	ASCII	261
# define	NOINVERT	262
# define	SHIFT	263
# define	CONTROL	264
# define	ALT	265
# define	BITMAP	266
# define	CURSOR	267
# define	DIALOG	268
# define	DIALOGEX	269
# define	EXSTYLE	270
# define	CAPTION	271
# define	CLASS	272
# define	STYLE	273
# define	AUTO3STATE	274
# define	AUTOCHECKBOX	275
# define	AUTORADIOBUTTON	276
# define	CHECKBOX	277
# define	COMBOBOX	278
# define	CTEXT	279
# define	DEFPUSHBUTTON	280
# define	EDITTEXT	281
# define	GROUPBOX	282
# define	LISTBOX	283
# define	LTEXT	284
# define	PUSHBOX	285
# define	PUSHBUTTON	286
# define	RADIOBUTTON	287
# define	RTEXT	288
# define	SCROLLBAR	289
# define	STATE3	290
# define	USERBUTTON	291
# define	BEDIT	292
# define	HEDIT	293
# define	IEDIT	294
# define	FONT	295
# define	ICON	296
# define	LANGUAGE	297
# define	CHARACTERISTICS	298
# define	VERSIONK	299
# define	MENU	300
# define	MENUEX	301
# define	MENUITEM	302
# define	SEPARATOR	303
# define	POPUP	304
# define	CHECKED	305
# define	GRAYED	306
# define	HELP	307
# define	INACTIVE	308
# define	MENUBARBREAK	309
# define	MENUBREAK	310
# define	MESSAGETABLE	311
# define	RCDATA	312
# define	STRINGTABLE	313
# define	VERSIONINFO	314
# define	FILEVERSION	315
# define	PRODUCTVERSION	316
# define	FILEFLAGSMASK	317
# define	FILEFLAGS	318
# define	FILEOS	319
# define	FILETYPE	320
# define	FILESUBTYPE	321
# define	BLOCKSTRINGFILEINFO	322
# define	BLOCKVARFILEINFO	323
# define	VALUE	324
# define	BLOCK	325
# define	MOVEABLE	326
# define	FIXED	327
# define	PURE	328
# define	IMPURE	329
# define	PRELOAD	330
# define	LOADONCALL	331
# define	DISCARDABLE	332
# define	NOT	333
# define	QUOTEDSTRING	334
# define	STRING	335
# define	NUMBER	336
# define	SIZEDSTRING	337
# define	IGNORED_TOKEN	338
# define	NEG	339

#line 1 "rcparse.y"
 /* rcparse.y -- parser for Windows rc files
    Copyright 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2005
    Free Software Foundation, Inc.
    Written by Ian Lance Taylor, Cygnus Support.

    This file is part of GNU Binutils.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
    02111-1307, USA.  */

/* This is a parser for Windows rc files.  It is based on the parser
   by Gunther Ebert <gunther.ebert@ixos-leipzig.de>.  */

#include "bfd.h"
#include "bucomm.h"
#include "libiberty.h"
#include "windres.h"
#include "safe-ctype.h"

/* The current language.  */

static unsigned short language;

/* The resource information during a sub statement.  */

static struct res_res_info sub_res_info;

/* Dialog information.  This is built by the nonterminals styles and
   controls.  */

static struct dialog dialog;

/* This is used when building a style.  It is modified by the
   nonterminal styleexpr.  */

static unsigned long style;

/* These are used when building a control.  They are set before using
   control_params.  */

static unsigned long base_style;
static unsigned long default_style;
static unsigned long class;
static struct res_id res_text_field;
static unichar null_unichar;

/* This is used for COMBOBOX, LISTBOX and EDITTEXT which
   do not allow resource 'text' field in control definition. */
static const struct res_id res_null_text = { 1, {{0, &null_unichar}} };


#line 65 "rcparse.y"
#ifndef YYSTYPE
typedef union
{
  struct accelerator acc;
  struct accelerator *pacc;
  struct dialog_control *dialog_control;
  struct menuitem *menuitem;
  struct
  {
    struct rcdata_item *first;
    struct rcdata_item *last;
  } rcdata;
  struct rcdata_item *rcdata_item;
  struct stringtable_data *stringtable;
  struct fixed_versioninfo *fixver;
  struct ver_info *verinfo;
  struct ver_stringinfo *verstring;
  struct ver_varinfo *vervar;
  struct res_id id;
  struct res_res_info res_info;
  struct
  {
    unsigned short on;
    unsigned short off;
  } memflags;
  struct
  {
    unsigned long val;
    /* Nonzero if this number was explicitly specified as long.  */
    int dword;
  } i;
  unsigned long il;
  unsigned short is;
  const char *s;
  struct
  {
    unsigned long length;
    const char *s;
  } ss;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		500
#define	YYFLAG		-32768
#define	YYNTBASE	99

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 339 ? yytranslate[x] : 189)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const char yytranslate[] = {
  0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 92, 87, 2,
  97, 98, 90, 88, 95, 89, 2, 91, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 96, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 86, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 85, 2, 93, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 1, 3, 4, 5,
  6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
  16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
  36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
  46, 47, 48, 49, 50, 51, 52, 53, 54, 55,
  56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
  66, 67, 68, 69, 70, 71, 72, 73, 74, 75,
  76, 77, 78, 79, 80, 81, 82, 83, 84, 94
};

#if YYDEBUG
static const short yyprhs[] = {
  0, 0, 1, 4, 7, 10, 13, 16, 19, 22,
  25, 28, 31, 34, 37, 40, 43, 46, 53, 54,
  57, 60, 65, 67, 69, 71, 75, 78, 80, 82,
  84, 86, 88, 90, 95, 100, 101, 115, 116, 130,
  131, 146, 147, 151, 152, 156, 160, 164, 168, 172,
  178, 185, 193, 202, 206, 210, 215, 219, 220, 223,
  224, 229, 230, 235, 236, 241, 242, 247, 248, 253,
  254, 258, 270, 283, 296, 310, 311, 316, 317, 322,
  323, 327, 328, 333, 334, 339, 346, 355, 366, 378,
  379, 384, 385, 389, 390, 395, 396, 401, 402, 407,
  408, 413, 414, 419, 420, 424, 425, 430, 431, 447,
  454, 463, 473, 474, 477, 479, 482, 483, 487, 488,
  492, 493, 497, 498, 502, 507, 512, 516, 523, 524,
  527, 532, 535, 542, 543, 547, 550, 552, 554, 556,
  558, 560, 562, 569, 570, 573, 576, 580, 586, 589,
  595, 602, 610, 620, 625, 632, 637, 638, 641, 642,
  644, 646, 648, 652, 656, 657, 664, 665, 669, 674,
  681, 686, 693, 694, 701, 708, 712, 716, 720, 724,
  728, 729, 738, 746, 747, 753, 754, 758, 760, 762,
  764, 767, 770, 773, 775, 776, 779, 783, 788, 792,
  793, 796, 797, 800, 802, 804, 806, 808, 810, 812,
  814, 816, 818, 820, 823, 827, 832, 834, 838, 839,
  841, 844, 846, 848, 852, 855, 858, 862, 866, 870,
  874, 878, 882, 886, 890, 893, 895, 897, 901, 904,
  908, 912, 916, 920, 924, 928, 932
};
static const short yyrhs[] = {
  -1, 99, 100, 0, 99, 106, 0, 99, 107, 0,
  99, 108, 0, 99, 146, 0, 99, 147, 0, 99,
  148, 0, 99, 149, 0, 99, 154, 0, 99, 157,
  0, 99, 158, 0, 99, 163, 0, 99, 166, 0,
  99, 167, 0, 99, 84, 0, 172, 5, 175, 3,
  101, 4, 0, 0, 101, 102, 0, 103, 186, 0,
  103, 186, 95, 104, 0, 80, 0, 187, 0, 105,
  0, 104, 95, 105, 0, 104, 105, 0, 6, 0,
  7, 0, 8, 0, 9, 0, 10, 0, 11, 0,
  172, 12, 177, 179, 0, 172, 13, 176, 179, 0,
  0, 172, 14, 177, 112, 187, 183, 183, 183, 109,
  113, 3, 114, 4, 0, 0, 172, 15, 177, 112,
  187, 183, 183, 183, 110, 113, 3, 114, 4, 0,
  0, 172, 15, 177, 112, 187, 183, 183, 183, 183,
  111, 113, 3, 114, 4, 0, 0, 16, 96, 184,
  0, 0, 113, 17, 80, 0, 113, 18, 172, 0,
  113, 19, 180, 0, 113, 16, 184, 0, 113, 18,
  80, 0, 113, 41, 184, 95, 80, 0, 113, 41,
  184, 95, 80, 183, 0, 113, 41, 184, 95, 80,
  183, 183, 0, 113, 41, 184, 95, 80, 183, 183,
  183, 0, 113, 46, 172, 0, 113, 44, 184, 0,
  113, 43, 184, 183, 0, 113, 45, 184, 0, 0,
  114, 115, 0, 0, 20, 138, 116, 137, 0, 0,
  21, 138, 117, 137, 0, 0, 22, 138, 118, 137,
  0, 0, 38, 138, 119, 137, 0, 0, 23, 138,
  120, 137, 0, 0, 24, 121, 137, 0, 10, 138,
  184, 183, 140, 183, 183, 183, 183, 182, 139, 0,
  10, 138, 184, 183, 140, 183, 183, 183, 183, 183,
  183, 139, 0, 10, 138, 184, 95, 80, 140, 183,
  183, 183, 183, 182, 139, 0, 10, 138, 184, 95,
  80, 140, 183, 183, 183, 183, 183, 183, 139, 0,
  0, 25, 138, 122, 137, 0, 0, 26, 138, 123,
  137, 0, 0, 27, 124, 137, 0, 0, 28, 138,
  125, 137, 0, 0, 39, 138, 126, 137, 0, 42,
  174, 184, 183, 183, 139, 0, 42, 174, 184, 183,
  183, 183, 183, 139, 0, 42, 174, 184, 183, 183,
  183, 183, 142, 182, 139, 0, 42, 174, 184, 183,
  183, 183, 183, 142, 183, 183, 139, 0, 0, 40,
  138, 127, 137, 0, 0, 29, 128, 137, 0, 0,
  30, 138, 129, 137, 0, 0, 31, 138, 130, 137,
  0, 0, 32, 138, 131, 137, 0, 0, 33, 138,
  132, 137, 0, 0, 34, 138, 133, 137, 0, 0,
  35, 134, 137, 0, 0, 36, 138, 135, 137, 0,
  0, 37, 174, 184, 95, 184, 95, 184, 95, 184,
  95, 184, 95, 136, 180, 182, 0, 184, 183, 183,
  183, 183, 139, 0, 184, 183, 183, 183, 183, 144,
  182, 139, 0, 184, 183, 183, 183, 183, 144, 183,
  183, 139, 0, 0, 187, 95, 0, 80, 0, 80,
  95, 0, 0, 3, 159, 4, 0, 0, 95, 141,
  180, 0, 0, 95, 143, 180, 0, 0, 95, 145,
  180, 0, 172, 41, 176, 179, 0, 172, 42, 176,
  179, 0, 43, 184, 183, 0, 172, 46, 175, 3,
  150, 4, 0, 0, 150, 151, 0, 48, 80, 183,
  152, 0, 48, 49, 0, 50, 80, 152, 3, 150,
  4, 0, 0, 152, 95, 153, 0, 152, 153, 0,
  51, 0, 52, 0, 53, 0, 54, 0, 55, 0,
  56, 0, 172, 47, 175, 3, 155, 4, 0, 0,
  155, 156, 0, 48, 80, 0, 48, 80, 183, 0,
  48, 80, 183, 183, 182, 0, 48, 49, 0, 50,
  80, 3, 155, 4, 0, 50, 80, 183, 3, 155,
  4, 0, 50, 80, 183, 183, 3, 155, 4, 0,
  50, 80, 183, 183, 183, 182, 3, 155, 4, 0,
  172, 57, 177, 179, 0, 172, 58, 175, 3, 159,
  4, 0, 172, 58, 175, 179, 0, 0, 160, 161,
  0, 0, 162, 0, 83, 0, 185, 0, 162, 95,
  83, 0, 162, 95, 185, 0, 0, 59, 175, 3,
  164, 165, 4, 0, 0, 165, 184, 80, 0, 165,
  184, 95, 80, 0, 172, 172, 175, 3, 159, 4,
  0, 172, 172, 175, 179, 0, 172, 60, 168, 3,
  169, 4, 0, 0, 168, 61, 184, 183, 183, 183,
  0, 168, 62, 184, 183, 183, 183, 0, 168, 63,
  184, 0, 168, 64, 184, 0, 168, 65, 184, 0,
  168, 66, 184, 0, 168, 67, 184, 0, 0, 169,
  68, 3, 71, 3, 170, 4, 4, 0, 169, 69,
  3, 70, 80, 171, 4, 0, 0, 170, 70, 80,
  95, 80, 0, 0, 171, 183, 183, 0, 187, 0,
  81, 0, 80, 0, 80, 95, 0, 81, 95, 0,
  187, 95, 0, 173, 0, 0, 175, 178, 0, 175,
  44, 184, 0, 175, 43, 184, 183, 0, 175, 45,
  184, 0, 0, 176, 178, 0, 0, 177, 178, 0,
  72, 0, 73, 0, 74, 0, 75, 0, 76, 0,
  77, 0, 78, 0, 80, 0, 81, 0, 181, 0,
  79, 181, 0, 180, 85, 181, 0, 180, 85, 79,
  181, 0, 82, 0, 97, 184, 98, 0, 0, 183,
  0, 95, 184, 0, 185, 0, 82, 0, 97, 185,
  98, 0, 93, 185, 0, 89, 185, 0, 185, 90,
  185, 0, 185, 91, 185, 0, 185, 92, 185, 0,
  185, 88, 185, 0, 185, 89, 185, 0, 185, 87,
  185, 0, 185, 86, 185, 0, 185, 85, 185, 0,
  95, 187, 0, 188, 0, 82, 0, 97, 185, 98,
  0, 93, 185, 0, 188, 90, 185, 0, 188, 91,
  185, 0, 188, 92, 185, 0, 188, 88, 185, 0,
  188, 89, 185, 0, 188, 87, 185, 0, 188, 86,
  185, 0, 188, 85, 185, 0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] = {
  0, 161, 163, 164, 165, 166, 167, 168, 169, 170,
  171, 172, 173, 174, 175, 176, 177, 182, 192, 197,
  217, 223, 234, 256, 265, 270, 275, 281, 286, 291,
  295, 299, 303, 311, 323, 335, 335, 361, 361, 388,
  388, 418, 423, 429, 431, 437, 441, 446, 450, 454,
  467, 482, 497, 512, 516, 520, 524, 530, 532, 542,
  542, 554, 554, 565, 565, 576, 576, 590, 590, 601,
  601, 614, 625, 634, 647, 658, 658, 669, 669, 680,
  680, 691, 691, 702, 702, 716, 721, 727, 733, 739,
  739, 753, 753, 764, 764, 775, 775, 785, 785, 796,
  796, 807, 807, 818, 818, 829, 829, 840, 840, 857,
  869, 880, 891, 896, 901, 905, 911, 916, 924, 924,
  930, 930, 936, 936, 944, 956, 969, 978, 988, 993,
  1009, 1014, 1018, 1024, 1029, 1033, 1039, 1044, 1048, 1052,
  1056, 1060, 1068, 1078, 1083, 1099, 1104, 1108, 1112, 1116,
  1120, 1124, 1128, 1137, 1149, 1157, 1169, 1169, 1180, 1186,
  1192, 1201, 1209, 1218, 1231, 1231, 1237, 1239, 1246, 1258,
  1266, 1277, 1287, 1294, 1300, 1306, 1311, 1316, 1321, 1326,
  1339, 1344, 1348, 1354, 1359, 1365, 1370, 1378, 1384, 1399,
  1404, 1408, 1415, 1421, 1437, 1445, 1451, 1456, 1461, 1470,
  1477, 1487, 1494, 1505, 1511, 1516, 1521, 1526, 1531, 1536,
  1545, 1550, 1566, 1571, 1575, 1579, 1585, 1590, 1598, 1603,
  1611, 1620, 1629, 1634, 1638, 1643, 1648, 1653, 1658, 1663,
  1668, 1673, 1678, 1683, 1693, 1702, 1713, 1718, 1722, 1727,
  1732, 1737, 1742, 1747, 1752, 1757, 1762
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] = {
  "$", "error", "$undefined.", "BEG", "END", "ACCELERATORS", "VIRTKEY",
  "ASCII", "NOINVERT", "SHIFT", "CONTROL", "ALT", "BITMAP", "CURSOR",
  "DIALOG", "DIALOGEX", "EXSTYLE", "CAPTION", "CLASS", "STYLE",
  "AUTO3STATE", "AUTOCHECKBOX", "AUTORADIOBUTTON", "CHECKBOX", "COMBOBOX",
  "CTEXT", "DEFPUSHBUTTON", "EDITTEXT", "GROUPBOX", "LISTBOX", "LTEXT",
  "PUSHBOX", "PUSHBUTTON", "RADIOBUTTON", "RTEXT", "SCROLLBAR", "STATE3",
  "USERBUTTON", "BEDIT", "HEDIT", "IEDIT", "FONT", "ICON", "LANGUAGE",
  "CHARACTERISTICS", "VERSIONK", "MENU", "MENUEX", "MENUITEM",
  "SEPARATOR", "POPUP", "CHECKED", "GRAYED", "HELP", "INACTIVE",
  "MENUBARBREAK", "MENUBREAK", "MESSAGETABLE", "RCDATA", "STRINGTABLE",
  "VERSIONINFO", "FILEVERSION", "PRODUCTVERSION", "FILEFLAGSMASK",
  "FILEFLAGS", "FILEOS", "FILETYPE", "FILESUBTYPE", "BLOCKSTRINGFILEINFO",
  "BLOCKVARFILEINFO", "VALUE", "BLOCK", "MOVEABLE", "FIXED", "PURE",
  "IMPURE", "PRELOAD", "LOADONCALL", "DISCARDABLE", "NOT", "QUOTEDSTRING",
  "STRING", "NUMBER", "SIZEDSTRING", "IGNORED_TOKEN", "'|'", "'^'", "'&'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'~'", "NEG", "','", "'='", "'('",
  "')'", "input", "accelerator", "acc_entries", "acc_entry", "acc_event",
  "acc_options", "acc_option", "bitmap", "cursor", "dialog", "@1", "@2",
  "@3", "exstyle", "styles", "controls", "control", "@4", "@5", "@6",
  "@7", "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16",
  "@17", "@18", "@19", "@20", "@21", "@22", "@23", "@24",
  "control_params", "optresidc", "opt_control_data", "control_styleexpr",
  "@25", "icon_styleexpr", "@26", "control_params_styleexpr", "@27",
  "font", "icon", "language", "menu", "menuitems", "menuitem",
  "menuitem_flags", "menuitem_flag", "menuex", "menuexitems",
  "menuexitem", "messagetable", "rcdata", "optrcdata_data", "@28",
  "optrcdata_data_int", "rcdata_data", "stringtable", "@29",
  "string_data", "user", "versioninfo", "fixedverinfo", "verblocks",
  "vervals", "vertrans", "id", "resname", "resref", "suboptions",
  "memflags_move_discard", "memflags_move", "memflag", "file_name",
  "styleexpr", "parennumber", "optcnumexpr", "cnumexpr", "numexpr",
  "sizednumexpr", "cposnumexpr", "posnumexpr", "sizedposnumexpr", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] = {
  0, 99, 99, 99, 99, 99, 99, 99, 99, 99,
  99, 99, 99, 99, 99, 99, 99, 100, 101, 101,
  102, 102, 103, 103, 104, 104, 104, 105, 105, 105,
  105, 105, 105, 106, 107, 109, 108, 110, 108, 111,
  108, 112, 112, 113, 113, 113, 113, 113, 113, 113,
  113, 113, 113, 113, 113, 113, 113, 114, 114, 116,
  115, 117, 115, 118, 115, 119, 115, 120, 115, 121,
  115, 115, 115, 115, 115, 122, 115, 123, 115, 124,
  115, 125, 115, 126, 115, 115, 115, 115, 115, 127,
  115, 128, 115, 129, 115, 130, 115, 131, 115, 132,
  115, 133, 115, 134, 115, 135, 115, 136, 115, 137,
  137, 137, 138, 138, 138, 138, 139, 139, 141, 140,
  143, 142, 145, 144, 146, 147, 148, 149, 150, 150,
  151, 151, 151, 152, 152, 152, 153, 153, 153, 153,
  153, 153, 154, 155, 155, 156, 156, 156, 156, 156,
  156, 156, 156, 157, 158, 158, 160, 159, 161, 161,
  162, 162, 162, 162, 164, 163, 165, 165, 165, 166,
  166, 167, 168, 168, 168, 168, 168, 168, 168, 168,
  169, 169, 169, 170, 170, 171, 171, 172, 172, 173,
  173, 173, 174, 174, 175, 175, 175, 175, 175, 176,
  176, 177, 177, 178, 178, 178, 178, 178, 178, 178,
  179, 179, 180, 180, 180, 180, 181, 181, 182, 182,
  183, 184, 185, 185, 185, 185, 185, 185, 185, 185,
  185, 185, 185, 185, 186, 187, 188, 188, 188, 188,
  188, 188, 188, 188, 188, 188, 188
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] = {
  0, 0, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 6, 0, 2,
  2, 4, 1, 1, 1, 3, 2, 1, 1, 1,
  1, 1, 1, 4, 4, 0, 13, 0, 13, 0,
  14, 0, 3, 0, 3, 3, 3, 3, 3, 5,
  6, 7, 8, 3, 3, 4, 3, 0, 2, 0,
  4, 0, 4, 0, 4, 0, 4, 0, 4, 0,
  3, 11, 12, 12, 13, 0, 4, 0, 4, 0,
  3, 0, 4, 0, 4, 6, 8, 10, 11, 0,
  4, 0, 3, 0, 4, 0, 4, 0, 4, 0,
  4, 0, 4, 0, 3, 0, 4, 0, 15, 6,
  8, 9, 0, 2, 1, 2, 0, 3, 0, 3,
  0, 3, 0, 3, 4, 4, 3, 6, 0, 2,
  4, 2, 6, 0, 3, 2, 1, 1, 1, 1,
  1, 1, 6, 0, 2, 2, 3, 5, 2, 5,
  6, 7, 9, 4, 6, 4, 0, 2, 0, 1,
  1, 1, 3, 3, 0, 6, 0, 3, 4, 6,
  4, 6, 0, 6, 6, 3, 3, 3, 3, 3,
  0, 8, 7, 0, 5, 0, 3, 1, 1, 1,
  2, 2, 2, 1, 0, 2, 3, 4, 3, 0,
  2, 0, 2, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 2, 3, 4, 1, 3, 0, 1,
  2, 1, 1, 3, 2, 2, 3, 3, 3, 3,
  3, 3, 3, 3, 2, 1, 1, 3, 2, 3,
  3, 3, 3, 3, 3, 3, 3
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] = {
  1, 0, 0, 194, 188, 236, 16, 0, 0, 2,
  3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 0, 187, 235, 222, 0, 0, 0,
  0, 221, 0, 238, 0, 194, 201, 199, 201, 201,
  199, 199, 194, 194, 201, 194, 172, 194, 0, 0,
  0, 0, 0, 0, 0, 0, 225, 224, 0, 0,
  126, 0, 0, 0, 0, 0, 0, 0, 0, 164,
  0, 0, 0, 203, 204, 205, 206, 207, 208, 209,
  195, 237, 0, 0, 0, 41, 41, 0, 0, 0,
  0, 0, 0, 0, 0, 246, 245, 244, 242, 243,
  239, 240, 241, 223, 220, 233, 232, 231, 229, 230,
  226, 227, 228, 166, 0, 196, 198, 18, 210, 211,
  202, 33, 200, 34, 0, 0, 0, 124, 125, 128,
  143, 153, 156, 155, 180, 0, 0, 0, 0, 0,
  0, 0, 156, 170, 0, 197, 0, 0, 0, 0,
  0, 0, 0, 158, 0, 0, 0, 175, 176, 177,
  178, 179, 0, 165, 0, 17, 22, 19, 0, 23,
  42, 0, 0, 127, 0, 0, 129, 142, 0, 0,
  144, 154, 160, 157, 159, 161, 171, 0, 0, 0,
  0, 169, 167, 0, 0, 20, 0, 0, 131, 0,
  133, 148, 145, 0, 0, 0, 0, 0, 0, 168,
  234, 0, 35, 37, 133, 0, 146, 143, 0, 162,
  163, 0, 0, 173, 174, 27, 28, 29, 30, 31,
  32, 21, 24, 43, 43, 39, 130, 128, 136, 137,
  138, 139, 140, 141, 0, 135, 218, 0, 143, 0,
  183, 185, 0, 26, 0, 0, 43, 0, 134, 147,
  219, 149, 0, 143, 218, 0, 0, 25, 57, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
  132, 150, 0, 0, 0, 0, 182, 0, 0, 47,
  44, 48, 45, 0, 216, 0, 46, 212, 0, 0,
  54, 56, 53, 0, 57, 151, 143, 181, 0, 186,
  36, 112, 112, 112, 112, 112, 69, 112, 112, 79,
  112, 91, 112, 112, 112, 112, 112, 103, 112, 0,
  112, 112, 112, 0, 58, 213, 0, 0, 0, 55,
  38, 0, 0, 0, 114, 0, 0, 59, 61, 63,
  67, 0, 75, 77, 0, 81, 0, 93, 95, 97,
  99, 101, 0, 105, 189, 0, 193, 0, 0, 65,
  83, 89, 0, 217, 0, 214, 49, 40, 152, 184,
  115, 0, 113, 0, 0, 0, 0, 70, 0, 0,
  0, 80, 0, 92, 0, 0, 0, 0, 0, 104,
  0, 190, 191, 0, 192, 0, 0, 0, 0, 215,
  50, 0, 0, 60, 62, 64, 68, 0, 76, 78,
  82, 94, 96, 98, 100, 102, 106, 0, 66, 84,
  90, 0, 51, 0, 118, 0, 0, 0, 116, 52,
  0, 0, 0, 0, 0, 156, 85, 0, 0, 119,
  0, 116, 0, 0, 116, 0, 0, 122, 109, 218,
  0, 117, 120, 86, 218, 0, 218, 0, 116, 219,
  0, 0, 116, 219, 218, 116, 219, 123, 110, 116,
  0, 121, 87, 116, 116, 219, 71, 116, 111, 0,
  88, 73, 116, 72, 107, 74, 0, 218, 108, 0,
  0
};

static const short yydefgoto[] = {
  1, 9, 146, 167, 168, 231, 232, 10, 11, 12,
  233, 234, 256, 125, 254, 288, 334, 383, 384, 385,
  405, 386, 351, 389, 390, 354, 392, 406, 407, 356,
  394, 395, 396, 397, 398, 362, 400, 496, 387, 345,
  446, 435, 441, 464, 471, 459, 467, 13, 14, 15,
  16, 150, 176, 215, 245, 17, 151, 180, 18, 19,
  152, 153, 183, 184, 20, 113, 144, 21, 22, 93,
  154, 265, 266, 23, 366, 367, 32, 84, 83, 80,
  121, 296, 297, 259, 260, 388, 31, 195, 346, 25
};

static const short yypact[] = {
  -32768, 13, 287, -32768, -32768, -32768, -32768, 287, 287, -32768,
  -32768, -32768, -32768, -32768, -32768, -32768, -32768, -32768, -32768,
    -32768,
  -32768, -32768, -32768, 106, -32768, 585, -32768, 287, 287, 287,
  -71, 675, 83, -32768, 637, -32768, -32768, -32768, -32768, -32768,
  -32768, -32768, -32768, -32768, -32768, -32768, -32768, -32768, 287, 287,
  287, 287, 287, 287, 287, 287, -32768, -32768, 651, 287,
  -32768, 287, 287, 287, 287, 287, 287, 287, 287, -32768,
  287, 287, 287, -32768, -32768, -32768, -32768, -32768, -32768, -32768,
  -32768, -32768, 286, 678, 678, 188, 188, 678, 678, 323,
  375, 678, 210, 128, 274, 682, 688, 642, -37, -37,
  -32768, -32768, -32768, -32768, -32768, 682, 688, 642, -37, -37,
  -32768, -32768, -32768, -32768, -71, -32768, -32768, -32768, -32768, -32768,
  -32768, -32768, -32768, -32768, -49, 141, 141, -32768, -32768, -32768,
  -32768, -32768, -32768, -32768, -32768, 287, 287, 287, 287, 287,
  287, 287, -32768, -32768, -1, -32768, 5, 287, -71, -71,
  34, 96, 47, 373, 39, -71, -71, -32768, -32768, -32768,
  -32768, -32768, 54, -32768, -46, -32768, -32768, -32768, -12, -32768,
  -32768, -71, -71, -32768, -43, 10, -32768, -32768, -35, 32,
  -32768, -32768, -32768, -32768, 28, 675, -32768, 113, 121, -71,
  -71, -32768, -32768, 52, 141, 46, -71, -71, -32768, -71,
  -32768, -32768, -71, 8, 454, 97, 112, -71, -71, -32768,
  -32768, 775, -32768, -71, -32768, 119, -71, -32768, 9, -32768,
  675, 151, 87, -32768, -32768, -32768, -32768, -32768, -32768, -32768,
  -32768, 22, -32768, -32768, -32768, -32768, 245, -32768, -32768, -32768,
  -32768, -32768, -32768, -32768, 736, -32768, -71, 101, -32768, 14,
  -32768, -32768, 775, -32768, 370, 512, -32768, 158, -32768, -32768,
  -32768, -32768, 172, -32768, -71, 21, 6, -32768, -32768, 287,
  116, 227, 133, 287, 287, 287, 287, 260, -32768, 523,
  -32768, -32768, 179, 183, 95, 125, -32768, -71, 584, -32768,
  -32768, -32768, -32768, 43, -32768, 287, 126, -32768, 115, -71,
  -32768, -32768, -32768, 621, -32768, -32768, -32768, -32768, 138, -32768,
  -32768, 297, 297, 297, 297, 297, -32768, 297, 297, -32768,
  297, -32768, 297, 297, 297, 297, 297, -32768, 297, 230,
  297, 297, 297, 230, -32768, -32768, 137, 142, 164, -32768,
  -32768, 658, 193, 166, 153, 287, 154, -32768, -32768, -32768,
  -32768, 287, -32768, -32768, 287, -32768, 287, -32768, -32768, -32768,
  -32768, -32768, 287, -32768, 163, 173, -32768, 287, 174, -32768,
  -32768, -32768, 287, -32768, 43, -32768, -71, -32768, -32768, -32768,
  -32768, 175, -32768, 287, 287, 287, 287, -32768, -71, 287,
  287, -32768, 287, -32768, 287, 287, 287, 287, 287, -32768,
  287, -32768, -32768, 181, -32768, 287, 287, 287, -71, -32768,
  -71, 341, 184, -32768, -32768, -32768, -32768, -71, -32768, -32768,
  -32768, -32768, -32768, -32768, -32768, -32768, -32768, 287, -32768, -32768,
  -32768, -71, -71, 184, -32768, -71, -71, 185, 18, -32768,
  -71, 133, -71, -71, 287, -32768, -32768, -71, -71, 126,
  -71, 19, 197, 255, 20, -71, -71, -32768, -32768, -71,
  287, -32768, -32768, -32768, -71, -71, -71, 133, 291, -71,
  207, 133, 291, -71, -71, 291, -71, 126, -32768, 291,
  287, 126, -32768, 291, 291, -71, -32768, 291, -32768, 208,
  -32768, -32768, 291, -32768, -32768, -32768, 133, 84, -32768, 305,
  -32768
};

static const short yypgoto[] = {
  -32768, -32768, -32768, -32768, -32768, -32768, -216, -32768, -32768,
    -32768,
  -32768, -32768, -32768, 220, -208, -260, -32768, -32768, -32768, -32768,
  -32768, -32768, -32768, -32768, -32768, -32768, -32768, -32768, -32768,
    -32768,
  -32768, -32768, -32768, -32768, -32768, -32768, -32768, -32768, 127, 389,
  108, -120, -32768, -32768, -32768, -32768, -32768, -32768, -32768, -32768,
  -32768, 77, -32768, 107, 71, -32768, -213, -32768, -32768, -32768,
  -141, -32768, -32768, -32768, -32768, -32768, -32768, -32768, -32768,
    -32768,
  -32768, -32768, -32768, -21, -32768, -11, 398, 140, 213, 549,
  487, -425, -285, -257, 29, -2, 12, -32768, 4, -32768
};


#define	YYLAST		792


static const short yytable[] = {
  30, 162, 47, 163, 247, 24, 198, 283, 335, 165,
  286, 217, 248, 499, 201, 253, 449, 263, 303, 33,
  34, 445, 445, 445, 59, 284, 255, 24, 225, 226,
  227, 228, 229, 230, 192, 262, 267, 199, 173, 56,
  57, 58, 477, 186, 341, 202, 481, 147, 279, 193,
  282, 181, 375, 66, 67, 68, 2, 104, 191, 60,
  95, 96, 97, 98, 99, 100, 101, 102, 114, 115,
  116, 497, 3, 105, 106, 107, 108, 109, 110, 111,
  112, 26, 174, 194, 175, 166, 69, 5, 27, 409,
  200, 285, 28, 342, 4, 5, 29, 6, 7, 307,
  177, 59, 8, 59, 59, 261, 7, 187, 188, 59,
  8, 35, 203, 59, 457, 462, 205, 252, 36, 37,
  38, 39, 237, 204, 206, 294, 70, 71, 72, 148,
  149, 134, 209, 155, 156, 157, 158, 159, 160, 161,
  295, 211, 164, 145, 178, 170, 179, 40, 41, 178,
  169, 179, 42, 43, 250, 73, 74, 75, 76, 77,
  78, 79, 280, 44, 45, 185, 46, 251, 221, 337,
  238, 239, 240, 241, 242, 243, 281, 171, 172, 59,
  87, 88, 222, 305, 189, 190, 306, 4, 5, 135,
  136, 137, 138, 139, 140, 141, 290, 378, 210, 7,
  196, 197, 468, 8, 124, 308, 174, 472, 175, 475,
  338, 337, 293, 132, 244, 294, 220, 484, 207, 208,
  178, 374, 179, 5, 294, 212, 213, 178, 214, 179,
  295, 216, 218, 343, 7, 373, 223, 224, 8, 295,
  498, 178, 235, 179, 376, 246, 379, 249, 380, 382,
  292, 85, 86, 70, 71, 72, 302, 91, 401, 461,
  73, 74, 75, 76, 77, 78, 79, 289, 402, 404,
  411, 298, 299, 300, 301, 24, 427, 142, 264, 434,
  444, 24, 73, 74, 75, 76, 77, 78, 79, 117,
  118, 119, 460, 336, 445, 287, 238, 239, 240, 241,
  242, 243, 480, 494, 453, 500, 126, 291, 4, 5,
  364, 365, 5, 440, 257, 258, 309, 70, 71, 72,
  7, 236, 372, 7, 8, 0, 129, 8, 339, 70,
  71, 72, 0, 368, 0, 0, 0, 368, 0, 0,
  244, 4, 5, 381, 0, 0, 73, 74, 75, 76,
  77, 78, 79, 7, 118, 119, 0, 8, 73, 74,
  75, 76, 77, 78, 79, 403, 70, 71, 72, 26,
  408, 0, 0, 268, 0, 0, 27, 344, 130, 5,
  28, 0, 0, 0, 29, 0, 269, 270, 271, 272,
  7, 0, 0, 0, 8, 73, 74, 75, 76, 77,
  78, 79, 0, 0, 0, 410, 0, 0, 0, 104,
  412, 273, 0, 274, 275, 276, 277, 417, 70, 71,
  72, 433, 0, 26, 0, 437, 0, 0, 0, 0,
  27, 0, 0, 82, 28, 0, 0, 431, 29, 432,
  89, 90, 452, 92, 0, 94, 436, 73, 74, 75,
  76, 77, 78, 79, 0, 26, 182, 0, 470, 0,
  438, 439, 27, 0, 442, 443, 28, 447, 0, 448,
  29, 450, 451, 0, 0, 0, 454, 455, 489, 456,
  0, 391, 0, 393, 465, 466, 0, 0, 469, 399,
  0, 0, 0, 473, 474, 476, 0, 0, 479, 0,
  0, 0, 483, 485, 0, 487, 0, 0, 0, 0,
  413, 414, 415, 416, 492, 278, 418, 419, 0, 420,
  0, 421, 422, 423, 424, 425, 304, 426, 269, 270,
  271, 272, 428, 429, 430, 0, 26, 219, 0, 269,
  270, 271, 272, 27, 0, 0, 0, 28, 0, 0,
  0, 29, 0, 273, 0, 274, 275, 276, 277, 458,
  0, 0, 463, 0, 273, 0, 274, 275, 276, 277,
  0, 123, 0, 0, 127, 128, 478, 0, 131, 133,
  482, 143, 0, 486, 0, 0, 0, 488, 310, 0,
  0, 490, 491, 0, 311, 493, 0, 0, 0, 0,
  495, 0, 0, 0, 312, 313, 314, 315, 316, 317,
  318, 319, 320, 321, 322, 323, 324, 325, 326, 327,
  328, 329, 330, 331, 332, 340, 333, 0, 0, 0,
  0, 311, 120, 122, 120, 120, 122, 122, 0, 0,
  120, 312, 313, 314, 315, 316, 317, 318, 319, 320,
  321, 322, 323, 324, 325, 326, 327, 328, 329, 330,
  331, 332, 377, 333, 0, 0, 0, 0, 311, 0,
  48, 49, 50, 51, 52, 53, 54, 55, 312, 313,
  314, 315, 316, 317, 318, 319, 320, 321, 322, 323,
  324, 325, 326, 327, 328, 329, 330, 331, 332, 0,
  333, 347, 348, 349, 350, 0, 352, 353, 0, 355,
  0, 357, 358, 359, 360, 361, 0, 363, 0, 369,
  370, 371, 61, 62, 63, 64, 65, 66, 67, 68,
  64, 65, 66, 67, 68, 81, 61, 62, 63, 64,
  65, 66, 67, 68, 0, 0, 0, 0, 0, 103,
  73, 74, 75, 76, 77, 78, 79, 0, 118, 119,
  61, 62, 63, 64, 65, 66, 67, 68, 62, 63,
  64, 65, 66, 67, 68, 63, 64, 65, 66, 67,
  68, 225, 226, 227, 228, 229, 230, 238, 239, 240,
  241, 242, 243
};

static const short yycheck[] = {
  2, 142, 23, 4, 217, 1, 49, 264, 293, 4,
  4, 3, 3, 0, 49, 231, 441, 3, 278, 7,
  8, 3, 3, 3, 95, 4, 234, 23, 6, 7,
  8, 9, 10, 11, 80, 248, 252, 80, 4, 27,
  28, 29, 467, 4, 304, 80, 471, 96, 256, 95,
  263, 4, 337, 90, 91, 92, 43, 59, 4, 30,
  48, 49, 50, 51, 52, 53, 54, 55, 70, 71,
  72, 496, 59, 61, 62, 63, 64, 65, 66, 67,
  68, 82, 48, 95, 50, 80, 3, 82, 89, 374,
  80, 70, 93, 306, 81, 82, 97, 84, 93, 4,
  4, 95, 97, 95, 95, 4, 93, 68, 69, 95,
  97, 5, 80, 95, 95, 95, 3, 95, 12, 13,
  14, 15, 3, 95, 3, 82, 43, 44, 45, 125,
  126, 3, 80, 135, 136, 137, 138, 139, 140, 141,
  97, 95, 144, 114, 48, 147, 50, 41, 42, 48,
  146, 50, 46, 47, 3, 72, 73, 74, 75, 76,
  77, 78, 4, 57, 58, 153, 60, 80, 71, 85,
  51, 52, 53, 54, 55, 56, 4, 148, 149, 95,
  40, 41, 70, 4, 155, 156, 3, 81, 82, 61,
  62, 63, 64, 65, 66, 67, 80, 4, 194, 93,
  171, 172, 459, 97, 16, 80, 48, 464, 50, 466,
  95, 85, 79, 3, 95, 82, 204, 474, 189, 190,
  48, 79, 50, 82, 82, 196, 197, 48, 199, 50,
  97, 202, 203, 95, 93, 98, 207, 208, 97, 97,
  497, 48, 213, 50, 80, 216, 80, 218, 95, 95,
  271, 38, 39, 43, 44, 45, 277, 44, 95, 4,
  72, 73, 74, 75, 76, 77, 78, 269, 95, 95,
  95, 273, 274, 275, 276, 271, 95, 3, 249, 95,
  95, 277, 72, 73, 74, 75, 76, 77, 78, 3,
  80, 81, 95, 295, 3, 266, 51, 52, 53, 54,
  55, 56, 95, 95, 445, 0, 86, 80, 81, 82,
  80, 81, 82, 433, 237, 244, 287, 43, 44, 45,
  93, 214, 333, 93, 97, -1, 3, 97, 299, 43,
  44, 45, -1, 329, -1, -1, -1, 333, -1, -1,
  95, 81, 82, 345, -1, -1, 72, 73, 74, 75,
  76, 77, 78, 93, 80, 81, -1, 97, 72, 73,
  74, 75, 76, 77, 78, 367, 43, 44, 45, 82,
  372, -1, -1, 3, -1, -1, 89, 80, 3, 82,
  93, -1, -1, -1, 97, -1, 16, 17, 18, 19,
  93, -1, -1, -1, 97, 72, 73, 74, 75, 76,
  77, 78, -1, -1, -1, 376, -1, -1, -1, 411,
  381, 41, -1, 43, 44, 45, 46, 388, 43, 44,
  45, 80, -1, 82, -1, 427, -1, -1, -1, -1,
  89, -1, -1, 35, 93, -1, -1, 408, 97, 410,
  42, 43, 444, 45, -1, 47, 417, 72, 73, 74,
  75, 76, 77, 78, -1, 82, 83, -1, 460, -1,
  431, 432, 89, -1, 435, 436, 93, 438, -1, 440,
  97, 442, 443, -1, -1, -1, 447, 448, 480, 450,
  -1, 354, -1, 356, 455, 456, -1, -1, 459, 362,
  -1, -1, -1, 464, 465, 466, -1, -1, 469, -1,
  -1, -1, 473, 474, -1, 476, -1, -1, -1, -1,
  383, 384, 385, 386, 485, 3, 389, 390, -1, 392,
  -1, 394, 395, 396, 397, 398, 3, 400, 16, 17,
  18, 19, 405, 406, 407, -1, 82, 83, -1, 16,
  17, 18, 19, 89, -1, -1, -1, 93, -1, -1,
  -1, 97, -1, 41, -1, 43, 44, 45, 46, 451,
  -1, -1, 454, -1, 41, -1, 43, 44, 45, 46,
  -1, 84, -1, -1, 87, 88, 468, -1, 91, 92,
  472, 94, -1, 475, -1, -1, -1, 479, 4, -1,
  -1, 483, 484, -1, 10, 487, -1, -1, -1, -1,
  492, -1, -1, -1, 20, 21, 22, 23, 24, 25,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
  36, 37, 38, 39, 40, 4, 42, -1, -1, -1,
  -1, 10, 83, 84, 85, 86, 87, 88, -1, -1,
  91, 20, 21, 22, 23, 24, 25, 26, 27, 28,
  29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 4, 42, -1, -1, -1, -1, 10, -1,
  85, 86, 87, 88, 89, 90, 91, 92, 20, 21,
  22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
  32, 33, 34, 35, 36, 37, 38, 39, 40, -1,
  42, 312, 313, 314, 315, -1, 317, 318, -1, 320,
  -1, 322, 323, 324, 325, 326, -1, 328, -1, 330,
  331, 332, 85, 86, 87, 88, 89, 90, 91, 92,
  88, 89, 90, 91, 92, 98, 85, 86, 87, 88,
  89, 90, 91, 92, -1, -1, -1, -1, -1, 98,
  72, 73, 74, 75, 76, 77, 78, -1, 80, 81,
  85, 86, 87, 88, 89, 90, 91, 92, 86, 87,
  88, 89, 90, 91, 92, 87, 88, 89, 90, 91,
  92, 6, 7, 8, 9, 10, 11, 51, 52, 53,
  54, 55, 56
};

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h>		/* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h>		/* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif	/* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h>		/* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   include <string.h>
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 316 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif /* !YYPURE */
  int
yyparse (YYPARSE_PARAM_ARG)
  YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif /* !YYPURE */
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
   */
  yyssp++;

yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp), &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp), &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (!yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
      /* We have to keep this `#if YYDEBUG', since we use variables
         which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
     New state is final state => don't bother to shift,
     just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1 - yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1 - yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn)
    {

    case 17:
#line 184 "rcparse.y"
      {
	define_accelerator (yyvsp[-5].id, &yyvsp[-3].res_info,
			    yyvsp[-1].pacc);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 18:
#line 194 "rcparse.y"
      {
	yyval.pacc = NULL;
      }
      break;
    case 19:
#line 198 "rcparse.y"
      {
	struct accelerator *a;

	a = (struct accelerator *) res_alloc (sizeof *a);
	*a = yyvsp[0].acc;
	if (yyvsp[-1].pacc == NULL)
	  yyval.pacc = a;
	else
	  {
	    struct accelerator **pp;

	    for (pp = &yyvsp[-1].pacc->next; *pp != NULL; pp = &(*pp)->next)
	      ;
	    *pp = a;
	    yyval.pacc = yyvsp[-1].pacc;
	  }
      }
      break;
    case 20:
#line 219 "rcparse.y"
      {
	yyval.acc = yyvsp[-1].acc;
	yyval.acc.id = yyvsp[0].il;
      }
      break;
    case 21:
#line 224 "rcparse.y"
      {
	yyval.acc = yyvsp[-3].acc;
	yyval.acc.id = yyvsp[-2].il;
	yyval.acc.flags |= yyvsp[0].is;
	if ((yyval.acc.flags & ACC_VIRTKEY) == 0
	    && (yyval.acc.flags & (ACC_SHIFT | ACC_CONTROL)) != 0)
	  rcparse_warning (_("inappropriate modifiers for non-VIRTKEY"));
      }
      break;
    case 22:
#line 236 "rcparse.y"
      {
	const char *s = yyvsp[0].s;
	char ch;

	yyval.acc.next = NULL;
	yyval.acc.id = 0;
	ch = *s;
	if (ch != '^')
	  yyval.acc.flags = 0;
	else
	  {
	    yyval.acc.flags = ACC_CONTROL | ACC_VIRTKEY;
	    ++s;
	    ch = *s;
	    ch = TOUPPER (ch);
	  }
	yyval.acc.key = ch;
	if (s[1] != '\0')
	  rcparse_warning (_("accelerator should only be one character"));
      }
      break;
    case 23:
#line 257 "rcparse.y"
      {
	yyval.acc.next = NULL;
	yyval.acc.flags = 0;
	yyval.acc.id = 0;
	yyval.acc.key = yyvsp[0].il;
      }
      break;
    case 24:
#line 267 "rcparse.y"
      {
	yyval.is = yyvsp[0].is;
      }
      break;
    case 25:
#line 271 "rcparse.y"
      {
	yyval.is = yyvsp[-2].is | yyvsp[0].is;
      }
      break;
    case 26:
#line 276 "rcparse.y"
      {
	yyval.is = yyvsp[-1].is | yyvsp[0].is;
      }
      break;
    case 27:
#line 283 "rcparse.y"
      {
	yyval.is = ACC_VIRTKEY;
      }
      break;
    case 28:
#line 287 "rcparse.y"
      {
	/* This is just the absence of VIRTKEY.  */
	yyval.is = 0;
      }
      break;
    case 29:
#line 292 "rcparse.y"
      {
	yyval.is = ACC_NOINVERT;
      }
      break;
    case 30:
#line 296 "rcparse.y"
      {
	yyval.is = ACC_SHIFT;
      }
      break;
    case 31:
#line 300 "rcparse.y"
      {
	yyval.is = ACC_CONTROL;
      }
      break;
    case 32:
#line 304 "rcparse.y"
      {
	yyval.is = ACC_ALT;
      }
      break;
    case 33:
#line 313 "rcparse.y"
      {
	define_bitmap (yyvsp[-3].id, &yyvsp[-1].res_info, yyvsp[0].s);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 34:
#line 325 "rcparse.y"
      {
	define_cursor (yyvsp[-3].id, &yyvsp[-1].res_info, yyvsp[0].s);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 35:
#line 338 "rcparse.y"
      {
	memset (&dialog, 0, sizeof dialog);
	dialog.x = yyvsp[-3].il;
	dialog.y = yyvsp[-2].il;
	dialog.width = yyvsp[-1].il;
	dialog.height = yyvsp[0].il;
	dialog.style = WS_POPUP | WS_BORDER | WS_SYSMENU;
	dialog.exstyle = yyvsp[-4].il;
	dialog.menu.named = 1;
	dialog.class.named = 1;
	dialog.font = NULL;
	dialog.ex = NULL;
	dialog.controls = NULL;
	sub_res_info = yyvsp[-5].res_info;
	style = 0;
      }
      break;
    case 36:
#line 355 "rcparse.y"
      {
	define_dialog (yyvsp[-12].id, &sub_res_info, &dialog);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 37:
#line 363 "rcparse.y"
      {
	memset (&dialog, 0, sizeof dialog);
	dialog.x = yyvsp[-3].il;
	dialog.y = yyvsp[-2].il;
	dialog.width = yyvsp[-1].il;
	dialog.height = yyvsp[0].il;
	dialog.style = WS_POPUP | WS_BORDER | WS_SYSMENU;
	dialog.exstyle = yyvsp[-4].il;
	dialog.menu.named = 1;
	dialog.class.named = 1;
	dialog.font = NULL;
	dialog.ex = ((struct dialog_ex *)
		     res_alloc (sizeof (struct dialog_ex)));
	memset (dialog.ex, 0, sizeof (struct dialog_ex));
	dialog.controls = NULL;
	sub_res_info = yyvsp[-5].res_info;
	style = 0;
      }
      break;
    case 38:
#line 382 "rcparse.y"
      {
	define_dialog (yyvsp[-12].id, &sub_res_info, &dialog);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 39:
#line 390 "rcparse.y"
      {
	memset (&dialog, 0, sizeof dialog);
	dialog.x = yyvsp[-4].il;
	dialog.y = yyvsp[-3].il;
	dialog.width = yyvsp[-2].il;
	dialog.height = yyvsp[-1].il;
	dialog.style = WS_POPUP | WS_BORDER | WS_SYSMENU;
	dialog.exstyle = yyvsp[-5].il;
	dialog.menu.named = 1;
	dialog.class.named = 1;
	dialog.font = NULL;
	dialog.ex = ((struct dialog_ex *)
		     res_alloc (sizeof (struct dialog_ex)));
	memset (dialog.ex, 0, sizeof (struct dialog_ex));
	dialog.ex->help = yyvsp[0].il;
	dialog.controls = NULL;
	sub_res_info = yyvsp[-6].res_info;
	style = 0;
      }
      break;
    case 40:
#line 410 "rcparse.y"
      {
	define_dialog (yyvsp[-13].id, &sub_res_info, &dialog);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 41:
#line 420 "rcparse.y"
      {
	yyval.il = 0;
      }
      break;
    case 42:
#line 424 "rcparse.y"
      {
	yyval.il = yyvsp[0].il;
      }
      break;
    case 44:
#line 432 "rcparse.y"
      {
	dialog.style |= WS_CAPTION;
	style |= WS_CAPTION;
	unicode_from_ascii ((int *) NULL, &dialog.caption, yyvsp[0].s);
      }
      break;
    case 45:
#line 438 "rcparse.y"
      {
	dialog.class = yyvsp[0].id;
      }
      break;
    case 46:
#line 443 "rcparse.y"
      {
	dialog.style = style;
      }
      break;
    case 47:
#line 447 "rcparse.y"
      {
	dialog.exstyle = yyvsp[0].il;
      }
      break;
    case 48:
#line 451 "rcparse.y"
      {
	res_string_to_id (&dialog.class, yyvsp[0].s);
      }
      break;
    case 49:
#line 455 "rcparse.y"
      {
	dialog.style |= DS_SETFONT;
	style |= DS_SETFONT;
	dialog.pointsize = yyvsp[-2].il;
	unicode_from_ascii ((int *) NULL, &dialog.font, yyvsp[0].s);
	if (dialog.ex != NULL)
	  {
	    dialog.ex->weight = 0;
	    dialog.ex->italic = 0;
	    dialog.ex->charset = 1;
	  }
      }
      break;
    case 50:
#line 468 "rcparse.y"
      {
	dialog.style |= DS_SETFONT;
	style |= DS_SETFONT;
	dialog.pointsize = yyvsp[-3].il;
	unicode_from_ascii ((int *) NULL, &dialog.font, yyvsp[-1].s);
	if (dialog.ex == NULL)
	  rcparse_warning (_("extended FONT requires DIALOGEX"));
	else
	  {
	    dialog.ex->weight = yyvsp[0].il;
	    dialog.ex->italic = 0;
	    dialog.ex->charset = 1;
	  }
      }
      break;
    case 51:
#line 483 "rcparse.y"
      {
	dialog.style |= DS_SETFONT;
	style |= DS_SETFONT;
	dialog.pointsize = yyvsp[-4].il;
	unicode_from_ascii ((int *) NULL, &dialog.font, yyvsp[-2].s);
	if (dialog.ex == NULL)
	  rcparse_warning (_("extended FONT requires DIALOGEX"));
	else
	  {
	    dialog.ex->weight = yyvsp[-1].il;
	    dialog.ex->italic = yyvsp[0].il;
	    dialog.ex->charset = 1;
	  }
      }
      break;
    case 52:
#line 498 "rcparse.y"
      {
	dialog.style |= DS_SETFONT;
	style |= DS_SETFONT;
	dialog.pointsize = yyvsp[-5].il;
	unicode_from_ascii ((int *) NULL, &dialog.font, yyvsp[-3].s);
	if (dialog.ex == NULL)
	  rcparse_warning (_("extended FONT requires DIALOGEX"));
	else
	  {
	    dialog.ex->weight = yyvsp[-2].il;
	    dialog.ex->italic = yyvsp[-1].il;
	    dialog.ex->charset = yyvsp[0].il;
	  }
      }
      break;
    case 53:
#line 513 "rcparse.y"
      {
	dialog.menu = yyvsp[0].id;
      }
      break;
    case 54:
#line 517 "rcparse.y"
      {
	sub_res_info.characteristics = yyvsp[0].il;
      }
      break;
    case 55:
#line 521 "rcparse.y"
      {
	sub_res_info.language = yyvsp[-1].il | (yyvsp[0].il << SUBLANG_SHIFT);
      }
      break;
    case 56:
#line 525 "rcparse.y"
      {
	sub_res_info.version = yyvsp[0].il;
      }
      break;
    case 58:
#line 533 "rcparse.y"
      {
	struct dialog_control **pp;

	for (pp = &dialog.controls; *pp != NULL; pp = &(*pp)->next)
	  ;
	*pp = yyvsp[0].dialog_control;
      }
      break;
    case 59:
#line 544 "rcparse.y"
      {
	default_style = BS_AUTO3STATE | WS_TABSTOP;
	base_style = BS_AUTO3STATE;
	class = CTL_BUTTON;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 60:
#line 551 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 61:
#line 555 "rcparse.y"
      {
	default_style = BS_AUTOCHECKBOX | WS_TABSTOP;
	base_style = BS_AUTOCHECKBOX;
	class = CTL_BUTTON;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 62:
#line 562 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 63:
#line 566 "rcparse.y"
      {
	default_style = BS_AUTORADIOBUTTON | WS_TABSTOP;
	base_style = BS_AUTORADIOBUTTON;
	class = CTL_BUTTON;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 64:
#line 573 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 65:
#line 577 "rcparse.y"
      {
	default_style = ES_LEFT | WS_BORDER | WS_TABSTOP;
	base_style = ES_LEFT | WS_BORDER | WS_TABSTOP;
	class = CTL_EDIT;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 66:
#line 584 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
	if (dialog.ex == NULL)
	  rcparse_warning (_("BEDIT requires DIALOGEX"));
	res_string_to_id (&yyval.dialog_control->class, "BEDIT");
      }
      break;
    case 67:
#line 591 "rcparse.y"
      {
	default_style = BS_CHECKBOX | WS_TABSTOP;
	base_style = BS_CHECKBOX | WS_TABSTOP;
	class = CTL_BUTTON;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 68:
#line 598 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 69:
#line 602 "rcparse.y"
      {
	/* This is as per MSDN documentation.  With some (???)
	   versions of MS rc.exe their is no default style.  */
	default_style = CBS_SIMPLE | WS_TABSTOP;
	base_style = 0;
	class = CTL_COMBOBOX;
	res_text_field = res_null_text;
      }
      break;
    case 70:
#line 611 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 71:
#line 616 "rcparse.y"
      {
	yyval.dialog_control =
	  define_control (yyvsp[-9].id, yyvsp[-8].il, yyvsp[-5].il,
			  yyvsp[-4].il, yyvsp[-3].il, yyvsp[-2].il,
			  yyvsp[-7].il, style, yyvsp[-1].il);
	if (yyvsp[0].rcdata_item != NULL)
	  {
	    if (dialog.ex == NULL)
	      rcparse_warning (_("control data requires DIALOGEX"));
	    yyval.dialog_control->data = yyvsp[0].rcdata_item;
	  }
      }
      break;
    case 72:
#line 627 "rcparse.y"
      {
	yyval.dialog_control =
	  define_control (yyvsp[-10].id, yyvsp[-9].il, yyvsp[-6].il,
			  yyvsp[-5].il, yyvsp[-4].il, yyvsp[-3].il,
			  yyvsp[-8].il, style, yyvsp[-2].il);
	if (dialog.ex == NULL)
	  rcparse_warning (_("help ID requires DIALOGEX"));
	yyval.dialog_control->help = yyvsp[-1].il;
	yyval.dialog_control->data = yyvsp[0].rcdata_item;
      }
      break;
    case 73:
#line 636 "rcparse.y"
      {
	yyval.dialog_control =
	  define_control (yyvsp[-10].id, yyvsp[-9].il, yyvsp[-5].il,
			  yyvsp[-4].il, yyvsp[-3].il, yyvsp[-2].il, 0, style,
			  yyvsp[-1].il);
	if (yyvsp[0].rcdata_item != NULL)
	  {
	    if (dialog.ex == NULL)
	      rcparse_warning ("control data requires DIALOGEX");
	    yyval.dialog_control->data = yyvsp[0].rcdata_item;
	  }
	yyval.dialog_control->class.named = 1;
	unicode_from_ascii (&yyval.dialog_control->class.u.n.length,
			    &yyval.dialog_control->class.u.n.name,
			    yyvsp[-7].s);
      }
      break;
    case 74:
#line 649 "rcparse.y"
      {
	yyval.dialog_control =
	  define_control (yyvsp[-11].id, yyvsp[-10].il, yyvsp[-6].il,
			  yyvsp[-5].il, yyvsp[-4].il, yyvsp[-3].il, 0, style,
			  yyvsp[-2].il);
	if (dialog.ex == NULL)
	  rcparse_warning ("help ID requires DIALOGEX");
	yyval.dialog_control->help = yyvsp[-1].il;
	yyval.dialog_control->data = yyvsp[0].rcdata_item;
	yyval.dialog_control->class.named = 1;
	unicode_from_ascii (&yyval.dialog_control->class.u.n.length,
			    &yyval.dialog_control->class.u.n.name,
			    yyvsp[-8].s);
      }
      break;
    case 75:
#line 659 "rcparse.y"
      {
	default_style = SS_CENTER | WS_GROUP;
	base_style = SS_CENTER;
	class = CTL_STATIC;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 76:
#line 666 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 77:
#line 670 "rcparse.y"
      {
	default_style = BS_DEFPUSHBUTTON | WS_TABSTOP;
	base_style = BS_DEFPUSHBUTTON | WS_TABSTOP;
	class = CTL_BUTTON;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 78:
#line 677 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 79:
#line 681 "rcparse.y"
      {
	default_style = ES_LEFT | WS_BORDER | WS_TABSTOP;
	base_style = ES_LEFT | WS_BORDER | WS_TABSTOP;
	class = CTL_EDIT;
	res_text_field = res_null_text;
      }
      break;
    case 80:
#line 688 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 81:
#line 692 "rcparse.y"
      {
	default_style = BS_GROUPBOX;
	base_style = BS_GROUPBOX;
	class = CTL_BUTTON;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 82:
#line 699 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 83:
#line 703 "rcparse.y"
      {
	default_style = ES_LEFT | WS_BORDER | WS_TABSTOP;
	base_style = ES_LEFT | WS_BORDER | WS_TABSTOP;
	class = CTL_EDIT;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 84:
#line 710 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
	if (dialog.ex == NULL)
	  rcparse_warning (_("IEDIT requires DIALOGEX"));
	res_string_to_id (&yyval.dialog_control->class, "HEDIT");
      }
      break;
    case 85:
#line 717 "rcparse.y"
      {
	yyval.dialog_control =
	  define_icon_control (yyvsp[-4].id, yyvsp[-3].il, yyvsp[-2].il,
			       yyvsp[-1].il, 0, 0, 0, yyvsp[0].rcdata_item,
			       dialog.ex);
      }
      break;
    case 86:
#line 723 "rcparse.y"
      {
	yyval.dialog_control =
	  define_icon_control (yyvsp[-6].id, yyvsp[-5].il, yyvsp[-4].il,
			       yyvsp[-3].il, 0, 0, 0, yyvsp[0].rcdata_item,
			       dialog.ex);
      }
      break;
    case 87:
#line 729 "rcparse.y"
      {
	yyval.dialog_control =
	  define_icon_control (yyvsp[-8].id, yyvsp[-7].il, yyvsp[-6].il,
			       yyvsp[-5].il, style, yyvsp[-1].il, 0,
			       yyvsp[0].rcdata_item, dialog.ex);
      }
      break;
    case 88:
#line 735 "rcparse.y"
      {
	yyval.dialog_control =
	  define_icon_control (yyvsp[-9].id, yyvsp[-8].il, yyvsp[-7].il,
			       yyvsp[-6].il, style, yyvsp[-2].il,
			       yyvsp[-1].il, yyvsp[0].rcdata_item, dialog.ex);
      }
      break;
    case 89:
#line 740 "rcparse.y"
      {
	default_style = ES_LEFT | WS_BORDER | WS_TABSTOP;
	base_style = ES_LEFT | WS_BORDER | WS_TABSTOP;
	class = CTL_EDIT;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 90:
#line 747 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
	if (dialog.ex == NULL)
	  rcparse_warning (_("IEDIT requires DIALOGEX"));
	res_string_to_id (&yyval.dialog_control->class, "IEDIT");
      }
      break;
    case 91:
#line 754 "rcparse.y"
      {
	default_style = LBS_NOTIFY | WS_BORDER;
	base_style = LBS_NOTIFY | WS_BORDER;
	class = CTL_LISTBOX;
	res_text_field = res_null_text;
      }
      break;
    case 92:
#line 761 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 93:
#line 765 "rcparse.y"
      {
	default_style = SS_LEFT | WS_GROUP;
	base_style = SS_LEFT;
	class = CTL_STATIC;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 94:
#line 772 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 95:
#line 776 "rcparse.y"
      {
	default_style = BS_PUSHBOX | WS_TABSTOP;
	base_style = BS_PUSHBOX;
	class = CTL_BUTTON;
      }
      break;
    case 96:
#line 782 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 97:
#line 786 "rcparse.y"
      {
	default_style = BS_PUSHBUTTON | WS_TABSTOP;
	base_style = BS_PUSHBUTTON | WS_TABSTOP;
	class = CTL_BUTTON;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 98:
#line 793 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 99:
#line 797 "rcparse.y"
      {
	default_style = BS_RADIOBUTTON | WS_TABSTOP;
	base_style = BS_RADIOBUTTON;
	class = CTL_BUTTON;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 100:
#line 804 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 101:
#line 808 "rcparse.y"
      {
	default_style = SS_RIGHT | WS_GROUP;
	base_style = SS_RIGHT;
	class = CTL_STATIC;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 102:
#line 815 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 103:
#line 819 "rcparse.y"
      {
	default_style = SBS_HORZ;
	base_style = 0;
	class = CTL_SCROLLBAR;
	res_text_field = res_null_text;
      }
      break;
    case 104:
#line 826 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 105:
#line 830 "rcparse.y"
      {
	default_style = BS_3STATE | WS_TABSTOP;
	base_style = BS_3STATE;
	class = CTL_BUTTON;
	res_text_field = yyvsp[0].id;
      }
      break;
    case 106:
#line 837 "rcparse.y"
      {
	yyval.dialog_control = yyvsp[0].dialog_control;
      }
      break;
    case 107:
#line 842 "rcparse.y"
      {
	style = WS_CHILD | WS_VISIBLE;
      }
      break;
    case 108:
#line 844 "rcparse.y"
      {
	yyval.dialog_control =
	  define_control (yyvsp[-13].id, yyvsp[-12].il, yyvsp[-10].il,
			  yyvsp[-8].il, yyvsp[-6].il, yyvsp[-4].il,
			  CTL_BUTTON, style, yyvsp[0].il);
      }
      break;
    case 109:
#line 859 "rcparse.y"
      {
	yyval.dialog_control =
	  define_control (res_text_field, yyvsp[-5].il, yyvsp[-4].il,
			  yyvsp[-3].il, yyvsp[-2].il, yyvsp[-1].il, class,
			  default_style | WS_CHILD | WS_VISIBLE, 0);
	if (yyvsp[0].rcdata_item != NULL)
	  {
	    if (dialog.ex == NULL)
	      rcparse_warning (_("control data requires DIALOGEX"));
	    yyval.dialog_control->data = yyvsp[0].rcdata_item;
	  }
      }
      break;
    case 110:
#line 871 "rcparse.y"
      {
	yyval.dialog_control =
	  define_control (res_text_field, yyvsp[-7].il, yyvsp[-6].il,
			  yyvsp[-5].il, yyvsp[-4].il, yyvsp[-3].il, class,
			  style, yyvsp[-1].il);
	if (yyvsp[0].rcdata_item != NULL)
	  {
	    if (dialog.ex == NULL)
	      rcparse_warning (_("control data requires DIALOGEX"));
	    yyval.dialog_control->data = yyvsp[0].rcdata_item;
	  }
      }
      break;
    case 111:
#line 882 "rcparse.y"
      {
	yyval.dialog_control =
	  define_control (res_text_field, yyvsp[-8].il, yyvsp[-7].il,
			  yyvsp[-6].il, yyvsp[-5].il, yyvsp[-4].il, class,
			  style, yyvsp[-2].il);
	if (dialog.ex == NULL)
	  rcparse_warning (_("help ID requires DIALOGEX"));
	yyval.dialog_control->help = yyvsp[-1].il;
	yyval.dialog_control->data = yyvsp[0].rcdata_item;
      }
      break;
    case 112:
#line 893 "rcparse.y"
      {
	res_string_to_id (&yyval.id, "");
      }
      break;
    case 113:
#line 897 "rcparse.y"
      {
	yyval.id.named = 0;
	yyval.id.u.id = yyvsp[-1].il;
      }
      break;
    case 114:
#line 902 "rcparse.y"
      {
	res_string_to_id (&yyval.id, yyvsp[0].s);
      }
      break;
    case 115:
#line 906 "rcparse.y"
      {
	res_string_to_id (&yyval.id, yyvsp[-1].s);
      }
      break;
    case 116:
#line 913 "rcparse.y"
      {
	yyval.rcdata_item = NULL;
      }
      break;
    case 117:
#line 917 "rcparse.y"
      {
	yyval.rcdata_item = yyvsp[-1].rcdata.first;
      }
      break;
    case 118:
#line 926 "rcparse.y"
      {
	style = WS_CHILD | WS_VISIBLE;
      }
      break;
    case 120:
#line 932 "rcparse.y"
      {
	style = SS_ICON | WS_CHILD | WS_VISIBLE;
      }
      break;
    case 122:
#line 938 "rcparse.y"
      {
	style = base_style | WS_CHILD | WS_VISIBLE;
      }
      break;
    case 124:
#line 946 "rcparse.y"
      {
	define_font (yyvsp[-3].id, &yyvsp[-1].res_info, yyvsp[0].s);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 125:
#line 958 "rcparse.y"
      {
	define_icon (yyvsp[-3].id, &yyvsp[-1].res_info, yyvsp[0].s);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 126:
#line 971 "rcparse.y"
      {
	language = yyvsp[-1].il | (yyvsp[0].il << SUBLANG_SHIFT);
      }
      break;
    case 127:
#line 980 "rcparse.y"
      {
	define_menu (yyvsp[-5].id, &yyvsp[-3].res_info, yyvsp[-1].menuitem);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 128:
#line 990 "rcparse.y"
      {
	yyval.menuitem = NULL;
      }
      break;
    case 129:
#line 994 "rcparse.y"
      {
	if (yyvsp[-1].menuitem == NULL)
	  yyval.menuitem = yyvsp[0].menuitem;
	else
	  {
	    struct menuitem **pp;

	    for (pp = &yyvsp[-1].menuitem->next; *pp != NULL;
		 pp = &(*pp)->next)
	      ;
	    *pp = yyvsp[0].menuitem;
	    yyval.menuitem = yyvsp[-1].menuitem;
	  }
      }
      break;
    case 130:
#line 1011 "rcparse.y"
      {
	yyval.menuitem =
	  define_menuitem (yyvsp[-2].s, yyvsp[-1].il, yyvsp[0].is, 0, 0,
			   NULL);
      }
      break;
    case 131:
#line 1015 "rcparse.y"
      {
	yyval.menuitem = define_menuitem (NULL, 0, 0, 0, 0, NULL);
      }
      break;
    case 132:
#line 1019 "rcparse.y"
      {
	yyval.menuitem =
	  define_menuitem (yyvsp[-4].s, 0, yyvsp[-3].is, 0, 0,
			   yyvsp[-1].menuitem);
      }
      break;
    case 133:
#line 1026 "rcparse.y"
      {
	yyval.is = 0;
      }
      break;
    case 134:
#line 1030 "rcparse.y"
      {
	yyval.is = yyvsp[-2].is | yyvsp[0].is;
      }
      break;
    case 135:
#line 1034 "rcparse.y"
      {
	yyval.is = yyvsp[-1].is | yyvsp[0].is;
      }
      break;
    case 136:
#line 1041 "rcparse.y"
      {
	yyval.is = MENUITEM_CHECKED;
      }
      break;
    case 137:
#line 1045 "rcparse.y"
      {
	yyval.is = MENUITEM_GRAYED;
      }
      break;
    case 138:
#line 1049 "rcparse.y"
      {
	yyval.is = MENUITEM_HELP;
      }
      break;
    case 139:
#line 1053 "rcparse.y"
      {
	yyval.is = MENUITEM_INACTIVE;
      }
      break;
    case 140:
#line 1057 "rcparse.y"
      {
	yyval.is = MENUITEM_MENUBARBREAK;
      }
      break;
    case 141:
#line 1061 "rcparse.y"
      {
	yyval.is = MENUITEM_MENUBREAK;
      }
      break;
    case 142:
#line 1070 "rcparse.y"
      {
	define_menu (yyvsp[-5].id, &yyvsp[-3].res_info, yyvsp[-1].menuitem);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 143:
#line 1080 "rcparse.y"
      {
	yyval.menuitem = NULL;
      }
      break;
    case 144:
#line 1084 "rcparse.y"
      {
	if (yyvsp[-1].menuitem == NULL)
	  yyval.menuitem = yyvsp[0].menuitem;
	else
	  {
	    struct menuitem **pp;

	    for (pp = &yyvsp[-1].menuitem->next; *pp != NULL;
		 pp = &(*pp)->next)
	      ;
	    *pp = yyvsp[0].menuitem;
	    yyval.menuitem = yyvsp[-1].menuitem;
	  }
      }
      break;
    case 145:
#line 1101 "rcparse.y"
      {
	yyval.menuitem = define_menuitem (yyvsp[0].s, 0, 0, 0, 0, NULL);
      }
      break;
    case 146:
#line 1105 "rcparse.y"
      {
	yyval.menuitem =
	  define_menuitem (yyvsp[-1].s, yyvsp[0].il, 0, 0, 0, NULL);
      }
      break;
    case 147:
#line 1109 "rcparse.y"
      {
	yyval.menuitem =
	  define_menuitem (yyvsp[-3].s, yyvsp[-2].il, yyvsp[-1].il,
			   yyvsp[0].il, 0, NULL);
      }
      break;
    case 148:
#line 1113 "rcparse.y"
      {
	yyval.menuitem = define_menuitem (NULL, 0, 0, 0, 0, NULL);
      }
      break;
    case 149:
#line 1117 "rcparse.y"
      {
	yyval.menuitem =
	  define_menuitem (yyvsp[-3].s, 0, 0, 0, 0, yyvsp[-1].menuitem);
      }
      break;
    case 150:
#line 1121 "rcparse.y"
      {
	yyval.menuitem =
	  define_menuitem (yyvsp[-4].s, yyvsp[-3].il, 0, 0, 0,
			   yyvsp[-1].menuitem);
      }
      break;
    case 151:
#line 1125 "rcparse.y"
      {
	yyval.menuitem =
	  define_menuitem (yyvsp[-5].s, yyvsp[-4].il, yyvsp[-3].il, 0, 0,
			   yyvsp[-1].menuitem);
      }
      break;
    case 152:
#line 1130 "rcparse.y"
      {
	yyval.menuitem =
	  define_menuitem (yyvsp[-7].s, yyvsp[-6].il, yyvsp[-5].il,
			   yyvsp[-4].il, yyvsp[-3].il, yyvsp[-1].menuitem);
      }
      break;
    case 153:
#line 1139 "rcparse.y"
      {
	define_messagetable (yyvsp[-3].id, &yyvsp[-1].res_info, yyvsp[0].s);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 154:
#line 1151 "rcparse.y"
      {
	define_rcdata (yyvsp[-5].id, &yyvsp[-3].res_info,
		       yyvsp[-1].rcdata.first);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 155:
#line 1158 "rcparse.y"
      {
	define_rcdata_file (yyvsp[-3].id, &yyvsp[-1].res_info, yyvsp[0].s);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 156:
#line 1170 "rcparse.y"
      {
	rcparse_rcdata ();
      }
      break;
    case 157:
#line 1174 "rcparse.y"
      {
	rcparse_normal ();
	yyval.rcdata = yyvsp[0].rcdata;
      }
      break;
    case 158:
#line 1182 "rcparse.y"
      {
	yyval.rcdata.first = NULL;
	yyval.rcdata.last = NULL;
      }
      break;
    case 159:
#line 1187 "rcparse.y"
      {
	yyval.rcdata = yyvsp[0].rcdata;
      }
      break;
    case 160:
#line 1194 "rcparse.y"
      {
	struct rcdata_item *ri;

	ri = define_rcdata_string (yyvsp[0].ss.s, yyvsp[0].ss.length);
	yyval.rcdata.first = ri;
	yyval.rcdata.last = ri;
      }
      break;
    case 161:
#line 1202 "rcparse.y"
      {
	struct rcdata_item *ri;

	ri = define_rcdata_number (yyvsp[0].i.val, yyvsp[0].i.dword);
	yyval.rcdata.first = ri;
	yyval.rcdata.last = ri;
      }
      break;
    case 162:
#line 1210 "rcparse.y"
      {
	struct rcdata_item *ri;

	ri = define_rcdata_string (yyvsp[0].ss.s, yyvsp[0].ss.length);
	yyval.rcdata.first = yyvsp[-2].rcdata.first;
	yyvsp[-2].rcdata.last->next = ri;
	yyval.rcdata.last = ri;
      }
      break;
    case 163:
#line 1219 "rcparse.y"
      {
	struct rcdata_item *ri;

	ri = define_rcdata_number (yyvsp[0].i.val, yyvsp[0].i.dword);
	yyval.rcdata.first = yyvsp[-2].rcdata.first;
	yyvsp[-2].rcdata.last->next = ri;
	yyval.rcdata.last = ri;
      }
      break;
    case 164:
#line 1233 "rcparse.y"
      {
	sub_res_info = yyvsp[-1].res_info;
      }
      break;
    case 167:
#line 1240 "rcparse.y"
      {
	define_stringtable (&sub_res_info, yyvsp[-1].il, yyvsp[0].s);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 168:
#line 1247 "rcparse.y"
      {
	define_stringtable (&sub_res_info, yyvsp[-2].il, yyvsp[0].s);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 169:
#line 1260 "rcparse.y"
      {
	define_user_data (yyvsp[-5].id, yyvsp[-4].id, &yyvsp[-3].res_info,
			  yyvsp[-1].rcdata.first);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 170:
#line 1267 "rcparse.y"
      {
	define_user_file (yyvsp[-3].id, yyvsp[-2].id, &yyvsp[-1].res_info,
			  yyvsp[0].s);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 171:
#line 1279 "rcparse.y"
      {
	define_versioninfo (yyvsp[-5].id, language, yyvsp[-3].fixver,
			    yyvsp[-1].verinfo);
	if (yychar != YYEMPTY)
	  YYERROR;
	rcparse_discard_strings ();
      }
      break;
    case 172:
#line 1289 "rcparse.y"
      {
	yyval.fixver = ((struct fixed_versioninfo *)
			res_alloc (sizeof (struct fixed_versioninfo)));
	memset (yyval.fixver, 0, sizeof (struct fixed_versioninfo));
      }
      break;
    case 173:
#line 1295 "rcparse.y"
      {
	yyvsp[-5].fixver->file_version_ms =
	  (yyvsp[-3].il << 16) | yyvsp[-2].il;
	yyvsp[-5].fixver->file_version_ls =
	  (yyvsp[-1].il << 16) | yyvsp[0].il;
	yyval.fixver = yyvsp[-5].fixver;
      }
      break;
    case 174:
#line 1301 "rcparse.y"
      {
	yyvsp[-5].fixver->product_version_ms =
	  (yyvsp[-3].il << 16) | yyvsp[-2].il;
	yyvsp[-5].fixver->product_version_ls =
	  (yyvsp[-1].il << 16) | yyvsp[0].il;
	yyval.fixver = yyvsp[-5].fixver;
      }
      break;
    case 175:
#line 1307 "rcparse.y"
      {
	yyvsp[-2].fixver->file_flags_mask = yyvsp[0].il;
	yyval.fixver = yyvsp[-2].fixver;
      }
      break;
    case 176:
#line 1312 "rcparse.y"
      {
	yyvsp[-2].fixver->file_flags = yyvsp[0].il;
	yyval.fixver = yyvsp[-2].fixver;
      }
      break;
    case 177:
#line 1317 "rcparse.y"
      {
	yyvsp[-2].fixver->file_os = yyvsp[0].il;
	yyval.fixver = yyvsp[-2].fixver;
      }
      break;
    case 178:
#line 1322 "rcparse.y"
      {
	yyvsp[-2].fixver->file_type = yyvsp[0].il;
	yyval.fixver = yyvsp[-2].fixver;
      }
      break;
    case 179:
#line 1327 "rcparse.y"
      {
	yyvsp[-2].fixver->file_subtype = yyvsp[0].il;
	yyval.fixver = yyvsp[-2].fixver;
      }
      break;
    case 180:
#line 1341 "rcparse.y"
      {
	yyval.verinfo = NULL;
      }
      break;
    case 181:
#line 1345 "rcparse.y"
      {
	yyval.verinfo =
	  append_ver_stringfileinfo (yyvsp[-7].verinfo, yyvsp[-4].s,
				     yyvsp[-2].verstring);
      }
      break;
    case 182:
#line 1349 "rcparse.y"
      {
	yyval.verinfo =
	  append_ver_varfileinfo (yyvsp[-6].verinfo, yyvsp[-2].s,
				  yyvsp[-1].vervar);
      }
      break;
    case 183:
#line 1356 "rcparse.y"
      {
	yyval.verstring = NULL;
      }
      break;
    case 184:
#line 1360 "rcparse.y"
      {
	yyval.verstring =
	  append_verval (yyvsp[-4].verstring, yyvsp[-2].s, yyvsp[0].s);
      }
      break;
    case 185:
#line 1367 "rcparse.y"
      {
	yyval.vervar = NULL;
      }
      break;
    case 186:
#line 1371 "rcparse.y"
      {
	yyval.vervar =
	  append_vertrans (yyvsp[-2].vervar, yyvsp[-1].il, yyvsp[0].il);
      }
      break;
    case 187:
#line 1380 "rcparse.y"
      {
	yyval.id.named = 0;
	yyval.id.u.id = yyvsp[0].il;
      }
      break;
    case 188:
#line 1385 "rcparse.y"
      {
	char *copy, *s;

	/* It seems that resource ID's are forced to upper case.  */
	copy = xstrdup (yyvsp[0].s);
	for (s = copy; *s != '\0'; s++)
	  *s = TOUPPER (*s);
	res_string_to_id (&yyval.id, copy);
	free (copy);
      }
      break;
    case 189:
#line 1401 "rcparse.y"
      {
	yyval.s = yyvsp[0].s;
      }
      break;
    case 190:
#line 1405 "rcparse.y"
      {
	yyval.s = yyvsp[-1].s;
      }
      break;
    case 191:
#line 1409 "rcparse.y"
      {
	yyval.s = yyvsp[-1].s;
      }
      break;
    case 192:
#line 1417 "rcparse.y"
      {
	yyval.id.named = 0;
	yyval.id.u.id = yyvsp[-1].il;
      }
      break;
    case 193:
#line 1422 "rcparse.y"
      {
	char *copy, *s;

	/* It seems that resource ID's are forced to upper case.  */
	copy = xstrdup (yyvsp[0].s);
	for (s = copy; *s != '\0'; s++)
	  *s = TOUPPER (*s);
	res_string_to_id (&yyval.id, copy);
	free (copy);
      }
      break;
    case 194:
#line 1439 "rcparse.y"
      {
	memset (&yyval.res_info, 0, sizeof (struct res_res_info));
	yyval.res_info.language = language;
	/* FIXME: Is this the right default?  */
	yyval.res_info.memflags =
	  MEMFLAG_MOVEABLE | MEMFLAG_PURE | MEMFLAG_DISCARDABLE;
      }
      break;
    case 195:
#line 1446 "rcparse.y"
      {
	yyval.res_info = yyvsp[-1].res_info;
	yyval.res_info.memflags |= yyvsp[0].memflags.on;
	yyval.res_info.memflags &= ~yyvsp[0].memflags.off;
      }
      break;
    case 196:
#line 1452 "rcparse.y"
      {
	yyval.res_info = yyvsp[-2].res_info;
	yyval.res_info.characteristics = yyvsp[0].il;
      }
      break;
    case 197:
#line 1457 "rcparse.y"
      {
	yyval.res_info = yyvsp[-3].res_info;
	yyval.res_info.language =
	  yyvsp[-1].il | (yyvsp[0].il << SUBLANG_SHIFT);
      }
      break;
    case 198:
#line 1462 "rcparse.y"
      {
	yyval.res_info = yyvsp[-2].res_info;
	yyval.res_info.version = yyvsp[0].il;
      }
      break;
    case 199:
#line 1472 "rcparse.y"
      {
	memset (&yyval.res_info, 0, sizeof (struct res_res_info));
	yyval.res_info.language = language;
	yyval.res_info.memflags = MEMFLAG_MOVEABLE | MEMFLAG_DISCARDABLE;
      }
      break;
    case 200:
#line 1478 "rcparse.y"
      {
	yyval.res_info = yyvsp[-1].res_info;
	yyval.res_info.memflags |= yyvsp[0].memflags.on;
	yyval.res_info.memflags &= ~yyvsp[0].memflags.off;
      }
      break;
    case 201:
#line 1489 "rcparse.y"
      {
	memset (&yyval.res_info, 0, sizeof (struct res_res_info));
	yyval.res_info.language = language;
	yyval.res_info.memflags =
	  MEMFLAG_MOVEABLE | MEMFLAG_PURE | MEMFLAG_DISCARDABLE;
      }
      break;
    case 202:
#line 1495 "rcparse.y"
      {
	yyval.res_info = yyvsp[-1].res_info;
	yyval.res_info.memflags |= yyvsp[0].memflags.on;
	yyval.res_info.memflags &= ~yyvsp[0].memflags.off;
      }
      break;
    case 203:
#line 1507 "rcparse.y"
      {
	yyval.memflags.on = MEMFLAG_MOVEABLE;
	yyval.memflags.off = 0;
      }
      break;
    case 204:
#line 1512 "rcparse.y"
      {
	yyval.memflags.on = 0;
	yyval.memflags.off = MEMFLAG_MOVEABLE;
      }
      break;
    case 205:
#line 1517 "rcparse.y"
      {
	yyval.memflags.on = MEMFLAG_PURE;
	yyval.memflags.off = 0;
      }
      break;
    case 206:
#line 1522 "rcparse.y"
      {
	yyval.memflags.on = 0;
	yyval.memflags.off = MEMFLAG_PURE;
      }
      break;
    case 207:
#line 1527 "rcparse.y"
      {
	yyval.memflags.on = MEMFLAG_PRELOAD;
	yyval.memflags.off = 0;
      }
      break;
    case 208:
#line 1532 "rcparse.y"
      {
	yyval.memflags.on = 0;
	yyval.memflags.off = MEMFLAG_PRELOAD;
      }
      break;
    case 209:
#line 1537 "rcparse.y"
      {
	yyval.memflags.on = MEMFLAG_DISCARDABLE;
	yyval.memflags.off = 0;
      }
      break;
    case 210:
#line 1547 "rcparse.y"
      {
	yyval.s = yyvsp[0].s;
      }
      break;
    case 211:
#line 1551 "rcparse.y"
      {
	yyval.s = yyvsp[0].s;
      }
      break;
    case 212:
#line 1568 "rcparse.y"
      {
	style |= yyvsp[0].il;
      }
      break;
    case 213:
#line 1572 "rcparse.y"
      {
	style &= ~yyvsp[0].il;
      }
      break;
    case 214:
#line 1576 "rcparse.y"
      {
	style |= yyvsp[0].il;
      }
      break;
    case 215:
#line 1580 "rcparse.y"
      {
	style &= ~yyvsp[0].il;
      }
      break;
    case 216:
#line 1587 "rcparse.y"
      {
	yyval.il = yyvsp[0].i.val;
      }
      break;
    case 217:
#line 1591 "rcparse.y"
      {
	yyval.il = yyvsp[-1].il;
      }
      break;
    case 218:
#line 1600 "rcparse.y"
      {
	yyval.il = 0;
      }
      break;
    case 219:
#line 1604 "rcparse.y"
      {
	yyval.il = yyvsp[0].il;
      }
      break;
    case 220:
#line 1613 "rcparse.y"
      {
	yyval.il = yyvsp[0].il;
      }
      break;
    case 221:
#line 1622 "rcparse.y"
      {
	yyval.il = yyvsp[0].i.val;
      }
      break;
    case 222:
#line 1631 "rcparse.y"
      {
	yyval.i = yyvsp[0].i;
      }
      break;
    case 223:
#line 1635 "rcparse.y"
      {
	yyval.i = yyvsp[-1].i;
      }
      break;
    case 224:
#line 1639 "rcparse.y"
      {
	yyval.i.val = ~yyvsp[0].i.val;
	yyval.i.dword = yyvsp[0].i.dword;
      }
      break;
    case 225:
#line 1644 "rcparse.y"
      {
	yyval.i.val = -yyvsp[0].i.val;
	yyval.i.dword = yyvsp[0].i.dword;
      }
      break;
    case 226:
#line 1649 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val * yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 227:
#line 1654 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val / yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 228:
#line 1659 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val % yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 229:
#line 1664 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val + yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 230:
#line 1669 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val - yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 231:
#line 1674 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val & yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 232:
#line 1679 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val ^ yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 233:
#line 1684 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val | yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 234:
#line 1695 "rcparse.y"
      {
	yyval.il = yyvsp[0].il;
      }
      break;
    case 235:
#line 1704 "rcparse.y"
      {
	yyval.il = yyvsp[0].i.val;
      }
      break;
    case 236:
#line 1715 "rcparse.y"
      {
	yyval.i = yyvsp[0].i;
      }
      break;
    case 237:
#line 1719 "rcparse.y"
      {
	yyval.i = yyvsp[-1].i;
      }
      break;
    case 238:
#line 1723 "rcparse.y"
      {
	yyval.i.val = ~yyvsp[0].i.val;
	yyval.i.dword = yyvsp[0].i.dword;
      }
      break;
    case 239:
#line 1728 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val * yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 240:
#line 1733 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val / yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 241:
#line 1738 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val % yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 242:
#line 1743 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val + yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 243:
#line 1748 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val - yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 244:
#line 1753 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val & yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 245:
#line 1758 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val ^ yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    case 246:
#line 1763 "rcparse.y"
      {
	yyval.i.val = yyvsp[-2].i.val | yyvsp[0].i.val;
	yyval.i.dword = yyvsp[-2].i.dword || yyvsp[0].i.dword;
      }
      break;
    }

#line 706 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = !yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
yyerrhandle:
  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}

#line 1769 "rcparse.y"


/* Set the language from the command line.  */

void
rcparse_set_language (int lang)
{
  language = lang;
}
