/*
 * Bullet.h
 *
 *  Created on: 26/05/2013
 *      Author: yuri
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "Entity.h"

class Bullet: public Entity {

protected:
	bool ally;
public:
	Bullet(string, int, int, int, int);
	virtual ~Bullet();
	void setAlly(bool);
	bool getAlly();
	bool move(int, int, int, int);
};

#endif /* BULLET_H_ */
