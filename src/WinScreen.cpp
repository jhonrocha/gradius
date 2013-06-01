/*
 * WinScreen.cpp
 *
 *  Created on: 27/05/2013
 *      Author: jhonantans
 */

#include "WinScreen.h"

WinScreen::WinScreen(string path, string title):Screen(path, title) {
	// TODO

}

WinScreen::~WinScreen() {
	// TODO
}

void WinScreen::set_namePlayer(string name){
	name_player = name;
}

void WinScreen::save_score(int score){
	//TODO Function to save the best scores in a database.
}

void WinScreen::show_scores(){
	//TODO Show the best scores until now.
}
