#include <iostream>
#include <string>
using namespace std;


int main () {

string day;

cout << "What day is it? ";
cin >> day;
if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
    cout << "It's a weekday!" << endl;
}
else if (day == "Saturday" || day == "Sunday") {
    cout << "It's a weekend!" << endl;
}
else {
    cout << "That's not a day!" << endl;
   


}
 return 0;
}