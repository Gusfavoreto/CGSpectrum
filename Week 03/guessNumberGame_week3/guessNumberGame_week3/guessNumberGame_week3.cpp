#include <iostream>
#include <time.h> //How to know when you need include here?
using namespace std;

int main()
{
	srand((unsigned)time(0));
	constexpr int kPlayMenu = 1;
	constexpr int kQuitMenu = 2;

	constexpr int kMaleGender = 1;
	constexpr int kFemaleGender = 2;
	constexpr int kOtherGender = 3;



   //Display Welcome message
	cout << "-------- Welcome to the Amazing number guessing game.--------"<< endl;
	cout << "    You have 2 guesses to correctly guess the correcto number between 1 and 20:" << endl;
	cout << "    1) Paly now." << endl;
	cout << "    2) Quit." << endl;
	cout << "press 1 or 2: "; //Why don't have (<< endl;)?

	int input;
	cin >> input;


	switch (input)
	{
		case kPlayMenu:
		{
			cout << "What is your name? " << endl;
			string name;
			cin >> name;

			cout << " Welcome " << name << endl << endl; //Why we have two (<< endl)?

			cout << "    What is your gender? " << endl;
			cout << "    1) Male" << endl;
			cout << "    2) Female" << endl;
			cout << "    3) Other" << endl;
			cout << " Press 1,2 or 3: ";

			int gender;
			cin >> gender;

			if (gender >= kMaleGender && gender <= kOtherGender)
			{
				cout << "    How old are you? ";
				int age;
				cin >> age;

				string nickname;
				if (gender == kMaleGender)
				{
					if (age > 60)
					{
						nickname = "Old Man";
					}
					else if (age < 10)
					{
						nickname = "Little man";
					}
					else
					{
						nickname = "bud";
					}
				}
				else if (gender == kFemaleGender)
				{
					if (age > 60)
					{
						nickname = "Old Lady";
					}
					else if (age < 10)
					{
						nickname = "Little Lady";
					}
					else
					{
						nickname = "ma'am";
					}

				}
				else
				{
					nickname = "Friend";
				}

				int randomNumber = 1 + rand() % 20;
				cout << randomNumber << endl;
				cout << "Guess 1: " << "Alright " << nickname << " please guess a number: "; //Why don't have (endl;)
				int guess;
				cin >> guess;
				if (guess == randomNumber)
				{
					cout << " You are correct!" << endl;

				}
				else
				{
					if (guess > randomNumber)
					{
						cout << "Your guess is too high. Try again!" << endl;
					}
					else
					{
						cout << "Your guess is too low. Try again!" << endl;
					}

					cout << "Guess 2: " << "Alright " << nickname << " please guess a number: "; //Why don't have (endl;)
					cin >> guess;
					if (guess == randomNumber)
					{
						cout << " You are correct!" << endl;

					}
					else
					{
						if (guess > randomNumber)
						{
							cout << "Your guess is too high." << endl;
						}
						else
						{
							cout << "Your guess is too low." << endl;
						}
						cout << "Better luck next time. Goodbye!" << endl;
					}
				}
			}
			else
			{
				cout << " Invalid gender. Goddbye!" << endl;
			}

			break;
		}
		case kQuitMenu:
		{
			cout << "Goodbye" << endl;
			break;
		}
		default:
		{
			cout << "Invalid input. Goodbye!" << endl;
		}
	}
}

