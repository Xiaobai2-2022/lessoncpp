#include <iostream>
using namespace std;

// You MAY NOT modify this part of the code
string prompt = "Please enter three different marks, seperated by a space: ";
string output = "The average mark is: ";

int main() {

    /**
     * For this assesment you are to ask the user to input a total of 3 real numbers,
     *     seperated by a space, then you are to calculate the average of these 3 su-
     *     bjects, and output the final value, end with a endline character.
     *     Note that you must use the prompt and output given above.
     * 
     * Note that the formula for average of three number, a, b, c is:
     *     (a + b + c) / 3
     */
    // Your implementation starts here:
    double sub1, sub2, sub3;
    double avg;

    cout << prompt;
    cin >> sub1 >> sub2 >> sub3;

    avg = (sub1 + sub2 + sub3) / 3;

    cout << output << avg << "." << endl;
    
    return 0;

}