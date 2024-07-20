#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message) {
	float NUM;
	do {
		cout << Message;
		cin >> NUM;
	} while (NUM < 0);
	return NUM;
} 

double CalculateCircleArea(float  Diameter) {
	const double Pi = 3.14159265359;
	return (Pi * Diameter * Diameter)/4;
}

void PrintCircleArea(double CircleArea) {
	cout << "Triangle Area is " << CircleArea << endl;
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintCircleArea(CalculateCircleArea(ReadPositiveNumber("Enter Diameter: ")));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;

}