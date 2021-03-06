/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "scumm/he/intern_he.h"

namespace Scumm {

Moonbase::Moonbase() {
	_fowSentinelImage = -1;
	_fowSentinelState = -1;
	_fowSentinelConditionBits = 0;
}

Moonbase::~Moonbase() {
}

void Moonbase::renderFOW() {
	warning("STUB: renderFOW()");
}

void Moonbase::blitT14WizImage(uint8 *dst, int dstw, int dsth, int dstPitch, const Common::Rect *clipBox,
		 uint8 *wizd, int srcx, int srcy, int rawROP, int paramROP) {
}

} // End of namespace Scumm
