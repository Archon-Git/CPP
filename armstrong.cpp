#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, copy ,sum, size;
    n = copy = sum = size = 0;
    
    cout << "Please enter the number: ";
    cin >> n;
    copy = n;
    
    while(copy != 0){
        copy = copy / 10;
        size ++;
    }

    copy = n;

    while(n != 0){
        int mod = n % 10;
        n = n / 10;
        sum = sum + pow(mod, size);
    }
    
    if(sum == copy)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
}