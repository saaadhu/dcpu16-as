/* tc-dcpu16.c -- Assembler code for DCPU16

  Copyright (C) 2002-2014 Free Software Foundation, Inc.
  Contributed by Senthil Kumar Selvaraj <senthil.thecoder@gmail.com>

  This file is part of GAS, the GNU Assembler.

  GAS is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3, or (at your option)
  any later version.

  GAS is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with GAS; see the file COPYING.  If not, write to
  the Free Software Foundation, 51 Franklin Street - Fifth Floor,
  Boston, MA 02110-1301, USA.  */

#include "as.h"
#include <limits.h>
#include "subsegs.h"
#include "opcode/dcpu16.h"
#include "safe-ctype.h"
#include "dwarf2dbg.h"
#include "elf/dcpu16.h"

const char comment_chars[] = ";";
const char line_comment_chars[] = "#";
const char line_separator_chars[] = "$";

const char *md_shortopts = ":";
struct option md_longopts[] =
{};
size_t md_longopts_size = sizeof (md_longopts);

const char EXP_CHARS[] = "eE";
const char FLT_CHARS[] = "dD";

const pseudo_typeS md_pseudo_table[] =
{};

int
md_parse_option (int c ATTRIBUTE_UNUSED, char *arg ATTRIBUTE_UNUSED)
{
    return 0;
}

char *
md_atof (int type, char *litP, int *sizeP)
{
  return ieee_md_atof (type, litP, sizeP, FALSE);
}

void
md_show_usage (FILE * stream ATTRIBUTE_UNUSED)
{
}

symbolS *
md_undefined_symbol (char * name ATTRIBUTE_UNUSED)
{
  return NULL;
}

void
md_begin (void)
{
}

void
md_apply_fix (fixS * fixp ATTRIBUTE_UNUSED, valueT * valuep ATTRIBUTE_UNUSED, segT seg ATTRIBUTE_UNUSED)
{
}

int
md_estimate_size_before_relax (fragS * fragP ATTRIBUTE_UNUSED,
			       asection * segment_type ATTRIBUTE_UNUSED)
{
  return 0;
}

void
md_convert_frag (bfd * abfd ATTRIBUTE_UNUSED,
		 asection * sec ATTRIBUTE_UNUSED,
		 fragS * fragP ATTRIBUTE_UNUSED)
{

}

void
md_assemble (char *str ATTRIBUTE_UNUSED)
{}

valueT
md_section_align (asection *seg ATTRIBUTE_UNUSED, valueT addr ATTRIBUTE_UNUSED)
{
  return 0;
}

arelent *
tc_gen_reloc (asection *seg ATTRIBUTE_UNUSED,
	      fixS *fixp ATTRIBUTE_UNUSED)
{
  return NULL;
}

long
md_pcrel_from (fixS *fixp ATTRIBUTE_UNUSED)
{
  return 0;
}
