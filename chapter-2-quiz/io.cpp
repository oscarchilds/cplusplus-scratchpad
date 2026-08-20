#include "io.h"
#include <iostream>

using namespace std;

int readNumber()
{
    cout << "Enter an integer to add: ";

    int input;
    cin >> input;

    return input;
}

void writeAnswer(int answer)
{
    cout << "Added together, you get: " << answer << '\n';
}
