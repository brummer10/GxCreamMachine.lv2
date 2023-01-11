// vim:ts=4:sw=4:noet:
#ifndef __GX_PLATFORM_MSWIN_H__
#define __GX_PLATFORM_MSWIN_H__ 1
#ifdef _WIN32

#include "lv2/lv2plug.in/ns/lv2core/lv2.h"
#include "lv2/lv2plug.in/ns/extensions/ui/ui.h"

#include <stdio.h>
#include <windows.h>
#include <windowsx.h>
#include <cairo/cairo-win32.h>

#include <gui/gx_gui.h>

// forward declarations
void SetClientSize(HWND hwnd, int clientWidth, int clientHeight);
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT onPaint( HWND hwnd, WPARAM wParam, LPARAM lParam );

/*---------------------------------------------------------------------
-----------------------------------------------------------------------
			common functions (required)
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

bool gx_gui_open_display(gx_CreamMachineUI *ui) {
	return true; // STUB
}

void gx_gui_create_window_and_surface(gx_CreamMachineUI *ui) {
	// prepare window class
	static TCHAR szClassName[] = TEXT("gx_CreamMachineUIClass");
	WNDCLASS wndclass = {0};
	HINSTANCE hInstance = NULL;

	wndclass.style		   = CS_HREDRAW | CS_VREDRAW; // clear on resize
	wndclass.lpfnWndProc   = WndProc;
	wndclass.hInstance	   = hInstance;
	wndclass.hCursor	   = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground =(HBRUSH)COLOR_WINDOW;
	wndclass.lpszClassName = szClassName;
	wndclass.cbWndExtra    = sizeof(ui); // reserve space for SetWindowLongPtr
	RegisterClass(&wndclass);
	// create the window
	ui->win = CreateWindowEx(WS_EX_TOPMOST, // dwExStyle
							szClassName, // lpClassName
							TEXT("Draw Surface"), // lpWindowName
							(WS_CHILD | WS_VISIBLE), // dwStyle
							CW_USEDEFAULT, CW_USEDEFAULT, // X, Y
							ui->width, ui->height, // nWidth, nHeight
							(HWND)ui->parentWindow, // hWndParent (no embeddeding takes place yet)
							NULL, hInstance, NULL); // hMenu, hInstance, lpParam
													//
	// attach a pointer to "ui" to this window (so ui is available in WndProc)
	SetWindowLongPtr(ui->win, GWLP_USERDATA, (LONG_PTR)ui);
	SetParent(ui->win, (HWND)ui->parentWindow); // embed into parentWindow
	ShowWindow(ui->win, SW_SHOW);
	SetClientSize(ui->win, ui->width, ui->height);

	// create a permanent surface for drawing (see onPaint() event)
	ui->surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, ui->width, ui->height); 
}

void gx_gui_register_controller_message(gx_CreamMachineUI *ui) {
	// STUB
}

void gx_gui_destroy_main_window(gx_CreamMachineUI *ui) {
	// STUB
}

void gx_gui_resize_surface(gx_CreamMachineUI *ui) {
	// STUB
}

void gx_gui_send_controller_event(gx_CreamMachineUI *ui, int controller) {
	// STUB
}


/*---------------------------------------------------------------------
-----------------------------------------------------------------------	
			private functions
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

/*------------- the event loop ---------------*/

// This is the "idle" function called by the plugin host, where the X11 version
// polls the messageloop.
// The messageloop (for subwindows) is implemented as a callback to WndProc,
// so it cant be polled here.
// If it becomes necessary to do GUI stuff only from inside the "idle"
// calls, the Window-Messages might be buffered and processed later/here.
void event_handler(gx_CreamMachineUI *ui) {
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	return 0; // STUB
}

/*---------------------------------------------------------------------
---------------------------------------------------------------------*/	

void SetClientSize(HWND hwnd, int clientWidth, int clientHeight) {
	if (IsWindow(hwnd)) {
		DWORD dwStyle = GetWindowLongPtr(hwnd, GWL_STYLE) ;
		DWORD dwExStyle = GetWindowLongPtr(hwnd, GWL_EXSTYLE) ;
		HMENU menu = GetMenu(hwnd) ;
		RECT rc = {0, 0, clientWidth, clientHeight} ;
		AdjustWindowRectEx(&rc, dwStyle, menu ? TRUE : FALSE, dwExStyle);
		SetWindowPos(hwnd, NULL, 0, 0, rc.right - rc.left, rc.bottom - rc.top,
					 SWP_NOZORDER | SWP_NOMOVE) ;
	}
}

/*---------------------------------------------------------------------
---------------------------------------------------------------------*/	

#endif /* _WIN32 */
#endif /* __GX_PLATFORM_MSWIN_H__ */
