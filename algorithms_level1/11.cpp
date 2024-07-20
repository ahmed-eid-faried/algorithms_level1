//#include <iostream>
//#include <string>
//using namespace std;
//
//float ReadNumberInRange(int From, int To, string Message = "ENTER NUMBER") {
//	float NUM;
//	do {
//		cout << Message << " FROM " << to_string(From) << " TO " << to_string(To) << ": ";
//		cin >> NUM;
//	} while (NUM < From || NUM > To);
//	return NUM;
//}
//
//float CalculateAverageMarks() {
//	float Mark1 = ReadNumberInRange(0, 100, "ENTER MARK 1");
//	float Mark2 = ReadNumberInRange(0, 100, "ENTER MARK 2");
//	float Mark3 = ReadNumberInRange(0, 100, "ENTER MARK 3");
//	return (Mark1 + Mark2 + Mark3) / 3;
//}
//
//void PrintAverageMarks(float Average) {
//	cout << " Average is " << (Average) << endl;
//	if (Average > 50) {
//		cout << " PASS " << endl;
//	}
//	else {
//		cout << " FAIL " << endl;
//	}
//}
//int main() {
//	cout << "##############\t#############\t################\t#############\n";
//	cout << "##############\t#############\t################\t#############\n";
//	PrintAverageMarks(CalculateAverageMarks());
//	cout << "##############\t#############\t################\t#############\n";
//	cout << "##############\t#############\t################\t#############\n";
//	return 0;
//
//}