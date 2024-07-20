//#include <iostream>
//#include <string>
//using namespace std;
//
//int ReadNumberInRange(int From, int To, string Message = "ENTER NUMBER") {
//	int NUM;
//	do {
//		cout << Message << " FROM " << to_string(From) << " TO " << to_string(To) << ": ";
//		cin >> NUM;
//	} while (NUM < From || NUM > To);
//	return NUM;
//}
//
//void PrintResult(char GradeLetter) {
//	cout << "====>>> " << GradeLetter << endl;
//}
//char GetGradeLetter(int Num) {
//	if (Num >= 90)
//		return 'A';
//	else if (Num >= 80)
//		return 'B';
//	else if (Num >= 70)
//		return 'C';
//	else if (Num >= 60)
//		return 'D';
//	else if (Num >= 50)
//		return 'E';
//	else
//		return 'F';
//
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	PrintResult(GetGradeLetter(ReadNumberInRange(0, 100, "ENTER MARK: ")));
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}