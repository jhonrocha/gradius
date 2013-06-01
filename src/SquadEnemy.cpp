/*
 * SquadEnemy.cpp
 *
 *  Created on: 27/05/2013
 *      Author: raphael
 */

#include "SquadEnemy.h"

SquadEnemy::SquadEnemy(string path, int coord_x, int coord_y, int xVel, int yVel):Enemy(path, coord_x, coord_y, xVel, yVel){
	// TODO Auto-generated constructor stub

}

SquadEnemy::~SquadEnemy() {
	// TODO Auto-generated destructor stub
}

void SquadEnemy::shoot(){

}

void SquadEnemy::move(){
	x -= xVel;
	Box.x = x;
	Box.y = y;
}

