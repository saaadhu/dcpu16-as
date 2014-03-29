/*  DCPU16-specific support for 32-bit ELF
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
#include "libiberty.h"
#include "libbfd.h"
#include "elf-bfd.h"
#include "elf/dcpu16.h"


#define ELF_ARCH		bfd_arch_dcpu16
#define ELF_MACHINE_CODE	EM_DCPU16
#define ELF_MAXPAGESIZE		1

#define TARGET_LITTLE_SYM       bfd_elf32_dcpu16_vec
#define TARGET_LITTLE_NAME	"elf32-dcpu16"

#include "elf32-target.h"

