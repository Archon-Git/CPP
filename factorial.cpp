#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 0, fact = 1;

    cout << "Please enter the number: ";
    cin >> n;

    while(n != 0){
        fact = fact * n;
        n --;
    }
    cout << fact;
}
// Limited to int's bit value.