/*
 * Enemy.h
 *
 *  Created on: 27/05/2013
 *      Author: raphael
 */

#ifndef ENEMY_H_
#define ENEMY_H_

#include "Entity.h"
using namespace std;


class Enemy: public Entity {
protected:
	int upDown;
public:
	Enemy(string,int, int);
	Enemy(string,int, int, int, int);
	int static instanceCount;
	virtual ~Enemy();

private:

	void instancesCount();

};

#endif /* ENEMY_H_ */
