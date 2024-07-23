#include <iostream>
using namespace std;
float  ReadPositiveNumber(string Message) {
	float Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
void PrintResult(float Num, string title) {
	cout << title << "====>>> " << Num << endl;
}

void PrintCalculatePowerOfNumber(float Num, float M) {
	float PowerOfNumber = 1;
	for (float i = 1; i <= M; i++) {
		PowerOfNumber *= Num;
	}
	PrintResult(PowerOfNumber, "Number^M :");

}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	float Num = ReadPositiveNumber("ENTER Num: ");
	float M = ReadPositiveNumber("ENTER M: ");
	PrintCalculatePowerOfNumber(Num, M);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}