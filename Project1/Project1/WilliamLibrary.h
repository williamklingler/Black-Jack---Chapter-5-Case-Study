#pragma once
#include <iostream>
#include "AbubakerLibrary.h"

using namespace std;
int playGame(int &p1Sum, int &p2Sum);
int askAnotherCard();
void dealComputer(int &p2Sum);
void dealUser(int &p1Sum);
int findWinner(int p1Sum, int p2Sum);
void dealCard(int &sum);


int playGame(int &p1Sum, int &p2Sum)
/*Plays one game of 21 and returns an indication of the winner
Post: One game has been played, and a code returned indicating
the winner: 0=Draw 1=user Won 2=Computer Won */
{

		dealUser(p1Sum);
		dealComputer(p2Sum);
		return findWinner(p1Sum, p2Sum);
}

int askAnotherCard()
{
	char A;

	cout << "Would you like another card? (Y/N): ";
	do {
		cin >> A;
		if (A != 'y' || A != 'Y' || A != 'N' || A != 'n')
		{
			break;
		}

	} while (A != 'y' || A != 'Y' || A != 'N' || A != 'n');

	if (A == 'N' || A == 'n') {
		return 0;
	}
	else {
		return 1;
	}
}

void dealComputer(int &p2Sum)
{
	cout << "Computer: " << endl;
	for (int j = 0; j < 2; j++)
	{
		dealCard(p2Sum);
	}
	while (p2Sum < 16)
	{
		dealCard(p2Sum);
	}
	cout << " = " << p2Sum << endl;
}


void dealUser(int &p1Sum)
{
	cout << endl << "You: " << endl;
	for (int j = 0; j < 2; j++)
	{
		dealCard(p1Sum);
	}
	cout << " = " << p1Sum << endl;
	int k = askAnotherCard();
	while (k == 1)
	{ 
		cout << p1Sum << " ";
		dealCard(p1Sum);
		cout << " = " << p1Sum << endl;
		if (p1Sum > 21)
		{
			cout << "Bust!" << endl;
			break;
		}
		else
		k = askAnotherCard();
	}
}

int findWinner(int p1Sum, int p2Sum)
{
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

void dealCard(int &sum)
{
	int num = rand() % 13 + 1;
	if (num > 10)
		num = 10;
	sum += num;
	cout << num << " ";
}
