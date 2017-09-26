/*!
 * COPYRIGHT (C) 2017 Emeric Grange - All Rights Reserved
 *
 * This file is part of MiniVideo.
 *
 * MiniVideo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MiniVideo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with MiniVideo.  If not, see <http://www.gnu.org/licenses/>.
 *
 * \file      minivideo_guid.h
 * \author    Emeric Grange <emeric.grange@gmail.com>
 * \date      2017
 */

#ifndef MINIVIDEO_GUID_H
#define MINIVIDEO_GUID_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// minivideo headers
#include "bitstream.h"
#include "minivideo_typedef.h"

/* ************************************************************************** */

char *getGuidString(const uint8_t guid_in[16], char *guid_out);

void read_guid_be(Bitstream_t *bitstr, uint8_t guid[16]);

void read_guid_le(Bitstream_t *bitstr, uint8_t guid[16]);

/* ************************************************************************** */
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // MINIVIDEO_GUID_H