#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>
#include <stdlib.h>

#define GOAL 2048
#define ROWS 4
#define COLUMNS 4

namespace Game2048
{
	ref class Controls
	{
	public: 
		static array<System::Windows::Forms::Label^>^ gameLabels = gcnew array<System::Windows::Forms::Label^>(16);
		static array<System::Windows::Forms::Panel^>^ gamePanels = gcnew array<System::Windows::Forms::Panel^>(16);
	};

	class Game
	{
	public:
		Game();
		~Game();
		int Game::print(int row, int col);
		void newTwo();
		bool keyInput(int key);
		bool checkDefeat();
		bool checkVictory();
		bool up(bool test);
		bool down(bool test);
		bool left(bool test);
		bool right(bool test);
	private:
		int body[ROWS][COLUMNS];
	};

	int getKey();
}