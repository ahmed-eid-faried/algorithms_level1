#include <iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2, int& Num3) {
	cout << "ENTER Num1 : ";
	if (!(cin >> Num1)) {
		cout << " invalid input" << endl;
	}
	cout << "ENTER Num2: ";
	if (!(cin >> Num2)) {
		cout << " invalid input" << endl;
	}
	cout << "ENTER Num3: ";
	if (!(cin >> Num3)) {
		cout << " invalid input" << endl;
	}
}
int FindMaxNumbersFrom3(int Num1, int Num2, int Num3) {
	int Max;
	if (Num1 > Num2) {
		if (Num1 > Num3) {
			Max = Num1;
		}
		else {
			Max = Num3;
		}
	}
	else {
		if (Num2 > Num3) {
			Max = Num2;
		}
		else {
			Max = Num3;
		}
	}
	return Max;

}
void PrintMaxNumber(int Max) {
	cout << "MAX IS " << Max << endl;
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num1;
	int Num2;
	int Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintMaxNumber(FindMaxNumbersFrom3(Num1, Num2, Num3));
	cout << "########################################################\n";
	cout << "########################################################\n";

	return 0;

}