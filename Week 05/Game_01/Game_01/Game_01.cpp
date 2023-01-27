

#include <iostream>
#include <time.h>
using namespace std; 

    // constant values for gender menu
constexpr int g_kMaleGender = 1;
constexpr int g_kFemaleGender = 2;
constexpr int g_kOtherGender = 3;

 // constant values for main menu
constexpr int g_kPlayMenu = 1;
constexpr int g_kQuitMenu = 2;

constexpr int g_kMaxGuesses = 5;


int DisplayWelcomeMessage();
void DisplayMessage(string message);
void PlayGame();
string GetUserName();
int AskForGender();
int GetAge();
string GenerateNickname(int gender, int age);
int GetGuess(int turn, string nickname);
bool ReviewGuess(int guess, int randomNumber);
void DisplayGameOver(int randomNumber, string nickname, int tries );

    
int main()
{
    // seed the random number generator
    srand((unsigned)time(0));

    bool keepPlaying = true;

    do
    {
    int input = DisplayWelcomeMessage();


        switch (input)
        {
            case g_kPlayMenu: // Play now
            {
                PlayGame();
                break;
            }
            case g_kQuitMenu: // Quit
            {
                DisplayMessage("Goodbye!");
                keepPlaying = false;
                break;
            }
            default:
            {
                system("cls");
                DisplayMessage("Invalid input. Try again!");
                break;
            }
        }
    } while (keepPlaying);
    
}

int DisplayWelcomeMessage()
{
    int input;

    do
    {
          //Display Welcome message
        cout << "--------- Welcome to the Amazing number guessing game. ---------- " << endl;
        cout << "     You have infinite guesses to corretly guess the correct nukber between 1 and 20:" << endl;
        cout << "     1) Play Now." << endl;
        cout << "     2) Quit." << endl;
        cout << "press 1 or 2: ";

        // get initial input
    
        cin >> input; 

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            system("cls");
            cout << "Invalid entry! Try again." << endl;
        }
        else
        {
            break;
        }

    } while (true);

    
    return input;

}

void DisplayMessage(string message)
{
    cout << message << endl;
}

void PlayGame()
{
    system("cls");
    string name = GetUserName();
    system("cls");

    cout << "Welcome " << name << endl << endl;

    bool isGameOver = false;

    do
    {
        int gender = AskForGender();

        // Check for valid gender
        if (gender >= g_kMaleGender && gender <= g_kOtherGender)
        {
            system("cls");
            int age = GetAge();
            system("cls");

            string nickname = GenerateNickname(gender, age);

            //generate random number
            int randomNumber = 1 + rand() % 20;
            cout << randomNumber << endl;

            bool didGuessCorrect = false;
            int tries = 1;

            do
            {
               int guess = GetGuess(tries, nickname);
               didGuessCorrect = ReviewGuess(guess, randomNumber);
               if (didGuessCorrect)
               {
                 break;
               }
               tries++;

            } while (!didGuessCorrect);

            
              DisplayGameOver(randomNumber, nickname, tries);
              isGameOver = true;
        }
        else
        {
            system("cls");
            DisplayMessage("Invalid gender. Try Again.");
        }
    } while (!isGameOver);


}

string GetUserName()
{
    // ask for name
    cout << "What is your name: " << endl;
    string name;
    cin >> name;
    return name;
}

int AskForGender()
{
    int gender;

    do
    {
        //gender
            cout << "What is your gender:" << endl;
            cout << " 1) Male" << endl;
            cout << "2) Female" << endl;
            cout << "3) Other" << endl;
            cout << " press 1, 2 or 3: ";
               
            cin >> gender;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(100, '\n');
                system("cls");
                cout << "Invalid entry! Try again." << endl;
            }
            else
            {
                break;
            }
    } while (true);

    
    return gender;
}

int GetAge()
{
    int age;
    
    do
    {
        //Age
        cout << "How old are you? ";

        cin >> age;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            system("cls");
            cout << "Invalid entry! Try again." << endl;
        }
        else
        {
            break;
        }


    } while (true);
    
   
    return age;
}

string GenerateNickname(int gender, int age)
{
    //Generate nickname
    string nickname;
    if (gender == g_kMaleGender)
    {
        if (age > 60)
        {
            nickname = "Old man";
        }
        else if (age < 10)
        {
            nickname = "Little man";
        }
        else
        {
            nickname = "Bud";
        }
    }
    else if (gender == g_kFemaleGender)
    {
        if (age > 60)
        {
            nickname = "Old lady";
        }
        else if (age < 10)
        {
            nickname = "Little lady";
        }
        else
        {
            nickname = "Ma'am";
        }
    }
    else
    {
        nickname = "Friend";
    }
    return nickname;
}

int GetGuess(int turn, string nickname)
{ 
    int guess;

    do
    {
        // Get guess #1
            cout << "Guess " << turn << " : " << "Alright " << nickname << " please guess the number: ";
   
            cin >> guess;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(100, '\n');
                system("cls");
                cout << "Invalid entry! Try again." << endl;
            }
            else
            {
                break;
            }
    } while (true);    
    return guess;
}

bool ReviewGuess(int guess, int randomNumber)
{
    if (guess == randomNumber)
    {
        DisplayMessage(" You are correct!!!");
        return true;
    }
    else
    {
        if (guess > randomNumber)
        {
            DisplayMessage("your guess is too high.");
        }
        else
        {
            DisplayMessage("your guess is too low.");
        }
        return false;
     }
}

void DisplayGameOver(int randomNumber, string nickname, int tries)
{
    cout << "Good Job " << nickname << " it took you " << tries << "tries" << endl;
    cout << " to guess the number " << randomNumber << endl;
}