#include <iostream>
using namespace std;
enum enPrimeStatus { Prime, NotPrime };

int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
void PrintPrimeNumber(enPrimeStatus  PrimeStatus, int Num) {
	cout << "---------------------------\n";
	if (PrimeStatus == enPrimeStatus::Prime) {
		cout << "Prime: " << Num << endl;
	}
	else {
		//cout << "Not Prime: " << Num << endl;
		cout << "";
	}
}
bool CheckEvenNumber(int Num) {
	return Num % 2 == 0;
}
bool CheckNumberIs0or1Or2(int Num) {
	return(Num == 0 || Num == 1 || Num == 2);
}
enPrimeStatus CheckPrimeNumber(int Num) {
	if (CheckNumberIs0or1Or2(Num)) {
		return enPrimeStatus::Prime;

	}
	else
		if (CheckEvenNumber(Num)) {
			return enPrimeStatus::NotPrime;
		}
		else
		{
			for (int i = 2; i < Num; i++) {
				if (Num % i == 0) {
					return enPrimeStatus::NotPrime;
				}
			}
			return enPrimeStatus::Prime;
		}
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num;
	Num = ReadPositiveNumber("ENTER POSITIVE NUMBER: ");
	enPrimeStatus  PrimeStatus = CheckPrimeNumber(Num);
	PrintPrimeNumber(PrimeStatus, Num);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
