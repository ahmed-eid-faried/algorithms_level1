#include <iostream>
using namespace std;


struct stPersonInfo {
	short int Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};
stPersonInfo ReadPersonInfo() {
	stPersonInfo  PersonInfo;
	cout << "ENTER YOUR AGE: ";
	cin >> PersonInfo.Age;
	cout << "ENTER Driver License, has it? ";
	cin >> PersonInfo.HasDriverLicense;
	cout << "ENTER Recommendation, has it? ";
	cin >> PersonInfo.HasRecommendation;
	return PersonInfo;
}
bool ChechPersonIsHired(stPersonInfo  PersonInfo) {
	if (PersonInfo.HasRecommendation) {
		return true;
	}
	else {
		return ((PersonInfo.Age > 21) && PersonInfo.HasDriverLicense);
	}
}
void PrintResult(bool IsAccepted) {
	if (IsAccepted) {
		cout << "YOU IS Hired" << endl;
	}
	else {
		cout << "YOU IS Rejected" << endl;
	}
}


int main() {
	short int AGE;
	bool isDriverLicense;
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintResult(ChechPersonIsHired(ReadPersonInfo()));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}