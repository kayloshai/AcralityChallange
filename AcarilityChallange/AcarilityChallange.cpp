// AcarilityChallange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Acrality {
public:
	int num;
	int num1, num2;

	void calculateFactor(int _num1, int _num2) {
		if (_num1 % _num2 == 0) {
			cout << "Prime!" << endl;
			cout << to_string(_num2) + " a factor of " + to_string(_num1) << endl;
		}
		else if (_num1 % _num2 == 1) {
			cout << to_string(_num2) + " is not a factor of " + to_string(_num1) << endl;
		}
	}

	void inputDisplay(int _num)
	{
		cout << to_string(_num) << endl;
		int n = _num % _num;
		if (n == 0 || n == 1) {
			cout << "Prime!" << endl;
		}
	}

	void displayHandler(string _msg) {
		cout << _msg << endl;
	}
};

int main()
{
	Acrality acrObj;
	acrObj.displayHandler("Automated input and output with below as input");
	acrObj.calculateFactor(10, 3);

	acrObj.displayHandler("User input and output with user to enter input.");
	acrObj.displayHandler("Enter 2 positive numbers followed by ENTER after each.");
	int temp1, temp2;
	cin >> temp1;
	cin >> temp2;
	acrObj.calculateFactor(temp1, temp2);
}