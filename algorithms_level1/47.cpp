#include <iostream>
using namespace std;
int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
void PrintResult(int Num, string title) {
	cout << title << "====>>> " << Num << endl;
}
double CalculateNumbersOfMonths(int LoanAmount, int MonthlyPayment) {
	return (double)LoanAmount / MonthlyPayment;
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int LoanAmount = ReadPositiveNumber("ENTER LoanAmount: ");
	int MonthlyPayment = ReadPositiveNumber("ENTER MonthlyPayment: ");
	PrintResult(CalculateNumbersOfMonths(LoanAmount, MonthlyPayment), "NumbersOfMonths: ");
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}