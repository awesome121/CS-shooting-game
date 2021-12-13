# CMakeList.txt : CMake project for CS-shooting-game, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (CS-shooting-game "game.cpp" "monster.cpp" "bullet.h" "shop.h" "building.h")

# TODO: Add tests and install targets if needed.
