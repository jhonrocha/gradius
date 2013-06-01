/*
 * TestEnemy.cpp
 *
 *  Created on: 01/06/2013
 *      Author: jhonantans
 */

#include "TestEnemy.h"

TestEnemy::TestEnemy(string path, int x, int y, int xVel, int yVel) : Enemy (path, x, y, xVel, yVel) {
	// TODO Auto-generated constructor stub

}

TestEnemy::~TestEnemy() {
	// TODO Auto-generated destructor stub
}

void TestEnemy::move(int posX, int posY){

	if(x<posX)
		x += xVel;
	else
		x -= xVel;

	if(y<posY)
		y += yVel;
	else
		y -= yVel;

	Box.x = x;
	Box.y = y;
}
