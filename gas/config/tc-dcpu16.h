/* This file is tc-dcpu16.h
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
   along with GAS; see the file COPYING.  If not, write to the Free
   Software Foundation, 51 Franklin Street - Fifth Floor, Boston, MA
   02110-1301, USA.  */

#define TC_DCPU16
/*   By convention, you should define this macro in the `.h' file.  For
     example, `tc-m68k.h' defines `TC_M68K'.  You might have to use this
     if it is necessary to add CPU specific code to the object format
     file.  */

#define TARGET_FORMAT "elf32-dcpu16"
/*   This macro is the BFD target name to use when creating the output
     file.  This will normally depend upon the `OBJ_FMT' macro.  */

#define TARGET_ARCH bfd_arch_dcpu16
/*   This macro is the BFD architecture to pass to `bfd_set_arch_mach'.  */

#define TARGET_MACH 0
/*   This macro is the BFD machine number to pass to
     `bfd_set_arch_mach'.  If it is not defined, GAS will use 0.  */

#define TARGET_BYTES_BIG_ENDIAN 0
/*   You should define this macro to be non-zero if the target is big
     endian, and zero if the target is little endian.  */

#define ONLY_STANDARD_ESCAPES
/*   If you define this macro, GAS will warn about the use of
     nonstandard escape sequences in a string.  */

#define md_operand(x)
/*   GAS will call this function for any expression that can not be
     recognized.  When the function is called, `input_line_pointer'
     will point to the start of the expression.  */

#define md_number_to_chars number_to_chars_littleendian
/*   This should just call either `number_to_chars_bigendian' or
     `number_to_chars_littleendian', whichever is appropriate.  On
     targets like the MIPS which support options to change the
     endianness, which function to call is a runtime decision.  On
     other targets, `md_number_to_chars' can be a simple macro.  */

#define WORKING_DOT_WORD
/*
`md_short_jump_size'
`md_long_jump_size'
`md_create_short_jump'
`md_create_long_jump'
     If `WORKING_DOT_WORD' is defined, GAS will not do broken word
     processing (*note Broken words::.).  Otherwise, you should set
     `md_short_jump_size' to the size of a short jump (a jump that is
     just long enough to jump around a long jmp) and
     `md_long_jump_size' to the size of a long jump (a jump that can go
     anywhere in the function), You should define
     `md_create_short_jump' to create a short jump around a long jump,
     and define `md_create_long_jump' to create a long jump.  */

#define MD_APPLY_FIX3
/* Values passed to md_apply_fix don't include symbol values.  */
#define MD_APPLY_SYM_VALUE(FIX) 0

#define TC_HANDLES_FX_DONE

#define LISTING_WORD_SIZE 2
/*   The number of bytes to put into a word in a listing.  This affects
     the way the bytes are clumped together in the listing.  For
     example, a value of 2 might print `1234 5678' where a value of 1
     would print `12 34 56 78'.  The default value is 4.  */

/* Allow hexadeciaml numbers with 'h' suffix.  Note that if the number
   starts with a letter it will be interpreted as a symbol name not a
   constant.  Thus "beach" is a symbol not the hex value 0xbeac.  So
   is A5A5h...  */
#define NUMBERS_WITH_SUFFIX 1

/* Do not allow call frame debug info optimization as otherwise we could
   generate the DWARF directives without the relocs necessary to patch
   them up.  */
#define md_allow_eh_opt 0

extern long md_pcrel_from (struct fix *);
