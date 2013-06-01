/*
 * Screen.cpp
 *
 *  Created on: 27/05/2013
 *      Author: jhonantans
 */

#include "Screen.h"

Screen::Screen(string path, string title):background(path,3),text(title){
	cout << "Screen!" << endl;
	screen = NULL;
	screen_width = background.getwidth();
	screen_height = background.getheight();
	screen = SDL_SetVideoMode( screen_width, screen_height, 32, SDL_SWSURFACE | SDL_RESIZABLE );
	windowed = true;
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
}

void Screen::setScreenWidth(int screen_width){
	this->screen_width = screen_width;
	screen = SDL_SetVideoMode( screen_width, screen_height, 32, SDL_SWSURFACE | SDL_RESIZABLE );
}

void Screen::setScreenHeight(int screen_height){
	this->screen_height = screen_height;
	screen = SDL_SetVideoMode( screen_width, screen_height, 32, SDL_SWSURFACE | SDL_RESIZABLE );
}

int Screen::getScreenWidth(){
	return screen_width;
}

int Screen::getScreenHeight(){
	return screen_height;
}

void Screen::show_screen(){
	SDL_Flip(screen);
}

void Screen::handle_events(SDL_Event event){
    if( event.type == SDL_VIDEORESIZE ){
    	screen = SDL_SetVideoMode( event.resize.w, event.resize.h, 32, SDL_SWSURFACE | SDL_RESIZABLE );

    }

    else if( ( event.type == SDL_KEYDOWN ) && ( event.key.keysym.sym == SDLK_RETURN ) ){
    	fullscreen();
    }
}

void Screen::fullscreen(){
    if( windowed == true ){
    	screen = SDL_SetVideoMode( screen_width, screen_height, 32, SDL_SWSURFACE | SDL_RESIZABLE | SDL_FULLSCREEN );
        windowed = false;
    }

    //If the screen is fullscreen
    else if( windowed == false ){
    	screen = SDL_SetVideoMode( screen_width, screen_height, 32, SDL_SWSURFACE | SDL_RESIZABLE );
        windowed = true;
    }
}
