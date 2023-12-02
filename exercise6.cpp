//Write an algorithm for electricity company, which charges customers according to their usage rank (1,2 or 3) and reading (watt). In rank 1, customers pay 1 L.E./100 watt with minimum 10 L.E. In rank 2, customers pay 2 L.E./100 watt, but pay at maximum 400 L.E. In rank 3, customers pay 2.5 L.E./100 watt. Program reads the usage rank and reading and displays the charged amount.

#include <iostream>
#include <string>
using namespace std;


int main () {

int rank, reading, charge;

if (rank == 1) {
    charge = 1 * reading;
    if (charge < 10) {
        charge = 10;
    }
    cout << "The charge is " << charge << endl;
} else if (rank == 2) {
    charge = 2 * reading;
    if (charge > 400) {
        charge = 400;
    }
    cout << "The charge is " << charge << endl;
} else if (rank == 3) {
    charge = 2.5 * reading;
    cout << "The charge is " << charge << endl;
} else {
    cout << "Invalid rank" << endl;

}
return 0;
}