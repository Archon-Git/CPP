// Find the sum of all numbers from 0 to n. Implement For loop for this operation.
#include <iostream>
using namespace std;

int main(){

    int n, sum = 0;
    cin >> n;

    for ( int i = 1; i <= n; i++){
        sum = sum + i;
    }

    cout << sum;
}