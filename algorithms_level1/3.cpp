//#include <iostream>
//using namespace std;
//enum enOddOrEven { Odd = 0, Even = 1, };
//
//int ReadPositiveNumber() {
//	int NUM;
//	do {
//		cout << "ENTER POSITIVE NUMBER: ";
//		cin >> NUM;
//	} while (NUM > 0);
//	return NUM;
//}
//
//enOddOrEven CheckNumber(int NUM) {
//	if (NUM % 2 == 0)
//	{
//		return enOddOrEven::Even;
//	}
//	else {
//		return enOddOrEven::Odd;
//	}
//}
//string PrintResult(enOddOrEven OddOrEven) {
//	if (OddOrEven == enOddOrEven::Even)
//	{
//		return  " IS EVEN";
//
//	}
//	else {
//		return  " IS ODD";
//
//	}
//}
//
//
//int main() {
//	int Num = ReadPositiveNumber();
//	cout << Num << PrintResult(CheckNumber(Num)) << endl;
//	return 0;
//
//}