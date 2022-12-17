#include <iostream>
using namespace std;

int main(){

    int a; //declaration of a
    a = 20; //Initialization of a

    cout << "Size of Int: " << sizeof(a) << endl;

    short int as;
    as = 15;

    cout << "Size of Short Int: " << sizeof(as) << endl;

    long long int al;
    al = 20037642052068962;

    cout << "Size of Long Int: " << sizeof(al) << endl;

    float b;
    b = 15.5;

    cout << "Size of Float: " << sizeof(b) << endl;

    char c;
    c = 'C';

    cout << "Size of Char: " << sizeof(c) << endl;

    double d;
    d = 0.12345;

    cout << "Size of Double: " << sizeof(d) << endl;

    bool e;
    e = true;

    cout << "Size of Bool: " << sizeof(e) << endl;



}