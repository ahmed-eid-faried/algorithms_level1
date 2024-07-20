//#include <iostream>
//using namespace std;
//
//
//
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
//void PrintNumbersFrom1ToNByFor(int Num) {
//	cout << "PrintNumbersFrom1ToNByFor: \n";
//	for (int i = 0; i < Num; i++) {
//		PrintResult(i + 1);
//	}
//}
//void PrintNumbersFrom1ToNByWhile(int Num) {
//	cout << "PrintNumbersFrom1ToNByWhile: \n";
//	int i = 0;
//	while (i < Num) {
//		PrintResult(i + 1);
//		i++;
//	}
//}
//void PrintNumbersFrom1ToNByDoWhile(int Num) {
//	cout << "PrintNumbersFrom1ToNByDoWhile: \n";
//	int i = 0;
//	do {
//		PrintResult(i + 1);
//		i++;
//	} while (i < Num);
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	int Num = ReadPositiveNumber();
//	PrintNumbersFrom1ToNByFor(Num);
//	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
//	PrintNumbersFrom1ToNByWhile(Num);
//	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
//	PrintNumbersFrom1ToNByDoWhile(Num);
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}