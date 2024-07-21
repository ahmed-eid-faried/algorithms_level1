#include <iostream>
using namespace std;

double  ReadPositiveNumber(string Message) {
	double Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
void PrintResult(double Remainder) {
	cout << "---------------------------\n";
	cout << "Remainder: " << Remainder << endl;
}

double CalculateRemainder(double TotalBill, double CashPaid) {
	return CashPaid - TotalBill;
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	double TotalBill, CashPaid;
	TotalBill = ReadPositiveNumber("Enter TotalBill: ");
	CashPaid = ReadPositiveNumber("Enter CashPaid: ");
	PrintResult(CalculateRemainder(TotalBill, CashPaid));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
