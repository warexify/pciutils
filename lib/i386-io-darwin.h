/*
 * Copyright (C) 2008-2010 coresystems GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#include <DirectHW/DirectHW.h>

static int intel_setup_io(struct pci_access *a __attribute__((unused)))
{
   return !iopl(0);
}

static int intel_cleanup_io(struct pci_access *a __attribute__((unused)))
{
   return 1;
}

static inline void intel_io_lock(void)
{
}

static inline void intel_io_unlock(void)
{
}
