#include <iostream>
using namespace std;
enum enPrimeOrNotPrime { Prime, NotPrime };

int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
void PrintPrimeNumber(enPrimeOrNotPrime  PrimeStatus, int Num) {
	cout << "---------------------------\n";
	if (PrimeStatus == enPrimeOrNotPrime::Prime) {
		cout << "Prime: " << Num << endl;
	}
	else {
		cout << "Not Prime: " << Num << endl;
	}
}
bool CheckEvenNumber(int Num) {
	return Num % 2 == 0 || Num == 0;
}
bool CheckNumberIs1Or2(int Num) {
	return(Num == 1 || Num == 2);
}
enPrimeOrNotPrime CheckPrimeNumber(int Num) {
	if (CheckNumberIs1Or2(Num)) {
		return enPrimeOrNotPrime::Prime;

	}
	else
		if (CheckEvenNumber(Num)) {
			return enPrimeOrNotPrime::NotPrime;
		}
		else
		{
			for (int i = 2; i < ceil(Num / 2); i++) {
				if (Num % i == 0) {
					return enPrimeOrNotPrime::NotPrime;
				}
			}
			return enPrimeOrNotPrime::Prime;
		}
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num;
	Num = ReadPositiveNumber("ENTER POSITIVE NUMBER: ");
	enPrimeOrNotPrime  PrimeStatus = CheckPrimeNumber(Num);
	PrintPrimeNumber(PrimeStatus, Num);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
