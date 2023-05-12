// NumberGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // welcome user 
    cout << "\n\t\t\tWelcome to \n\t\tGuess The Number game!!" << endl;
    cout << "\n\t\t\tINSTRUCTIONS" << endl;
    cout << "\t\tYou have to guess a number between 1 and 100. "
        "\tYou'll get limited chances based on the difficulty level you choose." << endl;
    // Get the difficulty level
    while (true) {
        cout << "\nDifficulty Levels\n";
        cout << "\n1 for easy level!\t";
        cout << "\n2 for medium-level!\t";
        cout << "\n3 for difficult level!\t";
        cout << "\n0 for ending the game!\n" << endl;

        // select the level of difficulty
        int level;
        cout << "Enter the difficulty level number: ";
        cin >> level;

        //generate the random Number to be guessed

        srand(time(0));
        int randomNumber = (rand() % (100 - 1)) + 1;
        int guess;

        //Easy Difficulty
        if (level == 1) {
            cout << "\nYou will get 7 attempts for finding the random number between 1 and 100.";
            int leftChance = 7;
            for (int i = 1; i <= 7; i++) {

                // asking the player to guess the number
                cout << "\n\nEnter the number: ";
                cin >> guess;
                if (guess == randomNumber) {
                    cout << "Voila! You guessed the right number";
                    break;
                }
                else if (guess > randomNumber) {
                    cout << guess << " is greater than the random number";
                }
                else {
                    cout << guess << " is less than the random number";
                }
                leftChance--;
                if (leftChance == 0) {
                    cout << "\nBetter luck next time" << endl;
                    cout << randomNumber << " is the number";
                }
            }
        }

        //Medium Difficulty
        else if (level == 2) {
            cout << "\nYou have 5 Attempts for finding the random number between 1 and 100.";
            int leftChance = 5;
            for (int i = 1; i <= 5; i++) {

                // asking the player to guess the number
                cout << "\n\nEnter the number: ";
                cin >> guess;
                if (guess == randomNumber) {
                    cout << "Voila! You guessed the right number";
                    break;
                }
                else if (guess > randomNumber) {
                    cout << guess << " is greater than the random number";
                }
                else {
                    cout << guess << " is less than the random number";
                }
                leftChance--;
                if (leftChance == 0) {
                    cout << "\nBetter luck next time" << endl;
                    cout << randomNumber << " is the number";
                }
            }
        }

        //Hard Difficulty
        else if (level == 3) {
            cout << "\nYou have 3 attempts for finding the secret number between 1 and 100.";
            int leftChance = 3;
            for (int i = 1; i <= 3; i++) {
                cout << "\n\nEnter the number: ";
                cin >> guess;
                if (guess == randomNumber) {
                    cout << "Voila! You guessed the right number";
                    break;
                }
                else if (guess > randomNumber) {
                    cout << guess << " is greater than the random number";
                }
                else {
                    cout << guess << " is less than the random number";
                }
                leftChance--;
                if (leftChance == 0) {
                    cout << "\nBetter luck next time" << endl;
                    cout << randomNumber << " is the number";
                }
            }
        }

        //to exit game

        else if (level == 0) {
            exit(0);
        }
        else {
            cout << "Kindly select between (0,1,2,3)" << endl;
        }







    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
