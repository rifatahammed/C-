#include<iostream>
using namespace std;

int main() {
	//BMI Calculator
	//Under Weight< 18.5
	// Normal Weight 18.5 - 24.9
	// Over Weight > 25
	
	float weight, height, bmi;
	cout << " Enter Your Weight(KG):";
	cin >> weight;
	cout << " Enter Your Height(M):";
	cin >> height;
	
	bmi = weight / (height * height);

	if (bmi < 18.5) {
		cout << "Underweight" << endl;
	}
	else if (bmi > 25) {
		cout << "Over Weight" << endl;
	}
	else {
		cout << "Normal Weight" << endl;
	}
	
	cout << "Your BMI is: " << bmi;

	
	system("pause>0");
}

