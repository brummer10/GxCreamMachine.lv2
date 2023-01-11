// vim:ts=4:sw=4:noet:
#ifndef __GX_PLATFORM_LINUX_H__
#define __GX_PLATFORM_LINUX_H__ 1
#ifdef __linux__

#include "lv2/lv2plug.in/ns/lv2core/lv2.h"
#include "lv2/lv2plug.in/ns/extensions/ui/ui.h"

#include <X11/Xutil.h>
#include <X11/keysym.h>
#include <X11/Xatom.h>
#include <cairo/cairo-xlib.h>

#include <gui/gx_gui.h>

/*---------------------------------------------------------------------
-----------------------------------------------------------------------	
			common functions (required)
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

bool gx_gui_open_display(gx_CreamMachineUI *ui) {
	ui->dpy = XOpenDisplay(0);
	return (ui->dpy != NULL);
}

#endif /* __linux__ */
#endif /* __GX_PLATFORM_LINUX_H__ */
