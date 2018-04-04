#include <iostream>
#include <cstdlib>
#include <ctime>
#include "WilliamLibraryWithFunctions.h"
using namespace std;

void intro();
int playGame();
void updateCount(int Result, int &Wins, int &Losses, int &Draws);
char askRepeat();
void report(int Wins, int Losses, int Draws);

int main()
{
	intro();
	srand(time(NULL));
	int Wins = 0, Losses = 0, Draws = 0;
	char Answer;
	do {
		int Result; // 0=draw 1=user win 2=computer win int
		Result = playGame();
		updateCount(Result, Wins, Losses, Draws);
		Answer = askRepeat();
	} while ((Answer != 'N') && (Answer != 'n'));
	report(Wins, Losses, Draws);

	system("pause");
	return 0;
}

void intro()
{
	cout << " 2 1 \n" << "Rules of game: Player and dealer are each dealt the same amount of cards. Each card holds a value from 1-10.\n";
	cout << "The sum of each players cards are then counted. If anyone's sum is over 21, they bust. The goal is to have as high as a number as possible\n";
	cout << "without going over 21. If both players get the same sum or both bust, it is a draw. Enjoy, and gamble responsibly!\n";
}
