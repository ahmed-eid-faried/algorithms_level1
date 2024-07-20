#include <iostream>
#include <string>
using namespace std;

enum enCurrency {
	Penny = 1,
	Nickel = 5,
	Dime = 10,
	Quarter = 25,
	Dollar = 100,
};
struct stCurrency {
	int Penny;
	int	Nickel;
	int	Dime;
	int Quarter;
	int Dollar;
};
int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
stCurrency ReadCurrency() {
	stCurrency  Currency;
	Currency.Penny = ReadPositiveNumber("ENTER Pennies: ");
	Currency.Nickel = ReadPositiveNumber("ENTER Nickels: ");
	Currency.Dime = ReadPositiveNumber("ENTER Dimes: ");
	Currency.Quarter = ReadPositiveNumber("ENTER Quarters: ");
	Currency.Dollar = ReadPositiveNumber("ENTER Dollars: ");
	return Currency;
}

void PrintResult(int TotalPennies) {
	cout << "TotalPennies" << "====>>> " << TotalPennies << endl;
	cout << "TotalDollars" << "====>>> " << (float)TotalPennies / 100 << endl;
}
int CalculateTotalPennies(stCurrency  Currency) {
	int PenniesNickel = Currency.Penny * 5;
	int PenniesDime = Currency.Penny * 10;
	int PenniesQuarter = Currency.Penny * 25;
	int PenniesDollar = Currency.Penny * 100;
	int TotalPennies = Currency.Penny + PenniesNickel + PenniesDime + PenniesQuarter + PenniesDollar;
	return TotalPennies;
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintResult(CalculateTotalPennies(ReadCurrency()));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}