#include <iostream>

using namespace std;

int doubleNumber(int input)
{
    return input * 2;
}

int tripleNumber(int input)
{
    return input * 3;
}

int main()
{
    cout << "Enter an integer: ";

    int num;
    cin >> num;

    cout << "Double that number is: " << doubleNumber(num) << '\n';
    cout << "Triple that number is: " << tripleNumber(num) << '\n';

    return 0;
}
