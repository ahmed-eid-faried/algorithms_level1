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
void ReadRectangleData(float& Height, float& Diagonal) {
	Height = ReadPositiveNumber("ENTER Height: ");
	do {
		if (Diagonal != 0) { cout << "error: Diagonal is less than Height "<<endl; }
		Diagonal = ReadPositiveNumber("ENTER Diagonal: ");
	} while (Diagonal < Height);
}
float CalculateRectangleAreaThroughDiagonal(float  Height, float  Diagonal) {
	return (float)(Height * sqrt(pow(Diagonal, 2) - pow(Height, 2)));
}
void PrintRectangleArea(float RectangleArea) {
	cout << "Rectangle Area Through Diagonal is " << RectangleArea << endl;

}



int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	float Height = 0;
	float Diagonal = 0;
	ReadRectangleData(Height, Diagonal);
	PrintRectangleArea(CalculateRectangleAreaThroughDiagonal(Height, Diagonal));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;

}