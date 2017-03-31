#pragma once

class Board
{
private:
	char board[10][10];

public:
	Board();
	Board(char *boardFile);
	virtual ~Board();
};