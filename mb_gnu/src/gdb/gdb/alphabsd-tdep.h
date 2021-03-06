/* Common target dependent code for GDB on Alpha systems running BSD.
   Copyright (C) 2002 Free Software Foundation, Inc.

   This file is part of GDB.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

#ifndef ALPHABSD_TDEP_H
#define ALPHABSD_TDEP_H

void alphabsd_supply_reg (char *, int);
void alphabsd_fill_reg (char *, int);

void alphabsd_supply_fpreg (char *, int);
void alphabsd_fill_fpreg (char *, int);

#define SIZEOF_STRUCT_REG	(32 * 8)
#define SIZEOF_STRUCT_FPREG	(33 * 8)

#endif /* ALPHABSD_TDEP_H */
