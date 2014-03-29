/* BFD library support routines for the DCPU16 architecture.
   Copyright (C) 2002-2014 Free Software Foundation, Inc.
   Contributed by Senthil Kumar Selvaraj <senthil.thecoder@gmail.com>

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston,
   MA 02110-1301, USA.  */

#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"

static const bfd_arch_info_type* compatible(const bfd_arch_info_type *a ATTRIBUTE_UNUSED, const bfd_arch_info_type *b ATTRIBUTE_UNUSED)
{
  /* We have only one machine, so just return one of the incoming params */
  return a;
}

const bfd_arch_info_type bfd_dcpu16_arch =
{
    16, /* 16 bits per word */
    16, /* 16 bits per address (2^16 - 1 = 0x10000 bytes of RAM) */
    8,  /* 8 bits per byte */
    bfd_arch_dcpu16,
    bfd_mach_dcpu16,
    "dcpu-16", /* Arch name */
    "DCPU-16", /* printable name */
    1,   /* No alignment requirements */
    TRUE,/* Only one machine, and this is the default */
    compatible,
    bfd_default_scan,
    bfd_arch_default_fill,
    NULL
};
