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
bool CheckIsOddNumber(int Num) {
	return Num % 2 != 0;
}
void PrintSumOddNumbersFrom1ToNByFor(int Num) {
	cout << "PrintSumOddNumbersFrom1ToNByFor: \n";
	int Sum = 0;
	for (int i = 1; i <= Num; i++) {
		if (CheckIsOddNumber(i)) {
			PrintResult(i);
			Sum += i;
		}
	}
	cout << "---------------------------\n";
	cout << "sum: " << Sum << endl;

}
void PrintSumOddNumbersFrom1ToNByWhile(int Num) {
	cout << "PrintSumOddNumbersFrom1ToNByWhile: \n";
	int i = 1;
	int Sum = 0;
	while (i <= Num) {
		if (CheckIsOddNumber(i)) {
			PrintResult(i);
			Sum += i;
		}
		i++;
	}
	cout << "---------------------------\n";
	cout << "sum: " << Sum << endl;
}
void PrintSumOddNumbersFrom1ToNByDoWhile(int Num) {
	cout << "PrintSumOddNumbersFrom1ToNByDoWhile: \n";
	int i = 1;
	int Sum = 0;
	do {
		if (CheckIsOddNumber(i)) {
			PrintResult(i);
			Sum += i;
		}

		i++;
	} while (i <= Num);
	cout << "---------------------------\n";
	cout << "sum: " << Sum << endl;
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num = ReadPositiveNumber();
	PrintSumOddNumbersFrom1ToNByFor(Num);
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
	PrintSumOddNumbersFrom1ToNByWhile(Num);
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
	PrintSumOddNumbersFrom1ToNByDoWhile(Num);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}