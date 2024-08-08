# 3D Maze and Recursion
This is a proof of concept featuring recursion. This program will accept a file containing a "maze" and will attempt to navigate through the maze using recursion. 

Visually the code will navigate a 3 dimensional maze, which can be portrayed as the following:
![](https://mjcleme.github.io/3DMaze.JPG)

The program reads commands from files defined at the top of main.cpp. Valid commands are the following:
* importMaze - Expects a relative path. Will import the maze located at the destination file as a maze.
* toString - Can only be run after importMaze, will return the maze in string format.
* createRandomMaze - Will return a maze comprised of random paths.
* solveMaze - Will return true if the maze is solvable, and false if it is unsolvable. 

All output will be stored in a file named "out_<instruction-file>.txt"

A maze is a 3 dimensional array of 1's (passable) and 0's (impassable). Look at the Mazes folder for examples.