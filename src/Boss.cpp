/*
 * Boss.cpp
 *
 *  Created on: 27/05/2013
 *      Author: raphael
 */

#include "Boss.h"

Boss::Boss(string path, int coord_x, int coord_y, int yVel,int bossLife): Enemy(path, coord_x, coord_y, xVel, yVel){
	// TODO Auto-generated constructor stub
	this->bossLife = bossLife;
}
Boss::~Boss() {
	// TODO Auto-generated destructor stub
}

void Boss::shoot(){

}

void Boss::setBossLife(int bossLife){
	this->bossLife = bossLife;
}

int Boss::getBoosLife(){
	return bossLife;
}

void Boss::move(int screenHeight, int screenWidth){
	yVel = 10*upDown;
	y += yVel;

	if ((y < 30) || (y + screenHeight > screenHeight - 20))
	{
		upDown = upDown * (-1);
		y -= yVel;
	}
	Box.y = y;
}

