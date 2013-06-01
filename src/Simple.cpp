/*
 * Simple.cpp
 *
 *  Created on: 26/05/2013
 *      Author: yuri
 */

#include "Simple.h"

Simple::Simple(string path, int coord_x, int coord_y, int x_vel, int y_vel, bool ally): Bullet(path, coord_x, coord_y, x_vel, y_vel) {
	// TODO Auto-generated constructor stub
	this->ally = ally;
}

Simple::~Simple() {
	// TODO Auto-generated destructor stub
}

