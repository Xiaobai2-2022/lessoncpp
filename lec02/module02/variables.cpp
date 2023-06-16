#include <iostream>
using namespace std;

/**
 * Note that you can
 *     1. Declear a variable (int val);
 *     2. Initialize a variable (val = 0);
 *     3. Modify a variable (val = 1).
 */
int main() {

    // boolean (false(0)/true(1))
    bool flag = false;
    cout << "flag is: " << flag << endl;

    // char is a character, which is a single symbol (number/letter/sign/whitespaces)
    char c = '0';
    cout << "char equals: " << c << endl;

    // int (integer)
    int val = 0;
    cout << "value equals: " << val << endl;

    // long (long integer)
    long bigVal = 0L;
    cout << "value equals: " << bigVal << endl;

    // float (real number)
    float smallReal = 0.0;
    cout << "real equals: " << smallReal << endl;

    // double (double float)
    double real = 0.0;
    cout << "real equals: " << real << endl;

    // string (a sequence of characters)
    string str = "message";
    cout << "str is: " << str << endl;

    // unsigned keyword always non-negative
    unsigned int unsignedVal = 0;
    cout << "value equals: " << unsignedVal << endl;

    val = 1;
    cout << "value equals: " << val << endl;

    return 0;

}
