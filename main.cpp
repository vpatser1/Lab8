#include <iostream>
#include "Graph.h"

int main(int argc, char *argv[])
{
	string fileName = argv[1];
	ifstream openedFile(fileName);

	int countOfLine = 1;
	if (openedFile.is_open()){
		while (!openedFile.eof()){
			openedFile>>
			countOfLine++
		}
		openedFile.close();
	}


 	return 0;
}
