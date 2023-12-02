#include <iostream>
using namespace std;

int main () {

    char grade;
    cout << "Enter the grade of the student: " ;
    cin >> grade;
    if (grade == 'a' || grade == 'A') {
        cout << "Excellent" << endl;
    } else if (grade == 'b' || grade == 'B') {
        cout << "Very good" << endl;
    } else if (grade == 'c' || grade == 'C') {
        cout << "Good" << endl;
    } else if (grade == 'd' || grade == 'D') {
        cout << "You can do better" << endl;
    } else if (grade == 'e' || grade == 'E') {
        cout << "Disappointed" << endl;
    } else {
        cout << "Invalid grade" << endl;
    }
return 0;
}