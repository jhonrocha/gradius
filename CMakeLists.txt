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
  ./src/Background.cpp
  ./src/Boss.cpp
  ./src/Bullet.cpp
  ./src/Double.cpp
  ./src/Enemy.cpp
  ./src/Entity.cpp
  ./src/Gradius.cpp
  ./src/GradiusShip.cpp
  ./src/Screen.cpp
  ./src/Shoot.cpp
  ./src/Simple.cpp
  ./src/SimpleEnemy.cpp
  ./src/Sprite.cpp
  ./src/SquadEnemy.cpp
  ./src/Stage.cpp
  ./src/TestEnemy.cpp
  ./src/Timer.cpp
  ./src/Title.cpp
  ./src/WinScreen.cpp
)

add_executable(gradius ${SOURCES})
