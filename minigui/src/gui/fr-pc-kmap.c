/*
 *   This file is part of MiniGUI, a mature cross-platform windowing 
 *   and Graphics User Interface (GUI) support system for embedded systems
 *   and smart IoT devices.
 * 
 *   Copyright (C) 2002~2018, Beijing FMSoft Technologies Co., Ltd.
 *   Copyright (C) 1998~2002, WEI Yongming
 * 
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 * 
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 * 
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *   Or,
 * 
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 * 
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 * 
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/en/about/licensing-policy/>.
 */
/* Do not edit this file! It was automatically generated by   */
/*    loadkeys --mktable defkeymap.map > defkeymap.c          */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"

#include "linux_types.h"
#include "linux_keyboard.h"
#include "linux_kd.h"
#include "keyboard.h"

#ifdef _MGKBDLAYOUT_FRPC

static u_short plain_map[NR_KEYS] = {
	0xf200,	0xf01b,	0xf026,	0xf0e9,	0xf022,	0xf027,	0xf028,	0xf02d,
	0xf0e8,	0xf05f,	0xf0e7,	0xf0e0,	0xf029,	0xf03d,	0xf07f,	0xf009,
	0xfb61,	0xfb7a,	0xfb65,	0xfb72,	0xfb74,	0xfb79,	0xfb75,	0xfb69,
	0xfb6f,	0xfb70,	/*0xf402*/0xf05e,	0xf024,	0xf201,	0xf702,	0xfb71,	0xfb73,
	0xfb64,	0xfb66,	0xfb67,	0xfb68,	0xfb6a,	0xfb6b,	0xfb6c,	0xfb6d,
	0xf0f9,	0xf0b2,	0xf700,	0xf02a,	0xfb77,	0xfb78,	0xfb63,	0xfb76,
	0xfb62,	0xfb6e,	0xf02c,	0xf03b,	0xf03a,	0xf021,	0xf700,	0xf30c,
	0xf703,	0xf020,	0xf207,	0xf100,	0xf101,	0xf102,	0xf103,	0xf104,
	0xf105,	0xf106,	0xf107,	0xf108,	0xf109,	0xf208,	0xf209,	0xf307,
	0xf308,	0xf309,	0xf30b,	0xf304,	0xf305,	0xf306,	0xf30a,	0xf301,
	0xf302,	0xf303,	0xf300,	0xf310,	0xf206,	0xf200,	0xf03c,	0xf10a,
	0xf10b,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf30e,	0xf702,	0xf30d,	0xf20e,	0xf701,	0xf205,	0xf114,	0xf603,
	0xf118,	0xf601,	0xf602,	0xf117,	0xf600,	0xf119,	0xf115,	0xf116,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf11d,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
};

static u_short shift_map[NR_KEYS] = {
	0xf200,	0xf01b,	0xf031,	0xf032,	0xf033,	0xf034,	0xf035,	0xf036,
	0xf037,	0xf038,	0xf039,	0xf030,	0xf0b0,	0xf02b,	0xf07f,	0xf009,
	0xfb41,	0xfb5a,	0xfb45,	0xfb52,	0xfb54,	0xfb59,	0xfb55,	0xfb49,
	0xfb4f,	0xfb50,	/*0xf404*/0xf0a8,	0xf0a3,	0xf201,	0xf702,	0xfb51,	0xfb53,
	0xfb44,	0xfb46,	0xfb47,	0xfb48,	0xfb4a,	0xfb4b,	0xfb4c,	0xfb4d,
	0xf025,	0xf0b2,	0xf700,	0xf0b5,	0xfb57,	0xfb58,	0xfb43,	0xfb56,
	0xfb42,	0xfb4e,	0xf03f,	0xf02e,	0xf02f,	0xf0a7,	0xf700,	0xf30c,
	0xf703,	0xf020,	0xf207,	0xf10c,	0xf10d,	0xf10e,	0xf10f,	0xf110,
	0xf111,	0xf112,	0xf113,	0xf11e,	0xf11f,	0xf208,	0xf203,	0xf307,
	0xf308,	0xf309,	0xf30b,	0xf304,	0xf305,	0xf306,	0xf30a,	0xf301,
	0xf302,	0xf303,	0xf300,	0xf310,	0xf206,	0xf200,	0xf03e,	0xf120,
	0xf121,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf30e,	0xf702,	0xf30d,	0xf20e,	0xf701,	0xf205,	0xf114,	0xf603,
	0xf20b,	0xf601,	0xf602,	0xf117,	0xf600,	0xf20a,	0xf115,	0xf116,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf11d,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
};

static u_short altgr_map[NR_KEYS] = {
	0xf200,	0xf200,	0xf200,	0xf07e,	0xf023,	0xf07b,	0xf05b,	0xf07c,
	0xf060,	0xf05c,	0xf05e,	0xf040,	0xf05d,	0xf07d,	0xf200,	0xf200,
	0xfb61,	0xfb7a,	0xf0a4,	0xfb72,	0xfb74,	0xfb79,	0xfb75,	0xfb69,
	0xfb6f,	0xfb70,	0xf200,	0xf0a4,	0xf201,	0xf702,	0xfb71,	0xfb73,
	0xfb64,	0xfb66,	0xfb67,	0xfb68,	0xfb6a,	0xfb6b,	0xfb6c,	0xfb6d,
	0xf200,	0xf0b2,	0xf700,	0xf200,	0xfb77,	0xfb78,	0xfb63,	0xfb76,
	0xfb62,	0xfb6e,	0xf200,	0xf200,	0xf200,	0xf200,	0xf700,	0xf916,
	0xf703,	0xf200,	0xf207,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf914,	0xf202,	0xf911,
	0xf912,	0xf913,	0xf917,	0xf90e,	0xf90f,	0xf910,	0xf918,	0xf90b,
	0xf90c,	0xf90d,	0xf90a,	0xf310,	0xf206,	0xf200,	0xf07c,	0xf200,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf919,	0xf702,	0xf915,	0xf20e,	0xf701,	0xf205,	0xf114,	0xf603,
	0xf118,	0xf601,	0xf602,	0xf117,	0xf600,	0xf119,	0xf115,	0xf116,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf11d,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
};

static u_short ctrl_map[NR_KEYS] = {
	0xf200,	0xf200,	0xf200,	0xf000,	0xf01b,	0xf01c,	0xf01d,	0xf01e,
	0xf01f,	0xf07f,	0xf200,	0xf200,	0xf01f,	0xf200,	0xf200,	0xf200,
	0xf001,	0xf01a,	0xf005,	0xf012,	0xf014,	0xf019,	0xf015,	0xf009,
	0xf00f,	0xf010,	0xf01b,	0xf01d,	0xf201,	0xf702,	0xf011,	0xf013,
	0xf004,	0xf006,	0xf007,	0xf008,	0xf00a,	0xf00b,	0xf00c,	0xf00d,
	0xf007,	0xf000,	0xf700,	0xf01c,	0xf017,	0xf018,	0xf003,	0xf016,
	0xf002,	0xf00e,	0xf200,	0xf200,	0xf200,	0xf07f,	0xf700,	0xf30c,
	0xf703,	0xf000,	0xf207,	0xf122,	0xf123,	0xf124,	0xf125,	0xf126,
	0xf127,	0xf128,	0xf129,	0xf12a,	0xf12b,	0xf208,	0xf204,	0xf307,
	0xf308,	0xf309,	0xf30b,	0xf304,	0xf305,	0xf306,	0xf30a,	0xf301,
	0xf302,	0xf303,	0xf300,	0xf310,	0xf206,	0xf200,	0xf200,	0xf12c,
	0xf12d,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf30e,	0xf702,	0xf30d,	0xf20e,	0xf701,	0xf205,	0xf114,	0xf603,
	0xf118,	0xf601,	0xf602,	0xf117,	0xf600,	0xf119,	0xf115,	0xf116,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf11d,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
};

static u_short altgr_ctrl_map[NR_KEYS] = {
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf001,	0xf01a,	0xf005,	0xf012,	0xf014,	0xf019,	0xf015,	0xf009,
	0xf00f,	0xf010,	0xf200,	0xf200,	0xf201,	0xf702,	0xf011,	0xf013,
	0xf004,	0xf006,	0xf007,	0xf008,	0xf00a,	0xf00b,	0xf00c,	0xf00d,
	0xf200,	0xf0b2,	0xf700,	0xf200,	0xf017,	0xf018,	0xf003,	0xf016,
	0xf002,	0xf00e,	0xf200,	0xf200,	0xf200,	0xf200,	0xf700,	0xf30c,
	0xf703,	0xf200,	0xf207,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf208,	0xf200,	0xf307,
	0xf308,	0xf309,	0xf30b,	0xf304,	0xf305,	0xf306,	0xf30a,	0xf301,
	0xf302,	0xf303,	0xf300,	0xf20c,	0xf206,	0xf200,	0xf200,	0xf200,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf30e,	0xf702,	0xf30d,	0xf20e,	0xf701,	0xf205,	0xf114,	0xf603,
	0xf118,	0xf601,	0xf602,	0xf117,	0xf600,	0xf119,	0xf115,	0xf20c,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf11d,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
};

static u_short alt_map[NR_KEYS] = {
	0xf200,	0xf81b,	0xf831,	0xf832,	0xf833,	0xf834,	0xf835,	0xf836,
	0xf837,	0xf838,	0xf839,	0xf830,	0xf82d,	0xf83d,	0xf87f,	0xf809,
	0xf861,	0xf87a,	0xf865,	0xf872,	0xf874,	0xf879,	0xf875,	0xf869,
	0xf86f,	0xf870,	0xf85b,	0xf85d,	0xf80d,	0xf702,	0xf871,	0xf873,
	0xf864,	0xf866,	0xf867,	0xf868,	0xf86a,	0xf86b,	0xf86c,	0xf86d,
	0xf827,	0xf860,	0xf700,	0xf85c,	0xf877,	0xf878,	0xf863,	0xf876,
	0xf862,	0xf86e,	0xf200,	0xf200,	0xf200,	0xf200,	0xf700,	0xf30c,
	0xf703,	0xf820,	0xf207,	0xf500,	0xf501,	0xf502,	0xf503,	0xf504,
	0xf505,	0xf506,	0xf507,	0xf508,	0xf509,	0xf208,	0xf209,	0xf907,
	0xf908,	0xf909,	0xf30b,	0xf904,	0xf905,	0xf906,	0xf30a,	0xf901,
	0xf902,	0xf903,	0xf900,	0xf310,	0xf206,	0xf200,	0xf83c,	0xf50a,
	0xf50b,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf30e,	0xf702,	0xf30d,	0xf20e,	0xf20e,	0xf205,	0xf114,	0xf212,
	0xf118,	0xf210,	0xf211,	0xf117,	0xf600,	0xf119,	0xf115,	0xf116,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf11d,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
};

static u_short ctrl_alt_map[NR_KEYS] = {
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf801,	0xf81a,	0xf805,	0xf812,	0xf814,	0xf819,	0xf815,	0xf809,
	0xf80f,	0xf810,	0xf200,	0xf200,	0xf201,	0xf702,	0xf811,	0xf813,
	0xf804,	0xf806,	0xf807,	0xf808,	0xf80a,	0xf80b,	0xf80c,	0xf80d,
	0xf200,	0xf0b2,	0xf700,	0xf200,	0xf817,	0xf818,	0xf803,	0xf816,
	0xf802,	0xf80e,	0xf200,	0xf200,	0xf200,	0xf200,	0xf700,	0xf30c,
	0xf703,	0xf200,	0xf207,	0xf500,	0xf501,	0xf502,	0xf503,	0xf504,
	0xf505,	0xf506,	0xf507,	0xf508,	0xf509,	0xf208,	0xf200,	0xf307,
	0xf308,	0xf309,	0xf30b,	0xf304,	0xf305,	0xf306,	0xf30a,	0xf301,
	0xf302,	0xf303,	0xf300,	0xf20c,	0xf206,	0xf200,	0xf200,	0xf50a,
	0xf50b,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
	0xf30e,	0xf702,	0xf30d,	0xf20e,	0xf701,	0xf205,	0xf114,	0xf603,
	0xf118,	0xf601,	0xf602,	0xf117,	0xf600,	0xf119,	0xf115,	0xf20c,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf11d,
	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,	0xf200,
};

static ushort *key_maps[MAX_NR_KEYMAPS] = {
	plain_map, shift_map, altgr_map, 0,
	ctrl_map, 0, altgr_ctrl_map, 0,
	alt_map, 0, 0, 0,
	ctrl_alt_map,	0
};


/*
 * Philosophy: most people do not define more strings, but they who do
 * often want quite a lot of string space. So, we statically allocate
 * the default and allocate dynamically in chunks of 512 bytes.
 */

static char func_buf[] = {
	'\033', '[', '[', 'A', 0, 
	'\033', '[', '[', 'B', 0, 
	'\033', '[', '[', 'C', 0, 
	'\033', '[', '[', 'D', 0, 
	'\033', '[', '[', 'E', 0, 
	'\033', '[', '1', '7', '~', 0, 
	'\033', '[', '1', '8', '~', 0, 
	'\033', '[', '1', '9', '~', 0, 
	'\033', '[', '2', '0', '~', 0, 
	'\033', '[', '2', '1', '~', 0, 
	'\033', '[', '2', '3', '~', 0, 
	'\033', '[', '2', '4', '~', 0, 
	'\033', '[', '2', '5', '~', 0, 
	'\033', '[', '2', '6', '~', 0, 
	'\033', '[', '2', '8', '~', 0, 
	'\033', '[', '2', '9', '~', 0, 
	'\033', '[', '3', '1', '~', 0, 
	'\033', '[', '3', '2', '~', 0, 
	'\033', '[', '3', '3', '~', 0, 
	'\033', '[', '3', '4', '~', 0, 
	'\033', '[', '1', '~', 0, 
	'\033', '[', '2', '~', 0, 
	'\033', '[', '3', '~', 0, 
	'\033', '[', '4', '~', 0, 
	'\033', '[', '5', '~', 0, 
	'\033', '[', '6', '~', 0, 
	'\033', '[', 'M', 0, 
	'\033', '[', 'P', 0, 
};


static char *func_table[MAX_NR_FUNC] = {
	func_buf + 0,
	func_buf + 5,
	func_buf + 10,
	func_buf + 15,
	func_buf + 20,
	func_buf + 25,
	func_buf + 31,
	func_buf + 37,
	func_buf + 43,
	func_buf + 49,
	func_buf + 55,
	func_buf + 61,
	func_buf + 67,
	func_buf + 73,
	func_buf + 79,
	func_buf + 85,
	func_buf + 91,
	func_buf + 97,
	func_buf + 103,
	func_buf + 109,
	func_buf + 115,
	func_buf + 120,
	func_buf + 125,
	func_buf + 130,
	func_buf + 135,
	func_buf + 140,
	func_buf + 145,
	0,
	0,
	func_buf + 149,
	0,
};

#if 0

struct kbdiacr accent_table[MAX_DIACR] = {
};

unsigned int accent_table_size = 0;

#else

static struct kbdiacr accent_table[MAX_DIACR] = {
	{'`', 'A', '\300'},	{'`', 'a', '\340'},
	{'\'', 'A', '\301'},	{'\'', 'a', '\341'},
	{'^', 'A', '\302'},	{'^', 'a', '\342'},
	{'~', 'A', '\303'},	{'~', 'a', '\343'},
	{'"', 'A', '\304'},	{'"', 'a', '\344'},
	{'O', 'A', '\305'},	{'o', 'a', '\345'},
	{'0', 'A', '\305'},	{'0', 'a', '\345'},
	{'A', 'A', '\305'},	{'a', 'a', '\345'},
	{'A', 'E', '\306'},	{'a', 'e', '\346'},
	{',', 'C', '\307'},	{',', 'c', '\347'},
	{'`', 'E', '\310'},	{'`', 'e', '\350'},
	{'\'', 'E', '\311'},	{'\'', 'e', '\351'},
	{'^', 'E', '\312'},	{'^', 'e', '\352'},
	{'"', 'E', '\313'},	{'"', 'e', '\353'},
	{'`', 'I', '\314'},	{'`', 'i', '\354'},
	{'\'', 'I', '\315'},	{'\'', 'i', '\355'},
	{'^', 'I', '\316'},	{'^', 'i', '\356'},
	{'"', 'I', '\317'},	{'"', 'i', '\357'},
	{'-', 'D', '\320'},	{'-', 'd', '\360'},
	{'~', 'N', '\321'},	{'~', 'n', '\361'},
	{'`', 'O', '\322'},	{'`', 'o', '\362'},
	{'\'', 'O', '\323'},	{'\'', 'o', '\363'},
	{'^', 'O', '\324'},	{'^', 'o', '\364'},
	{'~', 'O', '\325'},	{'~', 'o', '\365'},
	{'"', 'O', '\326'},	{'"', 'o', '\366'},
	{'/', 'O', '\330'},	{'/', 'o', '\370'},
	{'`', 'U', '\331'},	{'`', 'u', '\371'},
	{'\'', 'U', '\332'},	{'\'', 'u', '\372'},
	{'^', 'U', '\333'},	{'^', 'u', '\373'},
	{'"', 'U', '\334'},	{'"', 'u', '\374'},
	{'\'', 'Y', '\335'},	{'\'', 'y', '\375'},
	{'T', 'H', '\336'},	{'t', 'h', '\376'},
	{'s', 's', '\337'},	{'"', 'y', '\377'},
	{'s', 'z', '\337'},	{'i', 'j', '\377'},
};

static unsigned int accent_table_size = 68;

#endif

void init_frpc_kbd_layout (ushort*** key_maps_p, struct kbdiacr** accent_table_p, 
                unsigned int* accent_table_size_p, char*** func_table_p)
{
    *key_maps_p = key_maps;
    *accent_table_p = accent_table;
    *accent_table_size_p = accent_table_size;
    *func_table_p = func_table;
}

#endif /* _MGKBDLAYOUT_FRPC */

