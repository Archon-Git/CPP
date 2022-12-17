// Find the sum of all numbers from 0 to n. Implement loops in the code.
#include <iostream>
using namespace std;

int main(){

    int n, sum = 0;
    cin >> n;

    while (n > 0){
        for ( int i = 1; i <= n; i++){
            sum = sum + i;
        }
        break;
    }
    cout << sum;
}