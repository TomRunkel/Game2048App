#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>
#include <stdlib.h>
#include <random>
#include "Game2048.h"

namespace Game2048
{
	int Game::print(int row, int col)
	{
		return body[row][col];
	}

	void Game::newTwo()
	{
		std::random_device rd;
		std::uniform_int_distribution<int> dist(0, 15);
		int position = dist(rd);
		for (; body[position / ROWS][position % COLUMNS] != 0;)
		{
			position = (position + 1) % (ROWS * COLUMNS);
		}
		body[position / ROWS][position % COLUMNS] = 2;
	}

	bool Game::keyInput(int key)
	{
		if (key == 72) return up(false);
		if (key == 80) return down(false);
		if (key == 75) return left(false);
		if (key == 77) return right(false);
		if (key == 'q') exit(0);
	}

	bool Game::checkDefeat()
	{
		return (up(true) || down(true) || left(true) || right(true)) ? false : true;
	}

	bool Game::checkVictory()
	{
		for (int row = 0; row < ROWS - 1; row++)
		{
			for (int col = 0; col < COLUMNS - 1; col++)
			{
				if (body[row][col] == 2048) return true;
			}
		}
		return false;
	}

	bool Game::up(bool test)
	{
		bool success = false;
		for (int i = 0; i < ROWS; i++)
		{
			for (int row = 0; row < ROWS - 1; row++)
			{
				for (int col = 0; col < COLUMNS; col++)
				{
					if (body[row][col] == 0 && body[row + 1][col] != 0)
					{
						success = true;
						if (test == true) return success;
						body[row][col] = body[row + 1][col];
						body[row + 1][col] = 0;
					}
				}
			}
		}
		for (int row = 0; row < ROWS - 1; row++)
		{
			for (int col = 0; col < COLUMNS; col++)
			{
				if (body[row][col] == body[row + 1][col] && body[row][col] != 0)
				{
					success = true;
					if (test == true) return success;
					body[row][col] = body[row][col] * 2;
					for (int i = row + 1; i < ROWS; i++)
					{
						if (i < ROWS - 1) body[i][col] = body[i + 1][col];
						else body[i][col] = 0;
					}
				}
			}
		}
		if (success == true) newTwo();
		return success;
	}
	bool Game::down(bool test)
	{
		bool success = false;
		for (int i = 0; i < ROWS; i++)
		{
			for (int row = ROWS - 1; row > 0; row--)
			{
				for (int col = 0; col < COLUMNS; col++)
				{
					if (body[row][col] == 0)
					{
						success = true;
						if (test == true) return success;
						body[row][col] = body[row - 1][col];
						body[row - 1][col] = 0;
					}
				}
			}
		}
		for (int row = ROWS - 1; row > 0; row--)
		{
			for (int col = 0; col < COLUMNS; col++)
			{
				if (body[row][col] == body[row - 1][col] && body[row][col] != 0)
				{
					success = true;
					if (test == true) return success;
					body[row][col] = body[row][col] * 2;
					for (int i = row - 1; i >= 0; i--)
					{
						if (i > 0) body[i][col] = body[i - 1][col];
						else body[i][col] = 0;
					}
				}
			}
		}
		if (success == true) newTwo();
		return success;
	}
	bool Game::left(bool test)
	{
		bool success = false;
		for (int i = 0; i < COLUMNS; i++)
		{
			for (int col = 0; col < COLUMNS - 1; col++)
			{
				for (int row = 0; row < ROWS; row++)
				{
					if (body[row][col] == 0 && body[row][col + 1] != 0)
					{
						success = true;
						if (test == true) return success;
						body[row][col] = body[row][col + 1];
						body[row][col + 1] = 0;
					}
				}
			}
		}
		for (int col = 0; col < COLUMNS - 1; col++)
		{
			for (int row = 0; row < ROWS; row++)
			{
				if (body[row][col] == body[row][col + 1] && body[row][col + 1] != 0)
				{
					success = true;
					if (test == true) return success;
					body[row][col] = body[row][col] * 2;
					for (int i = col + 1; i < COLUMNS; i++)
					{
						if (i < COLUMNS - 1) body[row][i] = body[row][i + 1];
						else body[row][i] = 0;
					}
				}
			}
		}
		if (success == true) newTwo();
		return success;
	}
	bool Game::right(bool test)
	{
		bool success = false;
		for (int i = 0; i < COLUMNS; i++)
		{
			for (int col = COLUMNS - 1; col > 0; col--)
			{
				for (int row = 0; row < ROWS; row++)
				{
					if (body[row][col] == 0)
					{
						success = true;
						if (test == true) return success;
						body[row][col] = body[row][col - 1];
						body[row][col - 1] = 0;
					}
				}
			}
		}
		for (int col = COLUMNS - 1; col > 0; col--)
		{
			for (int row = 0; row < ROWS; row++)
			{
				if (body[row][col] == body[row][col - 1] && body[row][col] != 0)
				{
					success = true;
					if (test == true) return success;
					body[row][col] = body[row][col] * 2;
					for (int i = col - 1; i >= 0; i--)
					{
						if (i > 0) body[row][i] = body[row][i - 1];
						else body[row][i] = 0;
					}
				}
			}
		}
		if (success == true) newTwo();
		return success;
	}

	Game::Game()
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				body[i][j] = 0;
			}
		}
	}

	Game::~Game()
	{
	}
	//*********************MAIN***************************
		/*
	int main()
	{

		Game Game1;
		Game1.newTwo();
		Game1.print();
		for (;;)
		{
			Game1.keyInput(getKey());
			Game1.print();
			if (Game1.checkDefeat() == true)
			{
				std::cout << "You suck!";
				return 0;
			}
			if (Game1.checkVictory() == true)
			{
				std::cout << "You are awesome!";
				return 0;
			}
		}
		return 0;
	}
		*/
	//****************************************************

	int getKey()
	{
		int key = _getch();
		if ((key == 0) || (key == 224))
			key = _getch();
		return key;
	}


}