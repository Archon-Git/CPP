#include <bits/stdc++.h>
using namespace std;

int main(){

    int columns = 1;

    cout << "Please enter the number of columns: ";
    cin >> columns;

    for(int i = 1; i <= columns; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}