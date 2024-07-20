//#include <iostream>
//using namespace std;
//int  ReadPositiveNumber(string Message) {
//	int Num;
//	do {
//		cout << Message;
//		cin >> Num;
//	} while (Num < 0);
//	return Num;
//}
//void PrintResult(int Num, string title) {
//	cout << title << "====>>> " << Num << endl;
//}
//
//void PrintCalculatePowerOfNumber(int Num, int M) {
//	int PowerOfNumber = 1;
//	for (int i = 1; i <= M; i++) {
//		PowerOfNumber *= Num;
//	}
//	PrintResult(PowerOfNumber, "Number^M :");
//
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	int Num = ReadPositiveNumber("ENTER Num: ");
//	int M = ReadPositiveNumber("ENTER M: ");
//	PrintCalculatePowerOfNumber(Num, M);
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}