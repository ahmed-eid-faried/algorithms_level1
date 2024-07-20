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
void PrintResult(int Num) {
	cout << "====>>> " << Num << endl;
}
void PrintNumbersFromNto1ByFor(int Num) {
	cout << "PrintNumbersFromNto1ByFor: \n";
	for (int i = Num; i > 0; i--) {
		PrintResult(i);
	}
}
void PrintNumbersFromNto1ByWhile(int Num) {
	cout << "PrintNumbersFromNto1ByWhile: \n";
	int i = Num;
	while (i > 0) {
		PrintResult(i);
		i--;
	}
}
void PrintNumbersFromNto1ByDoWhile(int Num) {
	cout << "PrintNumbersFromNto1ByDoWhile: \n";
	int i = Num;
	do {
		PrintResult(i);
		i--;
	} while (i > 0);
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num = ReadPositiveNumber();
	PrintNumbersFromNto1ByFor(Num);
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
	PrintNumbersFromNto1ByWhile(Num);
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
	PrintNumbersFromNto1ByDoWhile(Num);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}