//#include <iostream>
//using namespace std;
//
//
//struct stPersonInfo {
//	short int Age;
//	bool HasDriverLicense;
//};
//stPersonInfo ReadPersonInfo() {
//	stPersonInfo  PersonInfo;
//	cout << "ENTER YOUR AGE: ";
//	cin >> PersonInfo.Age;
//	cout << "ENTER Driver License, has it? ";
//	cin >> PersonInfo.HasDriverLicense;
//	return PersonInfo;
//}
//bool ChechPersonIsHired(stPersonInfo  PersonInfo) {
//	return ((PersonInfo.Age > 21) && PersonInfo.HasDriverLicense);
//}
//void PrintResult(bool IsAccepted) {
//	if (IsAccepted) {
//		cout << "YOU ARE Hired" << endl;
//	}
//	else {
//		cout << "YOU ARE Rejected" << endl;
//	}
//}
//
//
//int main() {
//	short int AGE;
//	bool isDriverLicense;
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	PrintResult(ChechPersonIsHired(ReadPersonInfo()));
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}