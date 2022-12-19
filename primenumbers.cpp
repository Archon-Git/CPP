#include <bits/stdc++.h>
using namespace std;

int main(){

	int check;
	bool is_prime = 1;

	cout << "Please enter the number: ";
	cin >> check;

	for(int i = 2; i <= sqrt(check); i++){
		if(check % i == 0){
			is_prime = 0;
			break;
		}
	}
	if (is_prime)
		cout << "Prime.";
	else 
		cout << "Not Prime.";
}
