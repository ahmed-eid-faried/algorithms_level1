//#include <iostream>
//#include <string>
//using namespace std;
//enum enOperation {
//	Add = '+',
//	Subtract = '-',
//	Multiply = '*',
//	Divide = '/',
//	Mod = '%',
//};
//
//double  ReadPositiveNumber(string Message) {
//	double Num;
//	do {
//		cout << Message;
//		cin >> Num;
//	} while (Num < 0);
//	return Num;
//}
//enOperation  ReadChar(string Message) {
//	char letter;
//	cout << Message;
//	cin >> letter;
//	return (enOperation)letter;
//}
//void ReadCurrency(double& Num1, double& Num2, enOperation& OperationType) {
//	Num1 = ReadPositiveNumber("ENTER Num1: ");
//	Num2 = ReadPositiveNumber("ENTER Num2: ");
//	OperationType = ReadChar("ENTER Operation Type: ");
//
//}
//
//void PrintResult(double  Num1, double  Num2, char  OperationType, double Result) {
//	cout << Num1 << " " << OperationType << " " << Num2 << " ====>>> " << Result << endl;
//}
//double Calculator(double  Num1, double  Num2, char  OperationType) {
//	switch (OperationType)
//	{
//	case enOperation::Add:
//		return  Num1 + Num2;
//	case enOperation::Subtract:
//		return  Num1 - Num2;
//	case enOperation::Multiply:
//		return  Num1 * Num2;
//	case enOperation::Divide:
//		return Num1 / Num2;
//	case enOperation::Mod:
//		return (int)Num1 % (int)Num2;
//	default:
//		return  Num1 + Num2;
//	}
//
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	double  Num1, Num2;
//	enOperation  OperationType;
//	ReadCurrency(Num1, Num2, OperationType);
//	PrintResult(Num1, Num2, OperationType, Calculator(Num1, Num2, OperationType));
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}