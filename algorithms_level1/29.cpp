//#include <iostream>
//using namespace std;
//int  ReadPositiveNumber() {
//	int Num;
//	do {
//		cout << "ENTER POSITIVE NUMBER: ";
//		cin >> Num;
//	} while (Num < 0);
//	return Num;
//}
//void PrintResult(int Num) {
//	cout << "====>>> " << Num << endl;
//}
//bool CheckIsEvenNumber(int Num) {
//	return Num % 2 == 0;
//}
//void PrintSumEvenNumbersFrom1ToNByFor(int Num) {
//	cout << "PrintSumEvenNumbersFrom1ToNByFor: \n";
//	int Sum = 0;
//	for (int i = 1; i <= Num; i++) {
//		if (CheckIsEvenNumber(i)) {
//			PrintResult(i);
//			Sum += i;
//		}
//	}
//	cout << "---------------------------\n";
//	cout << "sum: " << Sum << endl;
//
//}
//void PrintSumEvenNumbersFrom1ToNByWhile(int Num) {
//	cout << "PrintSumEvenNumbersFrom1ToNByWhile: \n";
//	int i = 1;
//	int Sum = 0;
//	while (i <= Num) {
//		if (CheckIsEvenNumber(i)) {
//			PrintResult(i);
//			Sum += i;
//		}
//		i++;
//	}
//	cout << "---------------------------\n";
//	cout << "sum: " << Sum << endl;
//}
//void PrintSumEvenNumbersFrom1ToNByDoWhile(int Num) {
//	cout << "PrintSumEvenNumbersFrom1ToNByDoWhile: \n";
//	int i = 1;
//	int Sum = 0;
//	do {
//		if (CheckIsEvenNumber(i)) {
//			PrintResult(i);
//			Sum += i;
//		}
//
//		i++;
//	} while (i <= Num);
//	cout << "---------------------------\n";
//	cout << "sum: " << Sum << endl;
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	int Num = ReadPositiveNumber();
//	PrintSumEvenNumbersFrom1ToNByFor(Num);
//	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
//	PrintSumEvenNumbersFrom1ToNByWhile(Num);
//	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
//	PrintSumEvenNumbersFrom1ToNByDoWhile(Num);
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}