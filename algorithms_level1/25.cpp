#include <iostream>
using namespace std;



short int  ReadAge() {
	short int Age;
	do {
		cout << "ENTER POSITIVE NUMBER: ";
		cin >> Age;
	} while (Age < 0);
	return Age;
}
bool ChechAge() {
	bool IsAccepted;
	short int Age = 0;
	do {
		Age = ReadAge();
		IsAccepted = (Age >= 18 && Age <= 45);
	} while (!IsAccepted);
	return IsAccepted;
}
void PrintResult(bool IsAccepted) {
	if (IsAccepted) {
		cout << "Valid Age" << endl;
	}
	else {
		cout << "Invalid Age" << endl;
	}
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintResult(ChechAge());
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}