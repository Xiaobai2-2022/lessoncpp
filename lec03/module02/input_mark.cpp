#include <iostream>
using namespace std;

string prompt = "Please enter three different marks, seperated by a space: ";
string output = "The average mark is: ";
string pass = "The student passed with ";
string fail = "The student failed.";

int main() {

    double sub1, sub2, sub3;
    double avg;

    cout << prompt;
    cin >> sub1 >> sub2 >> sub3;

    avg = (sub1 + sub2 + sub3) / 3;

    cout << output << avg << "." << endl;

    // if structure: if(condition) {statements} [else if {statements}] [else {statements}]
    if(avg >= 60) {
        cout << pass;
        if(avg >= 90)
            cout << "A." << endl;
        else if(avg >= 80)
            cout << "B." << endl;
        else if(avg >= 70)
            cout << "C." << endl;
        else 
            cout << "D." << endl;
    }
    else {
        cout << fail << endl;
    }
    
    return 0;

}