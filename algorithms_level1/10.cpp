
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













//#include <iostream>
//using namespace std;
//int main() {
//	int Num1;
//	int Num2;
//	int Num3;
//
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	cout << "#### ENTER Num1: ";
//	if (!(cin >> Num1)) {
//		cout << " invalid input" << endl;
//		return 0;
//	}
//	cout << "ENTER Num2: ";
//	if (!(cin >> Num2)) {
//		cout << " invalid input" << endl;
//		return 0;
//	}
//	cout << "ENTER Num3: ";
//	if (!(cin >> Num3)) {
//		cout << " invalid input" << endl;
//		return 0;
//	}
//	cout << "#####################-by-ahmed-mady-####################\n";
//
//
//	cout << " Average is " << ( Num1 + Num2 + Num3)/3 << endl;
//
//
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//
//	return 0;
//
//}