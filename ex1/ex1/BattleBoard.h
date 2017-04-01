#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class BattleBoard
{
public:
	string boardName;
	string playerName;
	int R;
	int C;
	string* matrix;

	BattleBoard() : matrix(NULL) {}
	~BattleBoard()
	{
		if (matrix != NULL)
		{
			delete[] matrix;
		}
	}
};

