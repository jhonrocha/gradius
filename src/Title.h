/*
 * Title.h
 *
 *  Created on: 28/05/2013
 *      Author: jhonantans
 */

#ifndef TITLE_H_
#define TITLE_H_

#include "Screen.h"

class Title: public Screen {
public:
	Title(string, string);
	void options();
	virtual ~Title();
};

#endif /* TITLE_H_ */
