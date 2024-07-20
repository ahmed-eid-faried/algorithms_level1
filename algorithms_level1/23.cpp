//#include <iostream>
//using namespace std;
//float ReadPositiveNumber(string Message) {
//	float NUM;
//	do {
//		cout << Message;
//		cin >> NUM;
//	} while (NUM < 0);
//	return NUM;
//}
//
//double CalculateCircleAreaDescribedAroundAnArbitraryTriangle(float  A, float B, float C) {
//	const double Pi = 3.14159265359;
//	double P = (A + B + C) / 2;
//	double T = (A * B * C) /
//		(4 *
//			sqrt(P * (P - A) * (P - B) * (P - C))
//			);
//	double Area = Pi * pow(T, 2);
//	return  Area;
//}
//
//void PrintCircleArea(double CircleArea) {
//	cout << "Triangle Area is " << CircleArea << endl;
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	cout << "calculate_circle_area_described_around_an_arbitrary_triangle" << endl;
//	float  A = ReadPositiveNumber("Enter A: ");
//	float B = ReadPositiveNumber("Enter B: ");
//	float C = ReadPositiveNumber("Enter C: ");
//	PrintCircleArea(CalculateCircleAreaDescribedAroundAnArbitraryTriangle(A, B, C));
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//
//}
//
