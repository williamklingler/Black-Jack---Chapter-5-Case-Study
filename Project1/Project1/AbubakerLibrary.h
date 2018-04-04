#pragma once
#include <iostream>
using namespace std;

char askRepeat()
/*Asks the user if another game is desired and returns response
Post: User has been asked and has responded with Y, y, N, or n.
The response is returned. */
{
	char A;

	cout << "Would you like to continue Y/N:";
	do {
		cin >> A;
		if (A != 'y' || A != 'Y' || A != 'N' || A != 'n')
		{
			break;
		}

	} while (A != 'y' || A != 'Y' || A != 'N' || A != 'n');

	if (A == 'N' || A == 'n') {
		return 'n';
	}
	else {
		return 'y';
	}
	cout << endl;
	cout << endl;

}


//--------------------------------------------------------------------------------
void report(int Wins, int Losses, int Draws)
/*Reports the current results
Pre: Wins, Losses, Draws represent the current results
Post: The current results have been displayed */
{
	cout << endl;
	cout << "Your wins= " << Wins << endl;
	cout << "Computer Wins= " << Losses << endl;
	cout << "Draws= " << Draws << endl;
}