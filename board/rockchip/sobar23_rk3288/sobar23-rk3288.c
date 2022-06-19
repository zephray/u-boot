// SPDX-License-Identifier: GPL-2.0+
/*
 * (C) Copyright 2016 Rockchip Electronics Co., Ltd
 */

#include <common.h>
#include <dm.h>
#include <eeprom.h>
#include <env.h>
#include <i2c_eeprom.h>
#include <init.h>
#include <net.h>
#include <netdev.h>
#include <asm/arch-rockchip/bootrom.h>
#include <asm/io.h>

int rk3288_board_late_init(void)
{
	u8 ethaddr[6];

	return 0;
}

int mmc_get_env_dev(void)
{
	u32 bootdevice_brom_id = readl(BROM_BOOTSOURCE_ID_ADDR);

	if (bootdevice_brom_id == BROM_BOOTSOURCE_EMMC)
		return 0;

	return 1;
}
