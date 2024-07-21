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
void PrintResult(double Remainder, string Message) {
	cout << "---------------------------\n";
	cout << Message << (double)Remainder << endl;
}

void CalculateRemainder(double BillValue) {
	double SalesTax = BillValue * 0.1;
	PrintResult(SalesTax, "SalesTax: ");
	double ServicesFee = BillValue * 1.1 * 0.16;
	PrintResult(ServicesFee, "ServicesFee: ");
	double ServicesFeeAndSalesTax = ServicesFee + SalesTax;
	PrintResult(ServicesFeeAndSalesTax, "ServicesFeeAndSalesTax: ");
	double TotalAferServicesFeeAndSalesTax = BillValue * 1.1 * 1.16;
	PrintResult(TotalAferServicesFeeAndSalesTax, "TotalAferServicesFeeAndSalesTax: ");
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	CalculateRemainder(ReadPositiveNumber("Enter BillValue: "));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
