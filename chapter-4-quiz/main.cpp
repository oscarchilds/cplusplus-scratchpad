#include <iostream>

using namespace std;

double readNumber()
{
    cout << "Enter a double value: ";

    double input{};
    cin >> input;

    return input;
}

char readOperand()
{
    cout << "Enter +, -, *, or /: ";

    char input{};
    cin >> input;

    return input;
}

void calculateAndPrintAnswer(double x, double y, char operand)
{
    double result;

    if (operand == '+')
        result = x + y;
    else if (operand == '-')
        result = x - y;
    else if (operand == '*')
        result = x * y;
    else if (operand == '/')
        result = x / y;
    else
        return;

    cout << x << ' ' << operand << ' ' << y << " is " << result << '\n';
}

int main()
{
    double x = readNumber();
    double y = readNumber();
    char operand = readOperand();

    calculateAndPrintAnswer(x, y, operand);

    return 0;
}
