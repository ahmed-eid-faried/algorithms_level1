#include <iostream>
using namespace std;

void ReadNumber(int& Num1, int& Num2) {
	cout << "ENTER Num1 : ";
	if (!(cin >> Num1)) {
		cout << " invalid input" << endl;
	}
	cout << "ENTER Num2: ";
	if (!(cin >> Num2)) {
		cout << " invalid input" << endl;
	}
}
void FindMaxNumber(int  Num1, int  Num2) {
	if (Num1 > Num2) {
		cout << "MAX IS " << Num1 << endl;
	}
	else {
		cout << "MAX IS " << Num2 << endl;
	}
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num1;
	int Num2;
	ReadNumber(Num1, Num2);
	FindMaxNumber(Num1, Num2);
	cout << "########################################################\n";
	cout << "########################################################\n";

	return 0;

}