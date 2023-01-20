#include <iostream>
#include <time.h> //How to know when you need include here?
using namespace std;

int DisplayWelcomeMessage();

int main()
{
	srand((unsigned)time(0));
	constexpr int kPlayMenu = 1;
	constexpr int kQuitMenu = 2;

	constexpr int kMaleGender = 1;
	constexpr int kFemaleGender = 2;
	constexpr int kOtherGender = 3;



	int input = DisplayWelcomeMessage();
	void DisplayMessage(string message);



	switch (input)
	{
		case kPlayMenu:
		{
			//Ask for a name
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
					DisplayMNessage(" You are correct!");

				}
				else
				{
					if (guess > randomNumber)
					{
						DisplayMNessage("Your guess is too high. Try again!");
					}
					else
					{
						DisplayMNessage("Your guess is too low. Try again!");
					}

					cout << "Guess 2: " << "Alright " << nickname << " please guess a number: "; //Why don't have (endl;)
					cin >> guess;
					if (guess == randomNumber)
					{
						DisplayMNessage(" You are correct!");

					}
					else
					{
						if (guess > randomNumber)
						{
							DisplayMNessage("Your guess is too high.");
						}
						else
						{
							DisplayMNessage("Your guess is too low.");
						}
						DisplayMNessage("Better luck next time. Goodbye!");
					}
				}
			}
			else
			{
				DisplayMNessage (" Invalid gender. Goddbye!");
			}

			break;
		}
		case kQuitMenu:
		{
			DisplayMessage ("Goodbye");
			break;
		}
		default:
		{
			DisplayMessage ("Invalid input. Goodbye!");
			break;
		}
	}
}

int DisplayWelcomeMessage()
{
	//Display Welcome message
	cout << "-------- Welcome to the Amazing number guessing game.--------" << endl;
	cout << "    You have 2 guesses to correctly guess the correcto number between 1 and 20:" << endl;
	cout << "    1) Paly now." << endl;
	cout << "    2) Quit." << endl;
	cout << "press 1 or 2: "; //Why don't have (<< endl;)?

	int input;
	cin >> input;
	return input;
}

void DisplayMessage(string message);
{
	cout << message << endl;

}

