/*
 * Double.h
 *
 *  Created on: 26/05/2013
 *      Author: yuri
 */

#ifndef DOUBLE_H_
#define DOUBLE_H_

#include "Bullet.h"

class Double: public Bullet {
private:
	int count;
public:
	Double(string, int, int, int, int, bool);
	void setCount(int);
	int getCount();
	virtual ~Double();
};

#endif /* DOUBLE_H_ */
