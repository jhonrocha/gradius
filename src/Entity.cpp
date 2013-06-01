/*
 * Entity.cpp
 *
 *  Created on: 26/05/2013
 *      Author: jhonantans
 */

#include "Entity.h"

Entity::Entity(string path, int x, int y): Sprite(path,x,y) {
	xVel = 0;
	yVel = 0;
	Box.x = x;
	Box.y = y;
	Box.w = height;
	Box.h = width;
}

Entity::Entity(string path, int x, int y, int xVel, int yVel): Sprite(path,x,y) {
	this->xVel = xVel;
	this->yVel = yVel;
	Box.x = x;
	Box.y = y;
	Box.w = width;
	Box.h = height;
}

Entity::~Entity() {
	// TODO Auto-generated destructor stub
}

void Entity::setxVel(int xVel){
	this->xVel = xVel;
}

void Entity::setyVel(int yVel){
	this->yVel = yVel;
}

void Entity::setBox(int box_x, int box_y, int box_w, int box_h){
	Box.x = box_x;
	Box.y = box_y;
	Box.w = box_w;
	Box.h = box_h;
}

int Entity::getxVel(){
	return xVel;
}

int Entity::getyVel(){
	return yVel;
}

SDL_Rect Entity::getBox(){
	return Box;
}

void Entity::move(){

}

bool Entity::checkCollision(Entity *other) {
	SDL_Rect Box2 = other->getBox();

	int left1, left2;
    int right1, right2;
    int top1, top2;
    int bottom1, bottom2;

    //Calculate the sides of rect 1
      left1 = this->Box.x;
      right1 = this->Box.x + this->Box.w;
      top1 = this->Box.y;
      bottom1 = this->Box.y + this->Box.h;

      //Calculate the sides of rect 2
      left2 = Box2.x;
      right2 = Box2.x + Box2.w;
      top2 = Box2.y;
      bottom2 = Box2.y + Box2.h;

      //If any of the sides from A are outside of B
      if( bottom1 <= top2 )
      {
          return false;
      }

      if( top1 >= bottom2 )
      {
          return false;
      }

      if( right1 <= left2 )
      {
          return false;
      }

      if( left1 >= right2 )
      {
          return false;
      }

      //If none of the sides from A are outside B
      return true;
}
