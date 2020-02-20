#include "Pathfinder.h"

//Constructor
//Pathfinder::Pathfinder() {}


//Part 1


string Pathfinder::toString() const {
        string endString = "";

    //    for (int i = 0; i < ArrayZ; i++){
    //        for (int j = 0; j < ArrayY; j++){
    //            for (int k = 0; k < ArrayX; k++){
    //                cout << maze[k][j][i];
    //            }
    //            cout << endl;
    //        }
    //        cout << endl << endl;
    //    }

        for (int i = 0; i < ARRAY_Z; i++){
            for (int j = 0; j < ARRAY_Y; j++){
                for (int k = 0; k < ARRAY_X; k++){
                    int value = maze[k][j][i];
                    endString += value;
                }
                endString.push_back('\n');
            }
            endString.push_back('\n');
            endString.push_back('\n');
        }
    //    cout << endString;
        return endString;
}

void Pathfinder::createRandomMaze() {
	srand(time(NULL));
	int temp = 0;

	for (int z = 0; z < 5; z++) {
		for (int y = 0; y < 5; y++) {
			for (int x = 0; x < 5; x++) {
				temp = rand() % 2;
				maze[x][y][z] = temp;
			}
		}
	}
	maze[0][0][0] = 1;
	maze[4][4][4] = 1;
}

//Part 2

bool Pathfinder::importMaze(string file_name) {
	ifstream fileIn;
	ofstream fileOut;
	int temp = 0;

	fileOut.open(file_name);

	if (!fileIn) {
		return false;
	}

	if (maze[0][0][0] == 0 || maze[4][4][4] == 0) {
		return false;
	}

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
	vector<string> solution;
	return solution;
}
