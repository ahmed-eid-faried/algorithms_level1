//#include <iostream>
//using namespace std;
//struct stDuration {
//	int days, hours, minutes, seconds;
//};
//int  ReadPositiveNumber(string Message) {
//	int Num;
//	do {
//		cout << Message;
//		cin >> Num;
//	} while (Num < 0);
//	return Num;
//}
//
//
//void ReadDuration(stDuration& Duration) {
//	Duration.days = ReadPositiveNumber("Enter days: ");
//	Duration.hours = ReadPositiveNumber("Enter hours: ");
//	Duration.minutes = ReadPositiveNumber("Enter minutes: ");
//	Duration.seconds = ReadPositiveNumber("Enter seconds: ");
//}
//void PrintResult(double Num, string Message) {
//	cout << "---------------------------\n";
//	cout << Message << Num << endl;
//}
//
//void CalculateDurationInSeconds(stDuration  Duration) {
//	int NumberOfsecondsInSeconds = Duration.seconds;
//	PrintResult(NumberOfsecondsInSeconds, "NumberOfsecondsInSeconds: ");
//
//	int NumberOfsecondsInMinutes = Duration.minutes * 60;
//	PrintResult(NumberOfsecondsInMinutes, "NumberOfsecondsInMinutes: ");
//
//	int NumberOfsecondsInHours = Duration.hours * 60 * 60;
//	PrintResult(NumberOfsecondsInHours, "NumberOfsecondsInHours: ");
//
//	int NumberOfsecondsInDays = Duration.days * 60 * 60 * 24;
//	PrintResult(NumberOfsecondsInDays, "NumberOfsecondsInDays: ");
//
//	cout << "---------------------------\n";
//	int Totalseconds = NumberOfsecondsInSeconds +
//		NumberOfsecondsInMinutes +
//		NumberOfsecondsInHours +
//		NumberOfsecondsInDays;
//	PrintResult(Totalseconds, "Totalseconds: ");
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	stDuration  Duration;
//	ReadDuration(Duration);
//	CalculateDurationInSeconds(Duration);
// 	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
