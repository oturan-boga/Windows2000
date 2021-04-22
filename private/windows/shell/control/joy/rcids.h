//****************************************************************************
//
//  File:	rcids.h
//  Content:	resource constants
//  History:
//   Date	By	Reason
//   ====	==	======
//   29-nov-94	craige	split from mmse
//   15-dec-94	craige	allow N joysticks
//   05-jan-95	craige	new centering confirmation messages
//   04-mar-95	craige	bug 10761 - separate strings for pluralization
//
//  Copyright (c) Microsoft Corporation 1994, 1995
//
//****************************************************************************
#ifndef __RCIDS_INCLUDED__
#define __RCIDS_INCLUDED__

#include "joyhelp.h"

#define ID_GENERIC_START		0x1000

/*
 * Icons
 */
#define IDI_JOYSTICK			100
#define IDI_JOYBTN			101
#define IDI_JOYPOV_NONE			102
#define IDI_JOYPOV_UP			103
#define IDI_JOYPOV_DOWN			104
#define IDI_JOYPOV_LEFT			105
#define IDI_JOYPOV_RIGHT		106
#define IDI_JOYPOV_GRAYED		107

/*
 * strings
 */
#define IDS_GENERIC_START		(ID_GENERIC_START)
#define IDS_GENERIC_STRINGS		(IDS_GENERIC_START)

#define IDS_JOYINFO			(IDS_GENERIC_STRINGS + 0x0001)
#define IDS_JOY				(IDS_GENERIC_STRINGS + 0x0002)
#define IDS_JOY2			(IDS_GENERIC_STRINGS + 0x0003)
#define IDS_JOY2S			(IDS_GENERIC_STRINGS + 0x0004)

#define IDS_JOYSTICK_STRINGS		(IDS_GENERIC_START+0x0100)
#define IDS_JOYCALXY_CENTER		(IDS_JOYSTICK_STRINGS+0x0001)
#define IDS_JOYCALXY_MOVE		(IDS_JOYSTICK_STRINGS+0x0002)
#define IDS_JOYCALZ_MOVE		(IDS_JOYSTICK_STRINGS+0x0003)
#define IDS_JOYCALPOV_MOVE		(IDS_JOYSTICK_STRINGS+0x0004)
#define IDS_JOYCAL_UP			(IDS_JOYSTICK_STRINGS+0x0005)
#define IDS_JOYCAL_DOWN			(IDS_JOYSTICK_STRINGS+0x0006)
#define IDS_JOYCAL_LEFT			(IDS_JOYSTICK_STRINGS+0x0007)
#define IDS_JOYCAL_RIGHT		(IDS_JOYSTICK_STRINGS+0x0008)
#define IDS_JOYTESTCAPN			(IDS_JOYSTICK_STRINGS+0x0009)
/* 0x000a unused */
#define IDS_JOYBUTTON1			(IDS_JOYSTICK_STRINGS+0x000b)
#define IDS_JOYBUTTON2			(IDS_JOYSTICK_STRINGS+0x000c)
#define IDS_JOYCALCAPN			(IDS_JOYSTICK_STRINGS+0x000d)
/* 0x000e unused */
#define IDS_JOYUNPLUGGED		(IDS_JOYSTICK_STRINGS+0x000f)
#define IDS_JOYCALXY_MOVEYOKE		(IDS_JOYSTICK_STRINGS+0x0010)
#define IDS_JOYCAL_DONE			(IDS_JOYSTICK_STRINGS+0x0011)
#define IDS_JOYCALXY_MOVEGAMEPAD	(IDS_JOYSTICK_STRINGS+0x0012)
#define IDS_JOYCALXY_CENTERGAMEPAD	(IDS_JOYSTICK_STRINGS+0x0013)
#define IDS_JOYCALXY_CENTERYOKE		(IDS_JOYSTICK_STRINGS+0x0014)
#define IDS_JOYREADERROR		(IDS_JOYSTICK_STRINGS+0x0015)
#define IDS_JOYCALRUDDER_MOVE		(IDS_JOYSTICK_STRINGS+0x0016)
#define IDS_JOYCALXY_MOVECAR		(IDS_JOYSTICK_STRINGS+0x0017)
#define IDS_JOYCALXY_CENTERCAR		(IDS_JOYSTICK_STRINGS+0x0018)
#define IDS_JOYCALXY_CENTER2		(IDS_JOYSTICK_STRINGS+0x0019)
#define IDS_JOYCAL_YOKE			(IDS_JOYSTICK_STRINGS+0x001a)
#define IDS_JOYCAL_CAR			(IDS_JOYSTICK_STRINGS+0x001b)
#define IDS_JOYCAL_GAMEPAD		(IDS_JOYSTICK_STRINGS+0x001c)
#define IDS_JOYNOTPRESENT		(IDS_JOYSTICK_STRINGS+0x001d)
#define IDS_JOYCAL_NOTDONE		(IDS_JOYSTICK_STRINGS+0x001e)
#define IDS_JOYCALU_MOVE		(IDS_JOYSTICK_STRINGS+0x001f)
#define IDS_JOYCALV_MOVE		(IDS_JOYSTICK_STRINGS+0x0020)
#define IDS_JOYRESTARTMSG1		(IDS_JOYSTICK_STRINGS+0x0021)
#define IDS_JOYRESTARTMSG2		(IDS_JOYSTICK_STRINGS+0x0022)
#define IDS_JOYCALXY_CENTERGAMEPAD2	(IDS_JOYSTICK_STRINGS+0x0023)
#define IDS_JOYCALXY_CENTERYOKE2	(IDS_JOYSTICK_STRINGS+0x0024)
#define IDS_JOYCALXY_CENTERCAR2		(IDS_JOYSTICK_STRINGS+0x0025)
#define IDS_JOYCAL_YOKES		(IDS_JOYSTICK_STRINGS+0x0026)
#define IDS_JOYCAL_CARS			(IDS_JOYSTICK_STRINGS+0x0027)
#define IDS_JOYCAL_GAMEPADS		(IDS_JOYSTICK_STRINGS+0x0028)
#define IDS_JOYCALINDICATOR		(IDS_JOYSTICK_STRINGS+0x0029)
#define IDS_VAXIS_LABEL			(IDS_JOYSTICK_STRINGS+0x002a)
#define IDS_UAXIS_LABEL			(IDS_JOYSTICK_STRINGS+0x002b)
#define IDS_POVAXIS_LABEL		(IDS_JOYSTICK_STRINGS+0x002c)
#define IDS_ZAXIS_LABEL			(IDS_JOYSTICK_STRINGS+0x002d)
#define IDS_XYAXIS_LABEL		(IDS_JOYSTICK_STRINGS+0x002e)
#define IDS_RAXIS_LABEL 		(IDS_JOYSTICK_STRINGS+0x002f)    

#define IDS_JOYHW0			(IDS_JOYSTICK_STRINGS+0x0040)
#define IDS_JOYHW1			(IDS_JOYSTICK_STRINGS+0x0041)
#define IDS_JOYHW2			(IDS_JOYSTICK_STRINGS+0x0042)
#define IDS_JOYHW3			(IDS_JOYSTICK_STRINGS+0x0043)
#define IDS_JOYHW4			(IDS_JOYSTICK_STRINGS+0x0044)
#define IDS_JOYHW5			(IDS_JOYSTICK_STRINGS+0x0045)
#define IDS_JOYHW6			(IDS_JOYSTICK_STRINGS+0x0046)
#define IDS_JOYHW7			(IDS_JOYSTICK_STRINGS+0x0047)
#define IDS_JOYHW8			(IDS_JOYSTICK_STRINGS+0x0048)
#define IDS_JOYHW9			(IDS_JOYSTICK_STRINGS+0x0049)
#define IDS_JOYHW10			(IDS_JOYSTICK_STRINGS+0x004a)
#define IDS_JOYHW11			(IDS_JOYSTICK_STRINGS+0x004b)

/*
 * dialog ids
 */
#define IDD_JOYSTICK			0x1000
#define IDD_JOYCALIBRATE		0x1001
#define IDD_JOYTEST			0x1002
#define IDD_JOYCUSTOM			0x1003
#define IDD_JOYTEST1			0x1004
#define IDD_JOYCALIBRATE1		0x1005

/*
 * dialog constants
 */
#define IDC_STATIC			-1

#define ID_START			(ID_GENERIC_START+0x1000)
#define ID_APPLY			(ID_START + 0x0001)
#define ID_INIT				(ID_START + 0x0002)
#define IDC_ICON_1			(ID_START + 0x0003)
#define IDC_ICON_2			(ID_START + 0x0004)
#define IDC_TEXT_1			(ID_START + 0x0005)
#define IDC_TEXT_2			(ID_START + 0x0006)
#define IDC_GROUPBOX			(ID_START + 0x0007)
#define IDC_GROUPBOX_2			(ID_START + 0x0008)
#define IDC_GROUPBOX_3			(ID_START + 0x0009)

#define ID_JOYSTICK_START		(ID_GENERIC_START+0x2000)
#define IDC_JOYSTICK1_FRAME		(ID_JOYSTICK_START+0x0001)
#define IDC_JOYSTICK2_FRAME		(ID_JOYSTICK_START+0x0002)
#define IDC_JOYCALIBRATE		(ID_JOYSTICK_START+0x0003)
#define IDC_JOYTEST			(ID_JOYSTICK_START+0x0004)
#define IDC_JOYLIST1			(ID_JOYSTICK_START+0x0005)
#define IDC_JOYCALSTEP			(ID_JOYSTICK_START+0x0006)
#define IDC_JOYCALICON			(ID_JOYSTICK_START+0x0007)
#define IDC_JOYTESTBTN			(ID_JOYSTICK_START+0x0008)	   
#define IDC_JOYSELECT			(ID_JOYSTICK_START+0x0009)
#define IDC_JOYSELECT2			(ID_JOYSTICK_START+0x000a)
#define IDC_JOYSELECTMSG		(ID_JOYSTICK_START+0x000b)
#define IDC_JOYSELECTMSG2		(ID_JOYSTICK_START+0x000c)
#define IDC_JOYXYPOS			(ID_JOYSTICK_START+0x000d)
#define IDC_JOYB1			(ID_JOYSTICK_START+0x000e)
#define IDC_JOYB2			(ID_JOYSTICK_START+0x000f)
#define IDC_JOYB3			(ID_JOYSTICK_START+0x0010)
#define IDC_JOYB4			(ID_JOYSTICK_START+0x0011)
#define IDC_JOYB3TXT			(ID_JOYSTICK_START+0x0012)
#define IDC_JOYB4TXT			(ID_JOYSTICK_START+0x0013)
#define IDC_JOYLIST2			(ID_JOYSTICK_START+0x0014)
#define IDC_JOYPOV			(ID_JOYSTICK_START+0x0015)
#define IDC_JOYB1_LABEL			(ID_JOYSTICK_START+0x0016)
#define IDC_JOYB2_LABEL			(ID_JOYSTICK_START+0x0017)
#define IDC_JOYB3_LABEL			(ID_JOYSTICK_START+0x0018)
#define IDC_JOYB4_LABEL			(ID_JOYSTICK_START+0x0019)
#define IDC_JOYLIST1_LABEL		(ID_JOYSTICK_START+0x001a)
#define IDC_JOYLIST2_LABEL		(ID_JOYSTICK_START+0x001b)
#define IDC_JOYPOV_LABEL		(ID_JOYSTICK_START+0x001c)
#define IDC_JOYCALIBRATE2		(ID_JOYSTICK_START+0x001d)
#define IDC_JOYTEST2			(ID_JOYSTICK_START+0x001e)
#define IDC_JOYMSG			(ID_JOYSTICK_START+0x001f)
#define IDC_JOYCALMSG			(ID_JOYSTICK_START+0x0020)
#define IDC_JOYCALDONE			(ID_JOYSTICK_START+0x0021)
#define IDC_JOYHASPOV			(ID_JOYSTICK_START+0x0022)
#define IDC_JOYISYOKE			(ID_JOYSTICK_START+0x0023)
#define IDC_JOYISGAMEPAD		(ID_JOYSTICK_START+0x0024)
#define IDC_JOYISCARCTRL		(ID_JOYSTICK_START+0x0025)
#define IDC_JOY2BUTTON			(ID_JOYSTICK_START+0x0026)
#define IDC_JOY4BUTTON			(ID_JOYSTICK_START+0x0027)
#define IDC_JOYPICKPOV			(ID_JOYSTICK_START+0x0028)
#define IDC_JOYCALBACK			(ID_JOYSTICK_START+0x0029)
#define IDC_JOYCALNEXT			(ID_JOYSTICK_START+0x002a)
#define IDC_JOYSPECIALBOX		(ID_JOYSTICK_START+0x002b)
#define IDC_JOYUSESPECIAL		(ID_JOYSTICK_START+0x002c)
#define IDC_JOY1HASRUDDER		(ID_JOYSTICK_START+0x002d)
#define IDC_JOYLIST3			(ID_JOYSTICK_START+0x002e)
#define IDC_JOYLIST3_LABEL		(ID_JOYSTICK_START+0x002f)
#define IDC_JOY2AXIS			(ID_JOYSTICK_START+0x0030)
#define IDC_JOY3AXIS			(ID_JOYSTICK_START+0x0031)
#define IDC_JOY4AXIS			(ID_JOYSTICK_START+0x0032)
#define IDC_JOY_UNCAL1			(ID_JOYSTICK_START+0x0033)
#define IDC_JOY_UNCAL2			(ID_JOYSTICK_START+0x0034)
#define IDC_JOY_UNCAL3			(ID_JOYSTICK_START+0x0035)
#define IDC_JOY_UNCAL4			(ID_JOYSTICK_START+0x0036)
#define IDC_JOY_UNCAL5			(ID_JOYSTICK_START+0x0037)
#define IDC_JOY_UNCAL6			(ID_JOYSTICK_START+0x0038)
#define IDC_JOYCURRENTID		(ID_JOYSTICK_START+0x0039)
#define IDC_JOYCURRENTIDMSG		(ID_JOYSTICK_START+0x003a)
#define IDC_JOYLIST4			(ID_JOYSTICK_START+0x003b)
#define IDC_JOYLIST4_LABEL		(ID_JOYSTICK_START+0x003c)
#define IDC_JOYLIST5			(ID_JOYSTICK_START+0x003d)
#define IDC_JOYLIST5_LABEL		(ID_JOYSTICK_START+0x003e)
#define IDC_JOYRESET			(ID_JOYSTICK_START+0x003f)
#define IDC_JOYTROUBLESHOOT_FRAME	(ID_JOYSTICK_START+0x0040)
#define IDC_JOYTROUBLESHOOT_TEXT	(ID_JOYSTICK_START+0x0041)

#endif
