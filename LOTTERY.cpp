// Creator: Nathan Reichert
// Date: 17 March, 2017
// Last Modified: 17 March, 2017
// Created for gpNethen Twitch.tv channel giveaways.
// This program takes string inputs (the Twitch.tv handles of each participant separately)
// And assigns them to an array of size n = total number of participants. The program then
// Generates a random integer from 0 (first participant) to n-1 (last participant). The
// Twitch.tv handle associated with that integer position in the array is declared the winner.

#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()                                      // Beginning of main program
{
	int count = 0;                              // Initializing participant count variable
	string TwitchHandle;                   // Initializing variable for participant names
	int total;
	srand((unsigned)time(NULL));
	
	cout << "Please enter the total number of participants" << endl << "     ";
	cin >> total;
	cout << endl << endl;
	
	string pool[total];
	
	while(count < total)
	{
    	cout << "Please enter participant number " << count+1 << endl << "     ";  // The user
    	cin >> TwitchHandle;             // Gets input username
    	pool[count]=TwitchHandle;
    	count++;
	}
	
	cout << endl << endl;
	cout << "The winner of the lottery prize is....." << endl << "     ";
	cout << pool[ rand() % (total) ] << "!" << endl << endl;
	cout << "CONGRATULATIONS!!!!!" << endl << endl;

	return 0; // Ceases all computation
}
