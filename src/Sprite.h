/*
 * Sprite.h
 *
 *  Created on: 26/05/2013
 *      Author: jhonantans
 */

#ifndef SPRITE_H_
#define SPRITE_H_

#include<iostream>
#include"SDL/SDL.h"
using namespace std;

class Sprite {

protected:
	SDL_Surface* sprite;
	int x, y;
	int width, height;

public:
	Sprite();
	Sprite(string);
	Sprite(string, int, int);
	void show(int, int, SDL_Surface*, SDL_Rect* clip = NULL);
	void show(SDL_Surface*, SDL_Rect* clip = NULL);
	void load(string);
	void setx(int);
	void sety(int);
	int getx();
	int gety();
	void setwidth(int);
	void setheight(int);
	int getwidth();
	int getheight();
	virtual ~Sprite();
};

#endif /* SPRITE_H_ */
