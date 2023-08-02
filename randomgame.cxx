#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	srand((unsigned)time(0));
	int i, j, k, num, life = 3;
	i = (rand() % 6) + 1;
	j = (rand() % 6) + 1;
	k = (rand() % 6) + 1;
	char name[50];

	//intro ni BRENT HAHAHA

	cout << "WELCOME TO THE DICE GUESS GAME CREATED BY BRENT. JUST IMAGINE THAT THIS IS A DICE AND YOU'LL JUST CHOOSE WHAT NUMBER YOU WANT AND IF YOU GUESS THE NUMBER, YOU WIN!" << endl
		 << endl;
	cout << "You are given 3 lives to guess the right answer. :)" << endl
		 << endl;

	//diri na magsugod ang dula

	cout << "What is your name?" << endl;
	cin >> name;
	cout << endl;

	cout << "Input a random number from 1-6, " << name << "." << endl;

	cout << name << "'s chosen number: ";
	cin >> num;

	if (num == i)
	{
		cout << "You got the correct number! :D" << endl;
		cout << "------------------------------" << endl;
	}

	else if (num > 6)
	{
		cout << "You've exceeded the limit of number which is 1-6. Please try again." << endl;
		cout << "------------------------------" << endl;
	}

	else
	{
		cout << "Wrong number. :("
			 << " The correct number is " << i << ". Please try again." << endl;
		cout << "------------------------------" << endl;
	}

	cout << endl
		 << endl;

	if (num == i)
	{
		cout << "You still have " << life << " lives remaining." << endl
			 << "Contact Brent for your prize. :)" << endl;
		return EXIT_SUCCESS;
	}

	else if (num != i)
	{
		cout << "You still have " << --life << " lives remaining." << endl
			 << endl;

		/*gisulod nako ang if statement sa if statement HASTANG BUANGA HAHAHAA */

		cout << "Input a random number from 1-6, " << name << "." << endl;

		cout << name << "'s chosen number: ";
		cin >> num;

		if (num == j)
		{
			cout << "You got the correct number! :D" << endl;
			cout << "------------------------------" << endl;
		}

		else if (num > 6)
		{
			cout << "You've exceeded the limit of number which is 1-6. Please try again." << endl;
			cout << "------------------------------" << endl;
		}

		else
		{
			cout << "Wrong number. :("
				 << " The correct number is " << j << ". Please try again." << endl;
			cout << "------------------------------" << endl;
		}

		cout << endl
			 << endl;

		if (num == j)
		{
			cout << "You still have " << life << " lives remaining." << endl
				 << "Contact Brent for your prize. :)" << endl;
			return EXIT_SUCCESS;
		}

		else if (num != j)
		{
			cout << "You still have " << --life << " life remaining." << endl
				 << endl;

			/*gisulod napud nako ang if statement sa if statement sa if statement HASTANG BUANGA! */

			cout << "Input a random number from 1-6, " << name << "." << endl;

			cout << name << "'s chosen number: ";
			cin >> num;

			if (num == k)
			{
				cout << "You got the correct number! :D" << endl;
				cout << "------------------------------" << endl;
			}

			else if (num > 6)
			{
				cout << "You've exceeded the limit of number which is 1-6. Please try again." << endl;
				cout << "------------------------------" << endl;
			}

			else
			{
				cout << "Wrong number. :("
					 << " The correct number is " << k << ". Please try again." << endl;
				cout << "------------------------------" << endl;
			}

			cout << endl
				 << endl;

			if (num == k)
			{
				cout << "You still have " << life << " life remaining." << endl
					 << "Contact Brent for your prize. :)" << endl;
				return EXIT_SUCCESS;
			}

			else if (num != k)
			{
				cout << "You have " << --life << " lives remaining." << endl
					 << "GAME OVER!" << endl
					 << "BETTER LUCK NEXT TIME, " << name << ". :P" << endl;
			}
		}
	}
}
