#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter the size of array" << endl;
    cin >> n;
    
    int arr[n];
    int k = 0;
    
    cout << "Enter the values: " << endl;   
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << " The sum of the values are : " << endl;
    
    for(int j = 0; j < n; j++)
        k = k + arr[j];
    
    cout << k << endl;
    
        
    return 0;
}

