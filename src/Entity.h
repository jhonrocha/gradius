/*
 * Entity.h
 *
 *  Created on: 26/05/2013
 *      Author: jhonantans
 */

#ifndef ENTITY_H_
#define ENTITY_H_

#include"SDL/SDL.h"
#include<iostream>
#include"Sprite.h"

using namespace std;

class Entity: public Sprite{
protected:
	int xVel, yVel;
	SDL_Rect Box;

public:
	Entity(string, int, int);
	Entity(string, int, int, int, int);
	void setxVel(int);
	void setyVel(int);
	void setBox(int, int, int, int);
	int getxVel();
	int getyVel();
	SDL_Rect getBox();
	bool checkCollision(Entity*);
	virtual void move();
	virtual ~Entity();
};

#endif /* ENTITY_H_ */
