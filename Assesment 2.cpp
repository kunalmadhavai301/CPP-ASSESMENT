#include <iostream>
using namespace std;

class cpp {
public:
   cpp( ) { 
        cout << "I am a Coding Language" << endl;
    }
};

class sensitive : public cpp {
public:
    sensitive( ) { 
        cout << "I am case sensitive language" << endl;
    }
};

class oop : public sensitive{
public:
   oop() {
        cout << "I am a Object Oriented Programing language" << endl;
    }
};

int main() {
    oop myoop;
    return 0;
}