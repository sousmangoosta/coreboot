/* SPDX-License-Identifier: GPL-2.0-only */


#include <bootblock_common.h>
#include <device/pci_ops.h>
#include <northbridge/intel/sandybridge/sandybridge.h>
#include <southbridge/intel/bd82x6x/pch.h>

const struct southbridge_usb_port mainboard_usb_ports[] = {
	{ 1, 1, 0 }, 
	{ 1, 1, 0 }, 
	{ 1, 1, 1 }, 
	{ 1, 1, 1 }, 
	{ 1, 0, 2 }, // FIXME: Unknown current: RCBA(0x3510)=0x3510
	{ 1, 0, 2 }, // FIXME: Unknown current: RCBA(0x3514)=0x3514
	{ 1, 6, 3 }, 
	{ 1, 6, 3 }, 
	{ 1, 0, 5 }, // FIXME: Unknown current: RCBA(0x3520)=0x3520
	{ 1, 6, 5 }, 
	{ 1, 6, 5 }, 
	{ 1, 0, 5 }, // FIXME: Unknown current: RCBA(0x352c)=0x352c
	{ 1, 6, 6 }, 
	{ 0, 6, 6 }, 
};

void bootblock_mainboard_early_init(void)
{
	pci_write_config16(PCI_DEV(0, 0x1f, 0), 0x82, 0x3f0e);
	pci_write_config16(PCI_DEV(0, 0x1f, 0), 0x80, 0x0010);
}
