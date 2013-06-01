/*
 * Boss.h
 *
 *  Created on: 27/05/2013
 *      Author: raphael
 */

#ifndef BOSS_H_
#define BOSS_H_

#include "Enemy.h"
#include "Shoot.h"

class Boss: public Enemy, public Shoot {
public:
	Boss(string,int, int, int, int);
	virtual ~Boss();
	void shoot();
	void move(int, int);
	void setBossLife(int);
	int getBoosLife();

private:
	int bossLife;
};

#endif /* BOSS_H_ */
