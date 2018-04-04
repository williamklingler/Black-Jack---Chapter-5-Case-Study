#pragma once
#include <iostream>
using namespace std;
int playGame()
/*Plays one game of 21 and returns an indication of the winner
Post: One game has been played, and a code returned indicating
the winner: 0=Draw 1=user Won 2=Computer Won */
{
	int i, p1Sum = 0, p2Sum = 0;
	cout << "How many cards do you want? : ";
	cin >> i;
	cout << "You: ";
	for (int j = 0; j < i; j++)
	{
		int num = rand() % 10;
		p1Sum += num;
		cout << num << " ";
	}
	cout << "= " << p1Sum << endl;
	cout << "Computer: ";
	for (int j = 0; j < i; j++)
	{
		int num = rand() % 10;
		p2Sum += num;
		cout << num << " ";
	}
	cout << "= " << p2Sum << endl;
	if (p1Sum > p2Sum && p1Sum <= 21)
	{
		cout << "You win!\n";
		return 1;
	}
	else if (p2Sum > p1Sum && p2Sum <= 21)
	{
		cout << "Computer Wins!\n";
		return 2;
	}
	else {
		cout << "Draw!\n";
		return 0;
	}

}
//--------------------------------------------------------------------------------
void updateCount(int Result, int &Wins, int &Losses, int &Draws)
/*Increments one of the counters as determined by Result
Pre: Result is either 0, 1, or 2
Post: Either Wins, Losses, or Draws has been incremented based
upon whether Result is 1, 2, or 0 respectively */
{
	switch (Result)
	{
	case 0: Draws++;
		break;
	case 1: Wins++;
		break;
	case 2: Losses++;
		break;
	}
}
//--------------------------------------------------------------------------------
char askRepeat()
/*Asks the user if another game is desired and returns response
Post: User has been asked and has responded with Y, y, N, or n.
The response is returned. */
{
	char ans;
	cout << "Would you like to play another game? (Y/N): ";
	cin >> ans;
	return ans;
}

//--------------------------------------------------------------------------------
void report(int Wins, int Losses, int Draws)
/*Reports the current results
Pre: Wins, Losses, Draws represent the current results
Post: The current results have been displayed */
{
	cout << "Your wins: " << Wins << endl;
	cout << "Computer wins: " << Losses << endl;
	cout << "Draws: " << Draws << endl;
}
//--------------------------------------------------------------------------------