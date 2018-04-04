#include <iostream>
#include <cstdlib>
#include <ctime>
#include "WilliamLibraryWithFunctions.h"
#include "RyanLibrary.h"
#include "AbubakerLibrary.h"
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

