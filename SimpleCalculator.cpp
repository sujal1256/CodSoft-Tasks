#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "This is a Simple Calculator having 4 operations addition,subtraction,multiplication and division." << endl;
    cout << "Enter:" << endl
         << "1 for addition" << endl
         << "2 for subtraction" << endl
         << "3 for multiplication" << endl
         << "4 for division" << endl
         << "5 for breaking the loop" << endl;

    int ans = -1;
    while (true)
    {
        int n;
        cout << "Enter n" << endl;
        cin >> n;
        int a, b;
        if (ans == -1)
        {
            cout << "Enter a and b" << endl;
            cin >> a >> b;
        }
        else
        {
            cout << "Enter b" << endl;
            a = ans;
            cin >> b;
        }
        if (n == 1)
        {
            ans = a + b;
        }
        else if (n == 2)
        {
            ans = a - b;
        }
        else if (n == 3)
        {
            ans = a * b;
        }
        else if (n == 4)
        {
            if (b == 0)
            {
                cout << "Error: Division by Zero." << endl;
                return 0;
            }
            ans = a / b;
        }
        else if (n == 5)
        {
            break;
        }
        cout << "Value is " << ans << endl;
    }
    cout << "The Final Value is " << ans << endl;
    return 0;
}