#include <iostream>
#include <string>
using namespace std;

enum enMarkStatus {
	Fail = 0,
	Pass = 1,
};

int ReadNumberInRange(int From, int To, string Message = "ENTER NUMBER") {
	int NUM;
	do {
		cout << Message << " FROM " << to_string(From) << " TO " << to_string(To) << ": ";
		cin >> NUM;
	} while (NUM < From && NUM > To);
	return NUM;
}
enMarkStatus CheckMark(int Mark) {
	if (Mark > 50) {
		return enMarkStatus::Pass;
	}
	else {
		return enMarkStatus::Fail;
	}

}
void PrintMarkResult(enMarkStatus MarkStatus) {
	if (MarkStatus == enMarkStatus::Pass) {
		cout << "####  PASS" << "\t\t\t\t#############" << endl;
	}
	else {
		cout << "####  FAIL" << "\t\t\t\t#############" << endl;
	}
}

int main() {
	short int MARK;

	cout << "##############\t#############\t################\t#############\n";
	cout << "##############\t#############\t################\t#############\n";

	PrintMarkResult(CheckMark(ReadNumberInRange(0, 100, "ENTER MARK")));

	cout << "##############\t#############\t################\t#############\n";
	cout << "##############\t#############\t################\t#############\n";

	return 0;

}