// Find if a number is even or odd.
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    if (n == 0){
        cout << "Zero is neither odd nor even" << endl;
    }
    else if ((n %2) == 0){
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }
}