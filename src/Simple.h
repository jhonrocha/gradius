/*
 * Simple.h
 *
 *  Created on: 26/05/2013
 *      Author: yuri
 */

#ifndef SIMPLE_H_
#define SIMPLE_H_

#include "Bullet.h"

class Simple: public Bullet {
public:
	Simple(string, int, int, int, int, bool);
	virtual ~Simple();
};

#endif /* SIMPLE_H_ */
