/* Disassemble DCPU16 instructions.
   Copyright (C) 2002-2014 Free Software Foundation, Inc.

   Contributed by Senthil Kumar Selvaraj <senthil.thecoder@gmail.com>
        
   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston,
   MA 02110-1301, USA.  */

#include "sysdep.h"
#include <stdio.h>
#include <ctype.h>
#include <sys/types.h>

#include "dis-asm.h"
#include "opintl.h"
#include "libiberty.h"

#define DASM_SECTION
#include "opcode/dcpu16.h"
#undef DASM_SECTION

int
print_insn_dcpu16 (bfd_vma addr ATTRIBUTE_UNUSED, disassemble_info *info ATTRIBUTE_UNUSED)
{
  return 0;
}

