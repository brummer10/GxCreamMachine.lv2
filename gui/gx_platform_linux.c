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

void gx_gui_create_window_and_surface(gx_CreamMachineUI *ui) {
	ui->win = XCreateWindow(ui->dpy, (Window)ui->parentWindow, 0, 0,
								ui->width, ui->height, 0,
								CopyFromParent, InputOutput,
								CopyFromParent, CopyFromParent, 0);

	ui->event_mask = StructureNotifyMask|ExposureMask|KeyPressMask 
					|EnterWindowMask|LeaveWindowMask|ButtonReleaseMask
					|ButtonPressMask|Button1MotionMask;

	XSelectInput(ui->dpy, ui->win, ui->event_mask);
	XMapWindow(ui->dpy, ui->win);
	XClearWindow(ui->dpy, ui->win);

	ui->visual = DefaultVisual(ui->dpy, DefaultScreen (ui->dpy));
	ui->surface = cairo_xlib_surface_create (ui->dpy, ui->win, ui->visual,
										ui->width, ui->height);
}

void gx_gui_register_controller_message(gx_CreamMachineUI *ui) {
	ui->DrawController = XInternAtom(ui->dpy, "ControllerMessage", False);
}

void gx_gui_destroy_main_window(gx_CreamMachineUI *ui) {
	XDestroyWindow(ui->dpy, ui->win);
	XCloseDisplay(ui->dpy);
}

void gx_gui_resize_surface(gx_CreamMachineUI *ui) {
	XWindowAttributes attrs;
	XGetWindowAttributes(ui->dpy, (Window)ui->parentWindow, &attrs);
	ui->width = attrs.width;
	ui->height = attrs.height;
	XResizeWindow (ui->dpy,ui->win ,ui->width, ui->height);
	cairo_xlib_surface_set_size( ui->surface, ui->width, ui->height);
}

void gx_gui_send_controller_event(gx_CreamMachineUI *ui, int controller) {
	XClientMessageEvent xevent;
	xevent.type = ClientMessage;
	xevent.message_type = ui->DrawController;
	xevent.display = ui->dpy;
	xevent.window = ui->win;
	xevent.format = 16;
	xevent.data.l[0] = controller;
	XSendEvent(ui->dpy, ui->win, 0, 0, (XEvent *)&xevent);
}

#endif /* __linux__ */
#endif /* __GX_PLATFORM_LINUX_H__ */
