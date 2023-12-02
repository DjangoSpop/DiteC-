//Algorithm for program that determines whether a baby’s weight is normal or not. For girls, normal babies weight are 2.5 to 4.5 KG. On the other hand, for boys the normal weights are 4 to 5.5 KG

#include <iostream>
#include <string>
using namespace std;

int main () {
 int babyweight;
 char gender;


    cout << "What is the baby's weight? ";
    cin >> babyweight;
    cout << "enter the baby gender";
    cin >> gender;    
    if (babyweight >= 2.5 && babyweight <= 4.5 && gender == 'f' ) {
        cout << "The baby's weight is normal" << endl;
    } else if (babyweight >= 4 && babyweight <= 5.5 && gender == 'm') {
        cout << "The baby's weight is normal" << endl;
    } else {
        cout << "The baby's weight is not normal" << endl;

    }
    return 0;
    }
