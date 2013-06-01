/*
 * Sprite.cpp
 *
 *  Created on: 26/05/2013
 *      Author: jhonantans
 */

#include "SDL/SDL_image.h"
#include "Sprite.h"

Sprite::Sprite() {
	x = 0;
	y = 0;
	sprite = NULL;
	width = 0;
	height = 0;
}

Sprite::Sprite(string path) {
	//TODO Optimized image
	sprite = IMG_Load(path.c_str());
	this->x = 0;
	this->y = 0;
	width = sprite->w;
	height = sprite->h;
	cout << "Sprite!  "<< path << endl;
}

Sprite::Sprite(string path, int x, int y) {
	//TODO Optimized image
	sprite = IMG_Load(path.c_str());
	this->x = x;
	this->y = y;
	width = sprite->w;
	height = sprite->h;
	cout << "Sprite!  "<< path << endl;
}

void Sprite::show(int posX, int posY, SDL_Surface* screen, SDL_Rect* clip){
	SDL_Rect offset;
	offset.x = posX;
	offset.y = posY;
	SDL_BlitSurface(sprite, clip, screen, &offset);
}

void Sprite::show(SDL_Surface* screen, SDL_Rect* clip){
	SDL_Rect offset;
	offset.x = this->x;
	offset.y = this->y;
	cout << "Entrou!" << endl;
	SDL_BlitSurface(sprite, clip, screen, &offset);
	cout << "Entrou2!" << endl;

}

void Sprite::load(string path){
	SDL_Surface* temp;
	temp = IMG_Load(path.c_str());
	sprite = SDL_DisplayFormat(temp);
	SDL_FreeSurface(temp);
}

void Sprite::setx(int x){
	this->x = x;
}

void Sprite::sety(int y){
	this->y = y;
}

int Sprite::getx(){
	return x;
}

int Sprite::gety(){
	return y;
}

void Sprite::setwidth(int width){
	this->width = width;
}

void Sprite::setheight(int height){
	this->height = height;
}

int Sprite::getwidth(){
	return width;
}

int Sprite::getheight(){
	return height;
}

Sprite::~Sprite() {
	SDL_FreeSurface(sprite);
}
