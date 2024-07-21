#include <iostream>
using namespace std;
int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
void CheckATMPassword3Times() {
	int ATMPassword = 0;
	int counter = 1;
	while (true) {
		if (counter <= 3) {
			ATMPassword = ReadPositiveNumber("ENTER ATM Password: ");
			if (ATMPassword == 1234) {
				system("color 2F");
				cout << '\a' << "Your Balance is: 7500" << endl;
				break;
			}
			else {
				system("color 6F");
				cout << '\a' << "Wong PIN" << endl;
			}
			counter++;
		}
		else {
			system("color 4F");
			cout << '\a' << "Card is locked!" << endl;
			break;
		}


	}
}



int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	CheckATMPassword3Times();
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}

