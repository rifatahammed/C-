#include<iostream>
using namespace std;

int main() {

	float a, b, c;

	cout << "Enter three side's length of a triangle: ";
	cin >> a>>b>>c;

	if (a == b && b==c) {
		cout << "This is an equilateral Triangle" << endl;
	}
	else 
	{
		if (a !=b && a!=c && b!=c) {
			cout << "Scalene Triangle";
		}
		else {
			cout << "This is an isosceles Triangle" << endl;
		}
		
	}
	
	system("pause>0");
}

