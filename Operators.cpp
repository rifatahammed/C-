#include<iostream>
using namespace std;

int main() {

	//This is a basic operator expression code

	//add
	cout << 5 + 2 << endl;
	//int devide , return int
	cout << 5 /2  << endl;
	//float devide (make any one number float first), return int
	cout << 5 / 2.0 << endl;
	//mod op
	cout << 5 % 2 << endl;

	//Unary Op
	int counter = 7;
	counter++;
	cout << counter << endl;
	counter--;
	cout << counter << endl;

	//pre increament
	cout << ++counter << endl;
	
	//This will clear all the code above from the console
	system("cls");

	//This will return 1 / 0 if True/False
	int a = 5, b = 8;
	cout << (a != b);

	cout << (a == 5 && b == 5);
	cout << (a == 5 && b == 5+3);

	system("cls");


	//assignment op
	//=, +=, -=, *= , /=, %= 

	int x = 5;
	x += 7; /* This means x = x+ 7  */
	x -= 7; /* This means x = x- 7  */
	
	system("pause>0");
}

