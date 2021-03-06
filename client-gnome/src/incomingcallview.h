/*
 *  Copyright (C) 2015-2016 Savoir-faire Linux Inc.
 *  Author: Stepan Salenikovich <stepan.salenikovich@savoirfairelinux.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.
 */

#ifndef _INCOMINGCALLVIEW_H
#define _INCOMINGCALLVIEW_H

#include <gtk/gtk.h>

class QModelIndex;

G_BEGIN_DECLS

#define INCOMING_CALL_VIEW_TYPE            (incoming_call_view_get_type ())
#define INCOMING_CALL_VIEW(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), INCOMING_CALL_VIEW_TYPE, IncomingCallView))
#define INCOMING_CALL_VIEW_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass), INCOMING_CALL_VIEW_TYPE, IncomingCallViewClass))
#define IS_INCOMING_CALL_VIEW(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), INCOMING_CALL_VIEW_TYPE))
#define IS_INCOMING_CALL_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass), INCOMING_CALL_VIEW_TYPE))

typedef struct _IncomingCallView      IncomingCallView;
typedef struct _IncomingCallViewClass IncomingCallViewClass;


GType      incoming_call_view_get_type      (void) G_GNUC_CONST;
GtkWidget *incoming_call_view_new           (void);
void       incoming_call_view_set_call_info (IncomingCallView *view, const QModelIndex& idx);

G_END_DECLS

#endif /* _INCOMINGCALLVIEW_H */
