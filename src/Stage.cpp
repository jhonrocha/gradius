/*
 * Stage.cpp
 *
 *  Created on: 27/05/2013
 *      Author: jhonantans
 */

#include "Stage.h"

Stage::Stage(string path, string title): Screen(path, title) {
	cout << "Stage!" << endl;
	SDL_WM_SetCaption( "Screen de Stage!", NULL );
}

Stage::~Stage() {
	// TODO
}

void Stage::options(){

}
