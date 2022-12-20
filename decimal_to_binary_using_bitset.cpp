#include <bits/stdc++.h>
using namespace std;

int main(){

    int decimal = 0;
    bitset<32> bits = 0b0000'0000'0000'0000'0000'0000'0000'0000;
    int i = 0;

    cout << "Please enter the decimal number: ";
    cin >> decimal;

    while(decimal > 0){
        if (decimal % 2 != 0 )
            bits.set(i);
        decimal /= 2;
        i++;
    }
    cout << bits << endl;
}