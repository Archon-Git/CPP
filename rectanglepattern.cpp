#include <bits/stdc++.h>
using namespace std;

int main(){

    int columns = 1;
    int rows = 1;

    cout << "Please Enter the number of columns: ";
    cin >> columns;

    cout << "Please enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= columns; i++){
            for (int j = 1; j <= rows; j++){
                cout << "*";
            }
            cout << endl;
        }
}