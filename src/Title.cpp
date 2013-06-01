/*
 * Title.cpp
 *
 *  Created on: 28/05/2013
 *      Author: jhonantans
 */

#include "Title.h"

Title::Title(string path, string text) : Screen(path,text) {
	// TODO Auto-generated constructor stub
	SDL_WM_SetCaption( "Title!", NULL );
}

Title::~Title() {
	// TODO Auto-generated destructor stub
}

void Title::options(){

}
