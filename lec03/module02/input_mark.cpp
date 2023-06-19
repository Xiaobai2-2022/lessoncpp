#include <iostream>
using namespace std;

string prompt = "Please enter three different marks, seperated by a space: ";
string output = "The average mark is: ";
string pass = "The student passed.";
string fail = "The student failed.";

int main() {

    double sub1, sub2, sub3;
    double avg;
    char grade = 'F';

    cout << prompt;
    cin >> sub1 >> sub2 >> sub3;

    avg = (sub1 + sub2 + sub3) / 3;

    cout << output << avg << "." << endl;

    // if structure: if(condition) {statements} [else if {statements}] [else {statements}]
    if(avg >= 60) {
        cout << pass << endl;
        if(avg >= 90)
            grade = 'A';
        else if(avg >= 80)
            grade = 'B';
        else if(avg >= 70)
            grade = 'C';
        else 
            grade = 'D';
    }
    // else {
    //     cout << fail << endl;
    // }

    switch(grade) {
        case 'A':
        case 'B':
            cout << "Current standing: excellent." << endl;
            break;
        case 'C':
            cout << "Current standing: good." << endl;
            break;
        case 'D':
            cout << "Current standing: satisfactory." << endl;
            break;
        default:
            cout << fail << endl;
    }
    
    return 0;

}