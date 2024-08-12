#include<iostream>
using namespace std;

int main() {
	//Prime number

    int i,n;
    cout << "Enter a number : ";
    cin >> n;


    for ( i = 2; i < n; i++) {

        if (n % i == 0) {
            cout << "Number is not prime";
            break;
        }
    }
    if (i == n) {
            cout << "Number is prime ";
            
     }
	system("pause>0");
}

