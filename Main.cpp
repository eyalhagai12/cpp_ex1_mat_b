#include <iostream>
#include <vector>
#include "mat.hpp"

using namespace std;
using namespace ariel;

int main(int argc, char const *argv[])
{
    // good input
    cout << mat(51, 51, '&', '=') << endl;
    cout << mat(25, 7, 'U', 'a') << endl;
    cout << mat(3, 13, 'R', '^') << endl;
    cout << mat(3, 3, '0', '.') << endl;
    cout << mat(1, 1, '#', '*') << endl;

    // bad input
    try
    {
        cout << mat(-1, 3, '@', '-');
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        cout << mat(5, -3, '@', '-');
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        cout << mat(-15, -11, '@', '-');
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        cout << mat(17, 13, '\n', '-');
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        cout << mat(17, 13, 't', '\t');
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        cout << mat(17, 13, '\n', '\r');
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
