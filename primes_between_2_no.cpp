#include <bits/stdc++.h>
using namespace std;

int prime(int a){
    bool flag = 0;
    
    for(int j = 2; j <= sqrt(a); j++){
        if (a % j == 0){
            flag = 0;
            break;
        }
        else 
            flag = 1;
    }
    
    if(flag)
        return a;
    else
        return 0;
}

int main(){

    int n1 = 0, n2 = 0;

    cout << "Please enter the two numbers: ";
    cin >> n1 >> n2;

    if(n1 > n2){
        for(int i = n2; i < n1; i++){
            if(prime(i) != 0)
                cout << prime(i) << endl;
        }
    }
    else
        for (int i = n1; i <= n2; i++){
            if(prime(i) != 0)
                cout << prime(i) << endl;
        }
    return 0;
}