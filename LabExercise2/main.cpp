//Devin Burbach 
//Julie Vaughan
//Jeff Rusch


#include <iostream>
#include <conio.h>

using namespace std;

//function prototype
void Addition(int numOne, int numTwo);
void Subtraction(int numOne, int numTwo);
void Divison(int numOne, int numTwo);
void Multiplication(int numOne, int numTwo);
bool PlayAgain();

int main() {
	int numOne;
	int numTwo;
	int calc;
	char repeat;

	do
	{
	cout << "Enter your first number: ";
	cin >> numOne;
	cout << "Enter your second number: ";
	cin >> numTwo;
	cout << "Enter: 1 for addition, 2 for subtraction, 3 for divison, 4 for multiplication: ";
	cin >> calc;

	switch (calc)
	{
	case 1:	Addition(numOne, numTwo); break;
	case 2:	Subtraction(numOne, numTwo); break;
	case 3: Divison(numOne, numTwo); break;
	case 4: Multiplication(numOne, numTwo); break;
	default: cout << "error: Improper input.";
	}

	} while (PlayAgain());

	_getch();
	return 0;
}

void Addition(int numOne, int numTwo) {
	int total = numOne + numTwo;
	cout << numOne << " + " << numTwo << " = " << total << endl;
	
}

void Subtraction(int numOne, int numTwo) {
	int total = numOne - numTwo;
	cout << numOne << " - " << numTwo << " = " << total << endl;
}

void Divison(int numOne, int numTwo) {
	if (numTwo != 0) {
		int total = numOne / numTwo;
		cout << numOne << " / " << numTwo << " = " << total << endl;
	}
	else {
		cout << "Can't divide by 0." << endl;
	}
	
}

void Multiplication(int numOne, int numTwo) {
	int total = numOne * numTwo;
	cout << numOne << " * " << numTwo << " = " << total << endl;
}

bool PlayAgain() {
	char in = '\0';
	while (in != 'y' && in != 'n' && in != 'Y' && in != 'N') {
		cout << "Would you like to calculate again? (y,n): ";
		cin >> in;
	}
	return (in == 'y' || in == 'Y');
}