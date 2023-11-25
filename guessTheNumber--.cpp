#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
/*
Task is to create a program to create a random number and allow user to guess the number and provide the feedback as per the guess
*/
int main()
{
    int k = 40;
    cout << "Welcome to the Task 1 which is a random number generator" << endl;
    cout << "Guess the Number between 1 to " << k << " to pass the game" << endl;

    srand((unsigned int)time(nullptr));

    // this will help us make generate a number between 1 to 20.
    int n = rand() % k + 1;
    
    int c = 0;
    while (true)
    {
        int a;
        cout << "Enter your guessed number: ";
        cin >> a;

        if (a == n)
        {
            cout << endl
                 << "Congratulations You have passed the game in " << c << " tries only." << endl;
            break;
        }
        else if (abs(a - n) <= 5)
        {
            if (a > n)
            {
                cout << endl
                     << " The guessed number is little higher." << endl;
            }
            else
            {
                cout << endl
                     << " The guessed number is little lower." << endl;
            }
        }
        else
        {
            if (a > n)
            {
                cout << endl
                     << " The guessed number is too high." << endl;
            }
            else
            {
                cout << endl
                     << " The guessed number is too low." << endl;
            }
        }
        c++;
    }

    return 0;
}