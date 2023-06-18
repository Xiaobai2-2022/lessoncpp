#include <iostream>
using namespace std;

string prompt = "Please enter three different marks, seperated by a space: ";
string output = "The average mark is: ";
string pass = "The student passed.";
string fail = "The student failed.";

int main() {

    double sub1, sub2, sub3;
    double avg;

    cout << prompt;
    cin >> sub1 >> sub2 >> sub3;

    avg = (sub1 + sub2 + sub3) / 3;

    cout << output << avg << "." << endl;
    
    return 0;

}