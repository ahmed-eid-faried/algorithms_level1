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

double CalculateCircleAreaInscribedInAnIsoscelesTriangle(float  A, float B) {
	const double Pi = 3.14159265359;
	return ((Pi * B * B) / 4) * ((2 * A - B) / (2 * A + B));
}

void PrintCircleArea(double CircleArea) {
	cout << "Triangle Area is " << CircleArea << endl;
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	cout << "calculate_circle_area_inscribed_in_an_isosceles_triangle" << endl;
	float  A = ReadPositiveNumber("Enter A: ");
	float B = ReadPositiveNumber("Enter B: ");
	PrintCircleArea(CalculateCircleAreaInscribedInAnIsoscelesTriangle(A,B));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;

}

