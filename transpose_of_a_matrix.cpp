//	Write a program in C to find transpose of a given matrix. 
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

    int arr[row][column];
    int transpose[column][row];

    cout << "Enter the matrix: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << "Enter the element " << i + 1 << j + 1 << " : ";
            cin >> arr[i][j];
        }
    }

    for(int m = 0; m < row; m++){
        for(int n = 0; n < column; n++){
            transpose[n][m] = arr[m][n];
        }
    }

    cout << "The transpose of matrix : " << endl;
    for(int x = 0; x < column; x++){
        for(int y= 0; y < row; y++){
            cout << transpose[x][y] << "  " ;
        }
        cout << endl;
    }
}