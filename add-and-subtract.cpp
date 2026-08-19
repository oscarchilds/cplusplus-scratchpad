#include <iostream>

using namespace std;

int getInput(string message)
{
    cout << message;

    int input;
    cin >> input;

    return input;
}

void printOutput(int x, int y, int result, char operand)
{
    cout << x << ' ' << operand << ' ' << y << " is " << result << "\n";
}

int main()
{
    int firstInput{getInput("Enter an integer: ")};
    int secondInput{getInput("Enter another integer: ")};

    printOutput(firstInput, secondInput, firstInput + secondInput, '+');
    printOutput(firstInput, secondInput, firstInput - secondInput, '-');
}
