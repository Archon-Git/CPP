#include <bits/stdc++.h>
using namespace std;

int main(){

    int decimal = 0;
    string binary = "";

    cout << "Please enter the decimal number: ";
    cin >> decimal;

    while(decimal > 0){
        if (decimal % 2 == 0 )
            binary = binary + "0";
        else
            binary = binary + "1";
        decimal = decimal / 2;
    }
    reverse(binary.begin(), binary.end()); 
    cout << "0b" << binary;
}