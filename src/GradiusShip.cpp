/*
 * GradiusShip.cpp
 *
 *  Created on: 26/05/2013
 *      Author: yuri
 */

#include "GradiusShip.h"

GradiusShip::GradiusShip(string path, int x, int y): Entity(path, x, y) {
	life = 3;
	powerup = 0;
	upgrade = 0;
	shieldIsOn = false;
	shieldDamage = 0;
	speedLevel = 0;
	speed = 0;
}

GradiusShip::GradiusShip(string path, int x, int y, int xVel, int yVel): Entity(path, x, y, xVel, yVel) {
	life = 3;
	powerup = 0;
	upgrade = 0;
	shieldIsOn = false;
	shieldDamage = 0;
	speedLevel = 0;
	speed = 0;
}

GradiusShip::~GradiusShip() {
	// TODO Auto-generated destructor stub
}

void GradiusShip::setLife(int value){
	life = value;
}

int GradiusShip::getLife() {
	return life;
}

void GradiusShip::setUpgrade(int value) {
	upgrade = value;
}

int GradiusShip::getUpgrade() {
	return upgrade;
}

void GradiusShip::setShield(bool shieldIsOn) {
	this->shieldIsOn = shieldIsOn;
}

bool GradiusShip::getShield() {
	return shieldIsOn;
}

void GradiusShip::move(int velX, int velY, int screenHeight, int screenWidth) {
	xVel = velX;
	yVel = velY;

	//Move the dot left or right
	x += (xVel+speed);

    //If the dot went too far to the left or right
    if( ( x < 0 ) || ( x + width > screenWidth ) )
    {
        //move back
        x -= xVel;
    }
    Box.x = x;
    //Move the dot up or down
    y += (yVel+speed);

    //If the dot went too far up or down
    if( ( y < 0 ) || ( y + height > screenHeight - 20 ) )
    {
        //move back
        y -= yVel;
    }
    Box.y = y;
}

void GradiusShip::addUpgrade() {
	if (powerup < 2)
	{
		powerup++;
	}
	else
	{
		powerup = 0;
		upgrade++;
	}
	if(upgrade > 3)
	{
		upgrade = 1;
	}
}

void GradiusShip::activateUpgrade() {
	switch (upgrade) {
	case POWERUP_SPEED:
	{
		if(speedLevel < 5)
		{
			upgradeSpeed();
		}
		break;
	}
	case POWERUP_BULLET:
	{
		upgradeBullet();
		break;
	}
	case POWERUP_SHIELD:
	{
		if(shieldIsOn == true)
		{
			shieldDamage = 0;
			break;
		}
		else
		{
			upgradeShield();
			break;
		}
	}
}
	upgrade = POWERUP_NONE;
}

void GradiusShip::upgradeSpeed() {
	speed = speedLevel * 3;
}

void GradiusShip::upgradeBullet() {
	//TODO: Implement a method to change the Bullet type, that is called polymorphically.
}

void GradiusShip::upgradeShield() {
	shieldIsOn = true;
	shieldDamage = 0;
}
