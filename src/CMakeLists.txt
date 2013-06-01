project(Gradius)

cmake_minimum_required(VERSION 2.8)

find_package(SDL REQUIRED)
find_package(SDL_image REQUIRED)
find_package(SDL_ttf REQUIRED)

link_libraries(	${SDL_LIBRARY}
		${SDLIMAGE_LIBRARY}
		${SDLTTF_LIBRARY}
		SDLmain)

set(SOURCES
	./Sprite.cpp
	./Entity.cpp
	./GradiusShip.cpp
	./Bullet.cpp
	./Background.cpp
	./Enemy.cpp
	./Shooter.cpp
	./Double.cpp
	./Simple.cpp
	./SquadEnemy.cpp
	./SimpleEnemy.cpp
	./Screen.cpp
	./Stage.cpp
	./Gradius.cpp
)

add_executable(gradius ${SOURCES})
