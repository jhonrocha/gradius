/*
 * SimpleEnemy.cpp
 *
 *  Created on: 28/05/2013
 *      Author: jhonantans
 */

#include "SimpleEnemy.h"

SimpleEnemy::SimpleEnemy(string path, int coord_x, int coord_y, int xVel, int yVel):Enemy(path, coord_x, coord_y, xVel, yVel){
	// TODO Auto-generated constructor stub

}

SimpleEnemy::~SimpleEnemy() {
	// TODO Auto-generated destructor stub
}

void SimpleEnemy::shoot(){

}


void SimpleEnemy::move(int screenHeight, int screenWidth){

	x -= xVel;
	y += yVel;

	if ((y < 0) || ((y + height) > (screenHeight))){
		upDown = upDown * (-1);
		y -= yVel;
		yVel = yVel*upDown;
	}
	Box.x = x;
	Box.y = y;
}
