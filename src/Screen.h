/*
 * Screen.h
 *
 *  Created on: 27/05/2013
 *      Author: jhonantans
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include "Background.h"
#include "Sprite.h"

class Screen {

public:
	Background background;
	Sprite text;
	int screen_width, screen_height;
	SDL_Surface* screen;
	bool windowed;

	Screen(string, string);
	void setScreenWidth(int);
	void setScreenHeight(int);
	int getScreenWidth();
	int getScreenHeight();
	void show_screen();
	void handle_events(SDL_Event);
    void fullscreen();
	virtual ~Screen();
};

#endif /* SCREEN_H_ */
