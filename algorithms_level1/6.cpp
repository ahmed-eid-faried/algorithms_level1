#include <iostream>
using namespace std;
string ReadName(string Message) {
	string  Name;
	cout << Message;
	cin >> Name;
	return Name;
}
string ReadData() {
	string FristName = ReadName("ENTER YOUR FRIST NAME: ");
	string LastName = ReadName("ENTER YOUR LAST NAME: ");
	return  FristName + " " + LastName;
}


void PrintFullName(string FullName) {
	cout << FullName << endl;

}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintFullName(ReadData());

	cout << "########################################################\n";
	cout << "########################################################\n";

	return 0;

}