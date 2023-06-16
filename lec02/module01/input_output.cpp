#include <iostream>
using namespace std;

/**
 * Note that a whitespace(" ", "\n") is not the determinant factor for the compiler(g++), a semicolon(";") is however.
 */
int main() {

    // declare variables
    string name;
    int age;

    // cin is the standard input stream for c++, use ">>" to seperate cin and variable, variable and variable...
    cin >> name
        >> age;

    // cout is the standard output stream for c++, use "<<" to seperate cout and variable, variable and variable...
    cout << "My name is " << name << ", I am " << age << " years old." << endl;

    return 0;

}
