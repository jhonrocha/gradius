/*
 * SquadEnemy.h
 *
 *  Created on: 27/05/2013
 *      Author: raphael
 */

#ifndef SQUADENEMY_H_
#define SQUADENEMY_H_

#include "Enemy.h"
#include "Shoot.h"

class SquadEnemy: public Enemy, public Shoot {
public:
	SquadEnemy(string,int, int, int, int);
	virtual ~SquadEnemy();
	void shoot();
	void move();
};

#endif /* SQUADENEMY_H_ */
