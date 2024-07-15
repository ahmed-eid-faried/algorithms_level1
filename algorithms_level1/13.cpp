#include <iostream>
using namespace std;
int main() {
	int Num1;
	int Num2;

	cout << "########################################################\n";
	cout << "########################################################\n";
	cout << "ENTER Num1 : ";
	if (!(cin >> Num1) || (Num1 > 100)) {
		cout << " invalid input" << endl;
		return 0;
	}
	cout << "ENTER Num2: ";
	if (!(cin >> Num2) || Num2 > 100) {
		cout << " invalid input" << endl;
		return 0;
	}

	cout << "#####################-by-ahmed-mady-####################\n";
	if (Num1 > Num2) {
		cout << Num1 << endl;
	}
	else {
		cout << Num2 << endl;
	}


	cout << "########################################################\n";
	cout << "########################################################\n";

	return 0;

}