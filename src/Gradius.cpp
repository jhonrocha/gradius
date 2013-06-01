/*
 * Gradius.cpp
 *
 *  Created on: 27/05/2013
 *      Author: jhonantans
 */

#include "Background.h"
#include "Boss.h"
#include "Bullet.h"
#include "Double.h"
#include "Enemy.h"
#include "Entity.h"
#include "GradiusShip.h"
#include "Screen.h"
#include "Shoot.h"
#include "Simple.h"
#include "SimpleEnemy.h"
#include "Sprite.h"
#include "SquadEnemy.h"
#include "Stage.h"
#include "Timer.h"
#include "Title.h"
#include "WinScreen.h"

#include "TestEnemy.h"
/*
 * Alterações em Screen e no arquivo de main atual Gradius.cpp
 */

bool init()
{
    //Initialize all SDL subsystems
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return false;
    }

    return true;
}

int main(){
	//TODO Main
	bool quit = false;
	int FRAMES_PER_SECOND = 50;
	int xVel = 0, yVel = 0;
	Timer fps;

	if(!init()){
		cout << "Unknow Problem!" << endl;
	}

	SDL_Event event;
	GradiusShip gradius("f1.png",0,0);
	Stage stage("farback.gif","GradiusTitle.gif");
	stage.setScreenWidth(1300);

	TestEnemy test("e_f1.png",stage.screen_width,0,3,3);
	SimpleEnemy noob("e_f1.png",stage.screen_width,0,3,3);

	cout << "No Problem1!" << endl;

	while( quit == false )
    {
		fps.start();
        while( SDL_PollEvent( &event ) )
        {
            if( event.type == SDL_QUIT )
            {
                //Quit the program
                quit = true;
            }
        }

    	Uint8 *keystates = SDL_GetKeyState( NULL );

    	//If up is pressed
    	if( keystates[ SDLK_UP ] )
    	{
    	  yVel = -6;
    	}

    	//If down is pressed
    	if( keystates[ SDLK_DOWN ] )
    	{
    	   yVel = 6;
    	}

    	//If left is pressed
    	if( keystates[ SDLK_LEFT ] )
    	{
    	   xVel = -6;
    	}

    	//If right is pressed
    	if( keystates[ SDLK_RIGHT ] )
    	{
    	   xVel = 6;
    	}


        gradius.move(xVel, yVel,stage.screen_height,stage.screen_width);

        noob.move(stage.screen_height, stage.screen_width);
		if(noob.getx()<0){
			noob.setx(stage.screen_width);
		}

		test.move(gradius.getx(),gradius.gety());

		stage.background.move(stage.screen);
		gradius.show(stage.screen);
		noob.show(stage.screen);
		test.show(stage.screen);

		stage.handle_events(event);
		stage.show_screen();

		cout << "No problem2!" << endl;

		if(gradius.checkCollision(&noob)){
			SDL_Delay(200);
		}


		if(fps.get_ticks() < (1000/FRAMES_PER_SECOND)){
			SDL_Delay((1000/FRAMES_PER_SECOND) - fps.get_ticks());
		}

		xVel = yVel = 0;
		cout << "No Problem5!" << endl;
    }

	cout << "No Problem4!" << endl;

	return 0;

	SDL_Quit();
}
