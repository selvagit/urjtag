/*
 * $Id$
 *
 * XScale PXA250/PXA210 GPIO Registers
 * Copyright (C) 2002 ETC s.r.o.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Written by Marcel Telka <marcel@telka.sk>, 2002.
 *
 * Documentation:
 * [1] Intel Corporation, "Intel PXA250 and PXA210 Application Processors
 *     Developer's Manual", February 2002, Order Number: 278522-001
 *
 */

#ifndef	PXA2X0_GPIO_H
#define	PXA2X0_GPIO_H

#include <common.h>

#if LANGUAGE == C
#include <stdint.h>
#endif

/* GPIO Registers */

#define	GPIO_BASE	0x40E00000

#if LANGUAGE == C
typedef volatile struct GPIO_registers {
	uint32_t gplr0;
	uint32_t gplr1;
	uint32_t gplr2;
	uint32_t gpdr0;
	uint32_t gpdr1;
	uint32_t gpdr2;
	uint32_t gpsr0;
	uint32_t gpsr1;
	uint32_t gpsr2;
	uint32_t gpcr0;
	uint32_t gpcr1;
	uint32_t gpcr2;
	uint32_t grer0;
	uint32_t grer1;
	uint32_t grer2;
	uint32_t gfer0;
	uint32_t gfer1;
	uint32_t gfer2;
	uint32_t gedr0;
	uint32_t gedr1;
	uint32_t gedr2;
	uint32_t gafr0_l;
	uint32_t gafr0_u;
	uint32_t gafr1_l;
	uint32_t gafr1_u;
	uint32_t gafr2_l;
	uint32_t gafr2_u;
} GPIO_registers;

#ifdef PXA2X0_UNMAPPED
#define	GPIO_pointer	((GPIO_registers*) GPIO_BASE)
#endif

#define	GPLR0		GPIO_pointer->gplr0
#define	GPLR1		GPIO_pointer->gplr1
#define	GPLR2		GPIO_pointer->gplr2
#define	GPDR0		GPIO_pointer->gpdr0
#define	GPDR1		GPIO_pointer->gpdr1
#define	GPDR2		GPIO_pointer->gpdr2
#define	GPSR0		GPIO_pointer->gpsr0
#define	GPSR1		GPIO_pointer->gpsr1
#define	GPSR2		GPIO_pointer->gpsr2
#define	GPCR0		GPIO_pointer->gpcr0
#define	GPCR1		GPIO_pointer->gpcr1
#define	GPCR2		GPIO_pointer->gpcr2
#define	GRER0		GPIO_pointer->grer0
#define	GRER1		GPIO_pointer->grer1
#define	GRER2		GPIO_pointer->grer2
#define	GFER0		GPIO_pointer->gfer0
#define	GFER1		GPIO_pointer->gfer1
#define	GFER2		GPIO_pointer->gfer2
#define	GEDR0		GPIO_pointer->gedr0
#define	GEDR1		GPIO_pointer->gedr1
#define	GEDR2		GPIO_pointer->gedr2
#define	GAFR0_L		GPIO_pointer->gafr0_l
#define	GAFR0_U		GPIO_pointer->gafr0_u
#define	GAFR1_L		GPIO_pointer->gafr1_l
#define	GAFR1_U		GPIO_pointer->gafr1_u
#define	GAFR2_L		GPIO_pointer->gafr2_l
#define	GAFR2_U		GPIO_pointer->gafr2_u
#endif /* LANGUAGE == C */

#define	GPLR0_OFFSET	0x00
#define	GPLR1_OFFSET	0x04
#define	GPLR2_OFFSET	0x08
#define	GPDR0_OFFSET	0x0C
#define	GPDR1_OFFSET	0x10
#define	GPDR2_OFFSET	0x14
#define	GPSR0_OFFSET	0x18
#define	GPSR1_OFFSET	0x1C
#define	GPSR2_OFFSET	0x20
#define	GPCR0_OFFSET	0x24
#define	GPCR1_OFFSET	0x28
#define	GPCR2_OFFSET	0x2C
#define	GRER0_OFFSET	0x30
#define	GRER1_OFFSET	0x34
#define	GRER2_OFFSET	0x38
#define	GFER0_OFFSET	0x3C
#define	GFER1_OFFSET	0x40
#define	GFER2_OFFSET	0x44
#define	GEDR0_OFFSET	0x48
#define	GEDR1_OFFSET	0x4C
#define	GEDR2_OFFSET	0x50
#define	GAFR0_L_OFFSET	0x54
#define	GAFR0_U_OFFSET	0x58
#define	GAFR1_L_OFFSET	0x5C
#define	GAFR1_U_OFFSET	0x60
#define	GAFR2_L_OFFSET	0x64
#define	GAFR2_U_OFFSET	0x68

#endif /* PXA2X0_GPIO_H */
