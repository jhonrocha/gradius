/*
 * Enemy.cpp
 *
 *  Created on: 27/05/2013
 *      Author: raphael
 */

#include "Enemy.h"

Enemy::Enemy(string path, int x, int y):Entity(path, x, y) {
	upDown = 1;

	this->instancesCount();
	// TODO Auto-generated constructor stub

}

Enemy::Enemy(string path, int x, int y, int xVel, int yVel):Entity(path, x, y, xVel, yVel) {
	upDown = 1;

	this->instancesCount();
	// TODO Auto-generated constructor stub

}

void Enemy::instancesCount(){
	this->instanceCount = this->instanceCount + 1;
}

Enemy::~Enemy() {
	// TODO Auto-generated destructor stub
}

int Enemy::instanceCount = 0;
