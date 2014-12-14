/*
 * TessuMod: Mod for integrating TeamSpeak into World of Tanks
 * Copyright (C) 2014  Janne Hakonen
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
 * USA
 */

#pragma once

#include <QtGlobal>
#include <map>
#include <public_definitions.h>

struct PositionalAudioData
{
	quint16 version;
	TS3_VECTOR cameraPosition;
	TS3_VECTOR cameraDirection;
	std::map<anyID, TS3_VECTOR> clientPositions;
};

QDataStream& operator>>( QDataStream &stream, TS3_VECTOR& vector );
QDataStream& operator>>( QDataStream &stream, PositionalAudioData& data );

std::ostream& operator<<( std::ostream& stream, const TS3_VECTOR& vector );
std::ostream& operator<<( std::ostream& stream, const PositionalAudioData& data );

bool operator!=( const TS3_VECTOR& vector1, const TS3_VECTOR& vector2 );
TS3_VECTOR operator-( const TS3_VECTOR& vector1, const TS3_VECTOR& vector2 );