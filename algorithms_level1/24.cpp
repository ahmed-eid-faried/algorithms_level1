#include <iostream>
using namespace std;



short int ReadAge() {
	short int Age;
	cout << "ENTER YOUR AGE: ";
	cin >> Age;
	return Age;

}
bool ChechAge(short int Age) {
	//between 18 and 45
	return (Age >= 18 && Age <= 45);
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
	short int AGE;
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintResult(ChechAge(ReadAge()));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}