#include "Pathfinder.h"

//Constructor



//Part 1

string Pathfinder::toString() {
	string endString = "";

	return endString;
}

void Pathfinder::createRandomMaze() {

}

//Part 2

bool Pathfinder::importMaze(string file_name) {
	ifstream fileIn;
	ofstream fileOut;
	int temp = 0;

	fileOut.open(file_name);

	if (!fileIn);
		return false;

	for (int z = 0; z < 5; z++) {
		for (int y = 0; y < 5; y++) {
			for (int x = 0; x < 5; x++) {
				fileIn >> temp;
				maze[x][y][z] = temp;
			}
		}
	}
	return true;
}

//Part 3

vector<string> Pathfinder::solveMaze() {

}
