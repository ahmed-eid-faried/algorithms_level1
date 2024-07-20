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

void ReadRectangleData(float& Hieght, float& Base) {
	Hieght = ReadPositiveNumber("ENTER Hieght: ");
	Base = ReadPositiveNumber("ENTER Base: ");
}

float CalculateTriangleArea(float  Hieght, float  Base) {
	return 0.5 * Hieght * Base;
}

void PrintRectangleArea(float RectangleArea) {
	cout << "Triangle Area is " << RectangleArea << endl;

}


int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	float Hieght;
	float Base;
	ReadRectangleData(Hieght, Base);
	PrintRectangleArea(CalculateTriangleArea(Hieght, Base));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;

}