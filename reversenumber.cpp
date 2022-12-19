#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, rev;
    n = rev = 0;

    cout << "Please enter the number: ";
    cin >> n;

    while(n != 0){
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    cout << rev;    
}