#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter the size of array: " << endl;
    cin >> n;
    
    int arr1[n];
    int arr2[n];
    int k = 0;
    
    cout << "Enter the values: " << endl;   
    
    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Copying the values from array 1 to array 2 : " << endl;
    
    for(int j = 0; j < n; j++){
        k = arr1[j];
        arr2[j] = k;
    }
    
    cout << "The values in the new array: " << endl;
    
    for(int l = 0; l < n; l++)
        cout << arr2[l] << endl;
        
    return 0;
}

