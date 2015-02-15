/*
 * TessuMod: Mod for integrating TeamSpeak into World of Tanks
 * Copyright (C) 2015  Janne Hakonen
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

#include <QString>
#include <QMetaType>

namespace Entity
{

class Failure
{
public:
	enum Code
	{
		General,
		NotConnectedToServer,
		TestSoundInProgress
	};

	Failure( Code code = General );
	Failure( const QString &error );

	Code getCode() const;
	QString what() const;

	operator QVariant() const;

private:
	Code code;
	QString error;
};

}

Q_DECLARE_METATYPE( Entity::Failure )
