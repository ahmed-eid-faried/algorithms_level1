
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message) {
	float NUM;
	do {
		cout << Message;
		cin >> NUM;
	} while (NUM < 0);
	return NUM;
}


float CalculateAverageNumbers() {
	float Num1 = ReadPositiveNumber("ENTER POSITIVE NUMBER 1: ");
	float Num2 = ReadPositiveNumber("ENTER POSITIVE NUMBER 2: ");
	float Num3 = ReadPositiveNumber("ENTER POSITIVE NUMBER 3: ");
	return (Num1 + Num2 + Num3) / 3;
}

void PrintAverageNumbers(float Average) {
	cout << " Average is " << (Average) << endl;

}
int main() {
	cout << "##############\t#############\t################\t#############\n";
	cout << "##############\t#############\t################\t#############\n";

	PrintAverageNumbers(CalculateAverageNumbers());

	cout << "##############\t#############\t################\t#############\n";
	cout << "##############\t#############\t################\t#############\n";
	return 0;

}










