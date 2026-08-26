// #include "add-and-subtract.h"
// #include "double-and-triple-number.h"
// #include "what-compiler.h"
#include "int-to-ascii-code.h"

int main()
{
    run();
}

// #include <iostream>

// void print(int x)
// {
//     std::cout << x << '\n';
// }

// int main()
// {
//     print(static_cast<int>(5.5));

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     std::cout << true << '\n';
//     std::cout << false << '\n';

//     std::cout << std::boolalpha; // print bools as true or false

//     std::cout << true << '\n';
//     std::cout << false << '\n';
//     return 0;
// }

// #include <iostream>
// #include <limits>

// int main()
// {
//     std::cout << std::boolalpha; // print bool as true or false rather than 1 or 0
//     std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
//     std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
//     std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';
// }

// #include <iomanip> // for std::setw (which sets the width of the subsequent output)
// #include <iostream>
// #include <climits> // for CHAR_BIT

// int main()
// {
//     std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

//     std::cout << std::left; // left justify output

//     std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
//     std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
//     std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
//     std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
//     std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
//     std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
//     std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
//     std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
//     std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     // assume 4 byte integers
//     int x { 2'147'483'647 }; // the maximum value of a 4-byte signed integer
//     std::cout << x << '\n';

//     x = x + 1; // integer overflow, undefined behavior
//     std::cout << x << '\n';

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
//     std::cout << "x was: " << x << '\n';

//     x = 65536; // 65536 is out of our range, so we get modulo wrap-around
//     std::cout << "x is now: " << x << '\n';

//     x = 65537; // 65537 is out of our range, so we get modulo wrap-around
//     std::cout << "x is now: " << x << '\n';

//     return 0;
// }

// #include <cstdint> // for fixed-width integers
// #include <iostream>

// int main()
// {
//     std::int8_t x { 65 };   // initialize 8-bit integral type with value 65
//     std::cout << x << '\n'; // You're probably expecting this to print 65

//     return 0;
// }
