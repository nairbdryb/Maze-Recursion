#include "Pathfinder.h"

//Constructor

/*Pathfinder::Pathfinder() {
	//yon constructifyer
}*/

//Part 1

string toString() {
	string endString = "";

	for (int i = 0; i < 0; i++) {
		
	}



	return endString;
}

void createRandomMaze() {

}

//Part 2

bool importMaze(string file_name) {
	ifstream fileIn;
	ofstream fileOut;
	int temp = 0;

	fileOut.open(file_name);

	if (!fileIn);
		return false;


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				fileIn >> temp;
				maze[i][j][k] = temp;
			}
		}
	}

}

//Part 3

vector<string> solveMaze() {

}
