/*
 * uhub - A tiny ADC p2p connection hub
 * Copyright (C) 2007-2011, Jan Vidar Krey
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef HAVE_UHUB_PLUGIN_CALLBACK_H
#define HAVE_UHUB_PLUGIN_CALLBACK_H

struct plugin_handle;

extern void plugin_register_callback_functions(struct plugin_handle* handle);
extern void plugin_unregister_callback_functions(struct plugin_handle* handle);

#endif /* HAVE_UHUB_PLUGIN_CALLBACK_H */