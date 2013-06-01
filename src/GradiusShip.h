/*
 * GradiusShip.h
 *
 *  Created on: 26/05/2013
 *      Author: yuri
 */

#ifndef GRADIUSSHIP_H_
#define GRADIUSSHIP_H_

#include"SDL/SDL.h"
#include<iostream>
#include"Entity.h"

using namespace std;

class GradiusShip: public Entity {

private:
	int life;
	int powerup;
	int upgrade;
	bool shieldIsOn;
	int shieldDamage;
	int speedLevel;
	int speed;
	enum {
		POWERUP_NONE = 0,
		POWERUP_SPEED,
		POWERUP_BULLET,
		POWERUP_SHIELD,
	};
public:
	GradiusShip(string , int, int);
	GradiusShip(string , int, int, int, int);
	virtual ~GradiusShip();
	void setLife(int);
	int getLife();
	void setUpgrade(int);
	int getUpgrade();
	void setShield(bool);
	bool getShield();
	void move(int, int, int, int);
	void addUpgrade();
	void activateUpgrade();
	void upgradeSpeed();
	void upgradeBullet();
	void upgradeShield();
};

#endif /* GRADIUSSHIP_H_ */
