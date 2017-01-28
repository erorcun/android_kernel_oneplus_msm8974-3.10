/**
 * Copyright 2008-2013 OPPO Mobile Comm Corp., Ltd, All rights reserved.
 * VENDOR_EDIT:
 * FileName:devinfo.h
 * ModuleName:devinfo
 * Author: wangjc
 * Create Date: 2013-10-23
 * Description:add interface to get device information.
 * History:
   <version >  <time>  <author>  <desc>
   1.0		2013-10-23	wangjc	init
*/

#ifndef _DEVICE_INFO_H
#define _DEVICE_INFO_H

#ifdef CONFIG_MACH_ONYX
#define SMEM_PROJECT_INFO 136

enum COMPONENT_TYPE{
	DDR,
	EMMC,
	F_CAMERA,
	R_CAMERA,
	TP,
	LCD,
	WCN,
	I_SENSOR,
	G_SENSOR,
	M_SENSOR,
	GYRO,
	BACKLIGHT,
	MAINBOARD,
	/*Add new component here*/
	FINGERPRINTS,
	TOUCH_KEY,
	COMPONENT_MAX,
};

int push_component_info(enum COMPONENT_TYPE type, char *version, char * manufacture);
int reset_component_info(enum COMPONENT_TYPE type);
bool is_15055_project(void);
bool is_14001_project(void);
#endif

struct manufacture_info
{
	char *version;
	char *manufacture;
};

int register_device_proc(char *name, char *version, char *manufacture);
#endif /*_DEVICE_INFO_H*/
