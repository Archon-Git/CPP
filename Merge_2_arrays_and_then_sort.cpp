#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end){
    
    int pivot = arr[start];
    int count = 0;
    
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
    
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    int i = start, j = end;
    
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end){
    
    if (start >= end)
        return;
    
    int p = partition(arr, start, end);
    
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}   

int main(){
    int n;
    
    cout << "Enter the size of array: " << endl;
    cin >> n;
    
    int arr1[n];
    int arr2[n];
    int arr3[2 * n];
    int arr4[2 * n];

    cout << "Enter the values of array 1: " << endl;   
    
    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter the values of array 2: " << endl;   
    
    for(int i = 0; i < n; i++)
        cin >> arr2[i];
        
    cout << "Merging the values of array 1 and array 2 into array 3. " << endl;
    
    for(int j = 0; j < n; j++){
        arr3[j] = arr1[j];
        arr3[j + n] = arr2[j];
    }
    
    quickSort(arr3, 0, 2 * n - 1);
    rvereseArray(arr3, 0, 2 * n - 1);

    cout << "The Merged array and sorted array: ";
    for(int l = 0; l < 2 * n; l++)
        cout << arr3[l] << " ";
    
    return 0;
}

