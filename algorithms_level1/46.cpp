#include <iostream>
using namespace std;
int  ReadPositiveNumber() {
	int Num;
	do {
		cout << "ENTER POSITIVE NUMBER: ";
		cin >> Num;
	} while (Num < 0);
	return Num;
}
void PrintResult(char Num) {
	cout << "====>>> " << Num << endl;
}
void PrintLettersFromAtoZByFor() {
	cout << "PrintLettersFromAtoZByFor: \n";
	for (int i = 65; i <= 90; i++) {
		PrintResult(char(i));
	}
}
void PrintLettersFromAtoZByWhile() {
	cout << "PrintLettersFromAtoZByWhile: \n";
	int i = 65;
	while (i <= 90) {
		PrintResult(char(i));
		i++;
	}
}
void PrintLettersFromAtoZByDoWhile() {
	cout << "PrintLettersFromAtoZByDoWhile: \n";
	int i = 65;
	do {
		PrintResult(char(i));
		i++;
	} while (i <= 90);
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintLettersFromAtoZByFor();
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
	PrintLettersFromAtoZByWhile();
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
	PrintLettersFromAtoZByDoWhile();
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}