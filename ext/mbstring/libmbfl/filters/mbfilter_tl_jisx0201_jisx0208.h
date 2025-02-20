/*
 * "streamable kanji code filter and converter"
 * Copyright (c) 1998-2002 HappySize, Inc. All rights reserved.
 *
 * LICENSE NOTICES
 *
 * This file is part of "streamable kanji code filter and converter",
 * which is distributed under the terms of GNU Lesser General Public
 * License (version 2) as published by the Free Software Foundation.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with "streamable kanji code filter and converter";
 * if not, write to the Free Software Foundation, Inc., 59 Temple Place,
 * Suite 330, Boston, MA  02111-1307  USA
 *
 * The author of this file: Moriyoshi Koizumi <koizumi@gree.co.jp>
 *
 */

#ifndef MBFILTER_TL_KANA_JISX0201_JISX0208_H
#define MBFILTER_TL_KANA_JISX0201_JISX0208_H

#include "mbfl_convert.h"

/* "Zen" is 全, or "full"; "Han" is 半, or "half"
 * This refers to "fullwidth" or "halfwidth" variants of characters used for writing Japanese */
#define MBFL_FILT_TL_HAN2ZEN_ALL       0x00000001
#define MBFL_FILT_TL_HAN2ZEN_ALPHA     0x00000002
#define MBFL_FILT_TL_HAN2ZEN_NUMERIC   0x00000004
#define MBFL_FILT_TL_HAN2ZEN_SPACE     0x00000008
#define MBFL_FILT_TL_ZEN2HAN_ALL       0x00000010
#define MBFL_FILT_TL_ZEN2HAN_ALPHA     0x00000020
#define MBFL_FILT_TL_ZEN2HAN_NUMERIC   0x00000040
#define MBFL_FILT_TL_ZEN2HAN_SPACE     0x00000080
#define MBFL_FILT_TL_HAN2ZEN_KATAKANA  0x00000100
#define MBFL_FILT_TL_HAN2ZEN_HIRAGANA  0x00000200
#define MBFL_FILT_TL_HAN2ZEN_GLUE      0x00000800
#define MBFL_FILT_TL_ZEN2HAN_KATAKANA  0x00001000
#define MBFL_FILT_TL_ZEN2HAN_HIRAGANA  0x00002000
#define MBFL_FILT_TL_ZENKAKU_HIRA2KANA 0x00010000
#define MBFL_FILT_TL_ZENKAKU_KANA2HIRA 0x00020000
#define MBFL_FILT_TL_HAN2ZEN_COMPAT1   0x00100000
#define MBFL_FILT_TL_ZEN2HAN_COMPAT1   0x00200000

extern const struct mbfl_convert_vtbl vtbl_tl_jisx0201_jisx0208;

int mbfl_convert_kana(int c, int next, bool *consumed, int *second, int mode);

#endif /* MBFILTER_TL_KANA_JISX0201_JISX0208_H */
