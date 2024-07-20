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
//
//void PrintCalculateFactorialOfNByFor(int Num) {
//	cout << "PrintCalculateFactorialOfNByFor: \n";
//	int Factorial = 1;
//	for (int i = Num; i > 0; i--) {
//		PrintResult(i);
//		Factorial *= i;
//	}
//	cout << "---------------------------\n";
//	cout << "Factorial: " << Factorial << endl;
//
//}
//void PrintCalculateFactorialOfNByWhile(int Num) {
//	cout << "PrintCalculateFactorialOfNByWhile: \n";
//	int i = Num;
//	int Factorial = 1;
//	while (i > 0) {
//		PrintResult(i);
//		Factorial *= i;
//		i--;
//	}
//	cout << "---------------------------\n";
//	cout << "Factorial: " << Factorial << endl;
//}
//void PrintCalculateFactorialOfNByDoWhile(int Num) {
//	cout << "PrintCalculateFactorialOfNByDoWhile: \n";
//	int i = Num;
//	int Factorial = 1;
//	do {
//		PrintResult(i);
//		Factorial *= i;
//		i--;
//	} while (i > 0);
//	cout << "---------------------------\n";
//	cout << "Factorial: " << Factorial << endl;
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	int Num = ReadPositiveNumber();
//	PrintCalculateFactorialOfNByFor(Num);
//	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
//	PrintCalculateFactorialOfNByWhile(Num);
//	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
//	PrintCalculateFactorialOfNByDoWhile(Num);
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}