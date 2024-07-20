#include <iostream>
#include <string>
using namespace std;

float ReadNumberInRange(int From, int To, string Message = "ENTER NUMBER") {
	float NUM;
	do {
		cout << Message << " FROM " << to_string(From) << " TO " << to_string(To) << ": ";
		cin >> NUM;
	} while (NUM < From || NUM > To);
	return NUM;
}

float CalculateAverageMarks() {
	float Mark1 = ReadNumberInRange(0, 100, "ENTER MARK 1");
	float Mark2 = ReadNumberInRange(0, 100, "ENTER MARK 2");
	float Mark3 = ReadNumberInRange(0, 100, "ENTER MARK 3");
	return (Mark1 + Mark2 + Mark3) / 3;
}

void PrintAverageMarks(float Average) {
	cout << " Average is " << (Average) << endl;
	if (Average > 50) {
		cout << " PASS " << endl;
	}
	else {
		cout << " FAIL " << endl;
	}
}
int main() {
	cout << "##############\t#############\t################\t#############\n";
	cout << "##############\t#############\t################\t#############\n";
	PrintAverageMarks(CalculateAverageMarks());
	cout << "##############\t#############\t################\t#############\n";
	cout << "##############\t#############\t################\t#############\n";
	return 0;

}































//#include <iostream>
//using namespace std;
//int main() {
//	short int Mark1;
//	short int Mark2;
//	short int Mark3;
//	float Average;
//
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	cout << "ENTER Mark1 : ";
//	if (!(cin >> Mark1) || (Mark1 > 100)) {
//		cout << " invalid input" << endl;
//		return 0;
//	}
//	cout << "ENTER Mark2: ";
//	if (!(cin >> Mark2)||Mark2>100) {
//		cout << " invalid input" << endl;
//		return 0;
//	}
//	cout << "ENTER Mark3: ";
//	if (!(cin >> Mark3)||Mark3>100) {
//		cout << " invalid input" << endl;
//		return 0;
//	}
//	cout << "#####################-by-ahmed-mady-####################\n";
//	Average = (Mark1 + Mark2 + Mark3) / 3;
//	if (Average > 50) {
//		cout << " PASS " << endl;
//	}
//	else {
//		cout << " FAIL " << endl;
//	}
//
//
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//
//	return 0;
//
//}