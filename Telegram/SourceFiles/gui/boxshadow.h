/*
This file is part of Telegram Desktop,
the official desktop version of Telegram messaging app, see https://telegram.org

Telegram Desktop is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

It is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

In addition, as a special exception, the copyright holders give permission
to link the code of portions of this program with the OpenSSL library.

Full license: https://github.com/telegramdesktop/tdesktop/blob/master/LICENSE
Copyright (c) 2014-2015 John Preston, https://desktop.telegram.org
*/
#pragma once

class BoxShadow {
public:

	enum {
		Left = 1,
		Top = 2,
		Right = 4,
		Bottom = 8
	};

	BoxShadow(const style::sprite &topLeft);

	void paint(QPainter &p, const QRect &box, int32 shifty, int32 flags = Left | Top | Right | Bottom);

private:

	int32 _size, _pixsize;
	QPixmap _corners, _left, _top, _right, _bottom;
	QVector<style::color> _colors;

};
