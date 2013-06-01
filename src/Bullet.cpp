/*
 * Bullet.cpp
 *
 *  Created on: 26/05/2013
 *      Author: yuri
 */

#include "Bullet.h"

Bullet::Bullet(string path, int coord_x, int coord_y, int x_vel, int y_vel): Entity(path, coord_x, coord_y, x_vel, y_vel) {
	// TODO Auto-generated constructor stub
	ally = true;
}

Bullet::~Bullet() {
	// TODO Auto-generated destructor stub
}

void Bullet::setAlly(bool ally) {
	this->ally = ally;
}

bool Bullet::getAlly() {
	return ally;
}

bool Bullet::move (int xVel, int yVel, int screenHeight, int screenWidth) {
	this->xVel = xVel;
	this->yVel = yVel;

	//Move the dot left or right
	if (ally)
	{
		x += this->xVel;
	}
	else
	{
		x -= this->xVel;
	}

    //If the dot went too far to the left or right
    if( ( x < 0 ) || ( x + width > screenWidth) )
    {
    	return true;
    }
    Box.x = x;
    //Move the dot up or down
    y += this->yVel;

    //If the dot went too far up or down
    if( ( y < 0 ) || ( y + height > screenHeight) )
    {
        return true;
    }
    Box.y = y;
    return false;
}
