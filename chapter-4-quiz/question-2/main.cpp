#include <iostream>

using namespace std;

int readInt()
{
    cout << "Enter a double value: ";

    int input{};
    cin >> input;

    return input;
}

int main()
{
    int towerHeight = readInt();

    cout << "Hello, world." << towerHeight;
}
