#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter the size of array" << endl;
    cin >> n;
    
    int arr[n];
    int k;
    
    cout << "Enter the values: " << endl;   
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << " The stored values are : " << endl;
    
    for(int j = 0; j < n; j++)
        cout << arr[j] << endl;
        
    return 0;
}
