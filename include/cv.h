﻿/*************************************************
Copyright © Yueyang Co. Ltd. 2019-2029. All rights reserved.
File name: cv.h
Author： Yueyang
Version: V1.0
Description: LiteCV顶层头文件，提供基础数据类型
Others: 
Log: 11.3 Yueyang
*************************************************/

#ifndef _CV_H
#define _CV_H


//调试使用的控制台打印
#define DEBUG

#define bool                 u8
#define false                0
#define true                 1  
#define PI                   3.1415926 

#define GUI_RED       0x0000FF
#define GUI_BLUE      0xFF0000
#define GUI_GREEN     0x00FF00
#define RGB565_R      0xF800             //the separate RGB value
#define RGB565_G      0x07E0
#define RGB565_B      0x001F



#define WINDOWS


//在不同的平台上一些数据的字长不一样
#ifdef WINDOWS

typedef unsigned short       WORD;
typedef unsigned long        DWORD;
typedef long                 LONG;
typedef unsigned char        BYTE;
typedef unsigned int         UINT;
typedef int                  INT;
typedef short                SHORT;
typedef unsigned             char uint8_t;
typedef unsigned short       int uint16_t;
typedef unsigned             int uint32_t;
typedef uint32_t             u32;
typedef uint16_t             u16;
typedef uint8_t              u8;

#endif



#ifdef X86_LINUX

typedef unsigned             char uint8_t;
typedef unsigned short       int uint16_t;
typedef unsigned             int uint32_t;
typedef uint32_t             u32;
typedef uint16_t             u16;
typedef uint8_t              u8;
typedef unsigned short       WORD;
typedef u32                  DWORD;
typedef u32                  LONG;
typedef unsigned char        BYTE;



#endif

#ifdef ARM_LINUX

#include <sys/stat.h>
#include <sys/time.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <iostream>
#include <sys/types.h>
#include <linux/types.h>
#include <linux/fb.h>
#include <linux/videodev2.h>

#endif

#ifdef ARM_NONE

#endif



#endif // !CV_H