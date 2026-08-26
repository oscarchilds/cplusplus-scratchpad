#include <iostream>

using namespace std;

void run()
{
    cout << "Enter a single character: ";

    char input;
    cin >> input;

    cout << "You entered '" << input << "', which has ASCII code " << static_cast<int>(input) << ".\n";
}
