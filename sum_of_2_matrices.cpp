//Write a program in C for addition of two Matrices of same size.
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main(){

    int row;
    int column;

    cout << "Enter the number of rows for the matrix: " << endl;
    cin >> row;
    cout << "Enter the number of column for the matrix: " << endl;
    cin >> column;

    int arr1[row][column];
    int arr2[row][column];
    int sum[row][column];

    cout << "Enter the first matrix: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << "Enter the element " << i + 1 << j + 1 << " : ";
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the second matrix: "<< endl;
    for(int k = 0; k < row; k++){
        for(int l = 0; l < column; l++){
            cout << "Enter the element " << k + 1 << l + 1 << " : ";
            cin >> arr2[k][l];
        }
    }

    cout << "The sum of the 2 matrices is: " << endl;
    for(int m = 0; m < row; m++){
        for(int n= 0; n < column; n++){
            sum[m][n] = arr1[m][n] + arr2[m][n];
            cout << sum[m][n] << "  " ;
        }
        cout << endl;
    }
}