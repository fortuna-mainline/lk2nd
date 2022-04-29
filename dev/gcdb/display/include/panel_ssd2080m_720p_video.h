/* Copyright (c) 2013-2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_SSD2080M_720P_VIDEO_H_
#define _PANEL_SSD2080M_720P_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config ssd2080m_720p_video_panel_data = {
	"qcom,mdss_dsi_ssd2080m_720p_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 1, 50000, 0, 0, 0, 0, 0, 0, NULL
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution ssd2080m_720p_video_panel_res = {
	720, 1280, 80, 24, 14, 0, 25, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info ssd2080m_720p_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char ssd2080m_720p_video_on_cmd0[] = {
	0xFF, 0x01, 0x15, 0x80
};

static char ssd2080m_720p_video_on_cmd1[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x53, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd2[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xC6, 0x63, 0x00, 0x81,
	0x31, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd3[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xCB, 0xE7, 0x80, 0x73,
	0x33, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd4[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xEC, 0xD2, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd5[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB3, 0x04, 0x9F, 0xFF,
};

static char ssd2080m_720p_video_on_cmd6[] = {
	0x04, 0x00, 0x29, 0xC0,
	0xB2, 0x16, 0x26, 0x10,
};

static char ssd2080m_720p_video_on_cmd7[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xB4, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd8[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC1, 0x04, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd9[] = {
	0x04, 0x00, 0x29, 0xC0,
	0xC2, 0xBE, 0x00, 0x58,
};

static char ssd2080m_720p_video_on_cmd10[] = {
	0x09, 0x00, 0x29, 0xC0,
	0xC3, 0x01, 0x22, 0x11,
	0x21, 0x0E, 0x80, 0x80,
	0x24, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd11[] = {
	0x08, 0x00, 0x29, 0xC0,
	0xB6, 0x09, 0x16, 0x42,
	0x01, 0x13, 0x00, 0x00,
};

static char ssd2080m_720p_video_on_cmd12[] = {
	0x04, 0x00, 0x29, 0xC0,
	0xB7, 0x24, 0x26, 0x43,
};

static char ssd2080m_720p_video_on_cmd13[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xB8, 0x16, 0x08, 0x25,
	0x44, 0x08, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd14[] = {
	0x09, 0x00, 0x29, 0xC0,
	0xB9, 0x06, 0x08, 0x07,
	0x09, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd15[] = {
	0x09, 0x00, 0x29, 0xC0,
	0xBA, 0x0E, 0x10, 0x0A,
	0x0C, 0x16, 0x05, 0x00,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd16[] = {
	0x09, 0x00, 0x29, 0xC0,
	0xBB, 0xA1, 0xA1, 0xA1,
	0xA1, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd17[] = {
	0x09, 0x00, 0x29, 0xC0,
	0xBC, 0x0F, 0x11, 0x0B,
	0x0D, 0x16, 0x05, 0x00,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd18[] = {
	0x09, 0x00, 0x29, 0xC0,
	0xBD, 0xA1, 0xA1, 0xA1,
	0xA1, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd19[] = {
	0x04, 0x00, 0x29, 0xC0,
	0xE6, 0xFF, 0xFF, 0x0F,
};

static char ssd2080m_720p_video_on_cmd20[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC7, 0x3F, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd21[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xB5, 0x47, 0x00, 0x00,
	0x08, 0x00, 0x01, 0xFF,
};

static char ssd2080m_720p_video_on_cmd22[] = {
	0x08, 0x00, 0x29, 0xC0,
	0xC4, 0xDF, 0xC2, 0x0C,
	0x0C, 0x63, 0xE3, 0x99,
};

static char ssd2080m_720p_video_on_cmd23[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xD0, 0x0A, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xFF,
};

static char ssd2080m_720p_video_on_cmd24[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xD1, 0x1D, 0x32, 0x1B,
	0x00, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd25[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xD2, 0x0A, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xFF,
};

static char ssd2080m_720p_video_on_cmd26[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xD3, 0x1D, 0x32, 0x1B,
	0x00, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd27[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xD4, 0x0A, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xFF,
};

static char ssd2080m_720p_video_on_cmd28[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xD5, 0x1D, 0x32, 0x1B,
	0x00, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd29[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xD6, 0x0A, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xFF,
};

static char ssd2080m_720p_video_on_cmd30[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xD7, 0x1D, 0x32, 0x1B,
	0x00, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd31[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xD8, 0x0A, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xFF,
};

static char ssd2080m_720p_video_on_cmd32[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xD9, 0x1D, 0x32, 0x1B,
	0x00, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd33[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xDA, 0x0A, 0x00, 0x06,
	0x09, 0x10, 0x20, 0xFF,
};

static char ssd2080m_720p_video_on_cmd34[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xDB, 0x1D, 0x32, 0x1B,
	0x00, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd35[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xCC, 0x10, 0x00, 0xFF,
};

static char ssd2080m_720p_video_on_cmd36[] = {
	0x04, 0x00, 0x29, 0xC0,
	0xCE, 0x4E, 0x55, 0xA5,
};

static char ssd2080m_720p_video_on_cmd37[] = {
	0x04, 0x00, 0x29, 0xC0,
	0xE0, 0x01, 0x02, 0x02,
};

static char ssd2080m_720p_video_on_cmd38[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xF6, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd39[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xF7, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd40[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xE1, 0x90, 0x00, 0xFF,
};

static char ssd2080m_720p_video_on_cmd41[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xDE, 0x95, 0xCF, 0xE2,
	0xCE, 0x11, 0x15, 0xFF,
};

static char ssd2080m_720p_video_on_cmd42[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xCF, 0x46, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd43[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC5, 0x66, 0xFF, 0xFF,
};

static char ssd2080m_720p_video_on_cmd44[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xED, 0x00, 0x20, 0xFF,
};

static char ssd2080m_720p_video_on_cmd45[] = {
	0x53, 0x2c, 0x15, 0x80
};

static char ssd2080m_720p_video_on_cmd46[] = {
	0x11, 0x00, 0x05, 0x80
};

static char ssd2080m_720p_video_on_cmd47[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd ssd2080m_720p_video_on_command[] = {
	{0x4, ssd2080m_720p_video_on_cmd0, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd1, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd2, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd3, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd4, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd5, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd6, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd7, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd8, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd9, 0x00},
	{0x10, ssd2080m_720p_video_on_cmd10, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd11, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd12, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd13, 0x00},
	{0x10, ssd2080m_720p_video_on_cmd14, 0x00},
	{0x10, ssd2080m_720p_video_on_cmd15, 0x00},
	{0x10, ssd2080m_720p_video_on_cmd16, 0x00},
	{0x10, ssd2080m_720p_video_on_cmd17, 0x00},
	{0x10, ssd2080m_720p_video_on_cmd18, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd19, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd20, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd21, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd22, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd23, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd24, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd25, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd26, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd27, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd28, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd29, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd30, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd31, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd32, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd33, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd34, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd35, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd36, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd37, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd38, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd39, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd40, 0x00},
	{0xc, ssd2080m_720p_video_on_cmd41, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd42, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd43, 0x00},
	{0x8, ssd2080m_720p_video_on_cmd44, 0x00},
	{0x4, ssd2080m_720p_video_on_cmd45, 0x00},
	{0x4, ssd2080m_720p_video_on_cmd46, 0x20},
	{0x4, ssd2080m_720p_video_on_cmd47, 0x20}
};

#define SSD2080M_720P_VIDEO_ON_COMMAND 48


static char ssd2080m_720p_videooff_cmd0[] = {
	0x10, 0x00, 0x05, 0x80
};

static char ssd2080m_720p_videooff_cmd1[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x53, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_videooff_cmd2[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc2, 0x00, 0xFF, 0xFF,
};

static char ssd2080m_720p_videooff_cmd3[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xcf, 0x40, 0xFF, 0xFF,
};

static char ssd2080m_720p_videooff_cmd4[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xde, 0x84, 0x00, 0xFF,
};

static char ssd2080m_720p_videooff_cmd5[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xcb, 0x22, 0xFF, 0xFF,
};

static char ssd2080m_720p_videooff_cmd6[] = {
	0x02, 0x00, 0x39, 0xC0,
	0xc3, 0x00, 0xFF, 0xFF,
};

static struct mipi_dsi_cmd ssd2080m_720p_video_off_command[] = {
	{0x4, ssd2080m_720p_videooff_cmd0, 0x32},
	{0x8, ssd2080m_720p_videooff_cmd1, 0x20},
	{0x8, ssd2080m_720p_videooff_cmd2, 0x20},
	{0x8, ssd2080m_720p_videooff_cmd3, 0x00},
	{0x8, ssd2080m_720p_videooff_cmd4, 0x20},
	{0x8, ssd2080m_720p_videooff_cmd5, 0x00},
	{0x8, ssd2080m_720p_videooff_cmd6, 0x00}
};

#define SSD2080M_720P_VIDEO_OFF_COMMAND 7


static struct command_state ssd2080m_720p_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info ssd2080m_720p_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info ssd2080m_720p_video_video_panel = {
	1, 0, 0, 0, 1, 0, 2, 0, 0x8
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration ssd2080m_720p_video_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t ssd2080m_720p_video_timings[] = {
	0x68, 0x1d, 0x15, 0x00, 0x2e, 0x2d, 0x19, 0x1f, 0x24, 0x03, 0x04, 0x00
};

static struct panel_timing ssd2080m_720p_video_timing_info = {
	0, 4, 0x20, 0x2f
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence ssd2080m_720p_video_panel_reset_seq = {
	{1, 0, 1, }, {20, 2, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight ssd2080m_720p_video_backlight = {
	1, 1, 4095, 100, 1, "PMIC_8941"
};

#endif /*_PANEL_SSD2080M_720P_VIDEO_H_*/
