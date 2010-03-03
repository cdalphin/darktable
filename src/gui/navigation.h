/*
    This file is part of darktable,
    copyright (c) 2009--2010 johannes hanika.

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DARKTABLE_NAVIGATION_H
#define DARKTABLE_NAVIGATION_H

#include <gtk/gtk.h>
#include <inttypes.h>

typedef struct dt_gui_navigation_t
{
  int32_t dragging;
}
dt_gui_navigation_t;

void dt_gui_navigation_init(dt_gui_navigation_t *n, GtkWidget *widget);
void dt_gui_navigation_cleanup(dt_gui_navigation_t *n);
gboolean dt_gui_navigation_expose(GtkWidget *widget, GdkEventExpose *event, gpointer user_data);
gboolean dt_gui_navigation_motion_notify(GtkWidget *widget, GdkEventMotion *event, gpointer user_data);
gboolean dt_gui_navigation_button_press(GtkWidget *widget, GdkEventButton *event, gpointer user_data);
gboolean dt_gui_navigation_button_release(GtkWidget *widget, GdkEventButton *event, gpointer user_data);
gboolean dt_gui_navigation_leave_notify(GtkWidget *widget, GdkEventCrossing *event, gpointer user_data);
void dt_gui_navigation_get_pos(dt_gui_navigation_t *n, float *x, float *y);

#endif
