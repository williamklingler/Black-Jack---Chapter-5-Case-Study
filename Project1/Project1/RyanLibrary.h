#pragma once
#include <iostream>
using namespace std;

void updateCount(int Result, int &Wins, int &Losses, int &Draws)
/*Increments one of the counters as determined by Result
Pre: Result is either 0, 1, or 2
Post: Either Wins, Losses, or Draws has been incremented based
upon whether Result is 1, 2, or 0 respectively */
{
	if (Result == 0)
		Draws++;
	else if (Result == 1)
		Wins++;
	else
		Losses++;
}

void intro()
{
	cout << " 2 1 \n" << "Rules of game: Player and dealer are each dealt the same amount of cards. Each card holds a value from 1-10.\n";
	cout << "The sum of each players cards are then counted. If anyone's sum is over 21, they bust. The goal is to have as high as a number as possible\n";
	cout << "without going over 21. If both players get the same sum or both bust, it is a draw. Enjoy, and gamble responsibly!\n";
}
