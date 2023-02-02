// [21BSA10113]  Q2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //it will generate seed random number.
	num = rand() % 1000 + 1; //the random number wiil be between 1 and 1000.
	cout << "I have a number 1 to 1000 " << endl;
    cout << "Please guess the number " << endl;

	do
	{
		cout << "Enter your guessed between 1 and 1000 : " << endl;
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!! , Try again" << endl;
		else if (guess < num)
			cout << "Too low!! , Try again" << endl;
		else
			cout << "Excellent ! you guessed the number! " <<  endl;
	} while (guess != num);

	return 0;
}
