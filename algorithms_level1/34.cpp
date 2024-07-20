#include <iostream>
#include <string>
using namespace std;
int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
void PrintResult(int GradeLetter) {
	cout << "====>>> " << GradeLetter << endl;
}
int CalculatePercentageOfCommission(int TotalSales) {
	if (TotalSales >= 1000000)
		return TotalSales * 0.01;
	else if (TotalSales >= 500000)
		return TotalSales * 0.02;
	else if (TotalSales >= 100000)
		return TotalSales * 0.03;
	else if (TotalSales >= 50000)
		return TotalSales * 0.05;
	else
		return 0;
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintResult(CalculatePercentageOfCommission(ReadPositiveNumber("ENTER TotalSales: ")));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}