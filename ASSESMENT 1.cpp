#include <iostream>
using namespace std;
class Car {

public: string brand; string model; int year; };

int main() {

// Create an object of Car

Car carObj1;

carObj1.brand = "NAME=FARRARI";

carObj1.model = "MODEL=F134";

carObj1.year = 1999;

Car carObj2;

carObj2.brand = "NAME=MERCEDES";

carObj2.model = "MODEL=MAYBEACH";

carObj2.year = 1969;


cout << carObj1.brand << endl << carObj1.model << endl << carObj1.year << "\n";

cout << carObj2.brand << endl << carObj2.model << endl << carObj2.year << "\n";

return 0;

}