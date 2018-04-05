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
		int num = rand() % 13 + 1;
		if (num > 10)
			num = 10;
		p1Sum += num;
		cout << num << " ";
	}
	cout << "= " << p1Sum << endl;
	cout << "Computer: ";
	for (int j = 0; j < i; j++)
	{
		int num = rand() % 13 + 1;
		if (num > 10)
			num = 10;
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
	else if (p1Sum > 21 && p2Sum <= 21)
	{
		cout << "Computer Wins!\n";
		return 2;
	}
	else if (p2Sum > 21 && p1Sum <= 21)
	{
		cout << "You win!\n";
		return 1;
	}
	else {
		cout << "Draw!\n";
		return 0;
	}

}