#include "Pathfinder.h"

//Constructor
//Pathfinder::Pathfinder() {}


//Part 1


string Pathfinder::toString() const {
        stringstream endString;
		string finalStringForRealsies = "";

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
                    int value = maze[i][j][k];
                    endString << value;
					endString << " ";
                }
                endString << '\n';
            }
			if (i != ARRAY_Z - 1) {
				endString << '\n';
			}
//            endString << '\n';
        }
    //    cout << endString;
//		string temp = "";
//		endString >> temp;
//		endString.str().erase(endString.str().end());
//		endString.unget();

        return endString.str();
}

void Pathfinder::createRandomMaze() {
	srand(time(NULL));
	int temp = 0;

	for (int z = 0; z < 5; z++) {
		for (int y = 0; y < 5; y++) {
			for (int x = 0; x < 5; x++) {
				temp = rand() % 2;
				maze[z][y][x] = temp;
			}
		}
	}
	maze[0][0][0] = 1;
	maze[4][4][4] = 1;
}

//Part 2

bool Pathfinder::importMaze(string file_name) {
	ifstream fileIn;
	//ofstream fileOut;
	int temp = 2;

    fileIn.open(file_name);

    if (!fileIn) {
        return false;
    }


    for (int z = 0; z < 5; z++) {
        for (int y = 0; y < 5; y++) {
            for (int x = 0; x < 5; x++) {
                if (fileIn.eof() == true) {
                    return false;
                }
                fileIn >> temp;
                if (temp == 1 || temp == 0) {
                    maze[z][y][x] = temp;
                }else {
                    return false;
                }
            }
        }
    }
    if(!fileIn.eof()){
        return false;
    }

    if (maze[0][0][0] == 0 || maze[4][4][4] == 0) {
        return false;
    }
    /*test case
    for (int i = 0; i < 5; i ++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                cout << maze[i][j][k];
            }
            cout << endl;
        }
    }
    */
    return true;
}

//Part 3
bool Pathfinder::findPath(int x, int y, int z) {
	path.push_back("(x,y,z)");
	if ( x < 0 || y < 0 || z < 0 || x > 4 || y > 4 || z > 4) {
		path.pop_back();
		return false;
	}
	else if (maze[x][y][z] == 0 || maze[x][y][z] == 2) {
		path.pop_back();
		return false;
	}
	else if (x == 4 || y == 4 || z == 4) {
		return true;
	}
	//recursive thingy
	maze[x][y][z] = 2;
	if (findPath(x, y, (z + 1))) {
		return true;
	}
	else if (findPath(x, y, (z - 1))) {
		return true;
	}
	else if (findPath(x, (y + 1), z)) {
		return true;
	}
	else if (findPath(x, (y - 1), z)) {
		return true;
	}
	else if (findPath((x + 1), y, z)) {
		return true;
	}
	else if (findPath((x - 1), y, z)) {
		return true;
	}
	else {
		path.pop_back();
		return false;
	}
}
vector<string> Pathfinder::solveMaze() {
	findPath(0, 0, 0);

	return path;
}

