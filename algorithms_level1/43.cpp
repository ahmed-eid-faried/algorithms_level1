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
////void ReadDuration(stDuration& Duration) {
////	Duration.days = ReadPositiveNumber("Enter days: ");
////	Duration.hours = ReadPositiveNumber("Enter hours: ");
////	Duration.minutes = ReadPositiveNumber("Enter minutes: ");
////	Duration.seconds = ReadPositiveNumber("Enter seconds: ");
////}
//void PrintResult(double Num, string Message) {
//	cout << "---------------------------\n";
//	cout << Message << Num << endl;
//}
//
//void CalculateDurationBySeconds(int seconds) {
//	int SecPerfMinutes = 60;
//	int SecPerfHours = 60 * 60;
//	int SecPerfDays = 60 * 60 * 24;
//	int remainder = 0;
//
//	int NumberOfDays = seconds / SecPerfDays;
//	remainder = seconds % SecPerfDays;
//	PrintResult(NumberOfDays, "NumberOfDays: ");
//
//	int NumberOfHours = remainder / SecPerfHours;
//	remainder = remainder % SecPerfHours;
//	PrintResult(NumberOfHours, "NumberOfHours: ");
//
//	int NumberOfMinutes = remainder / SecPerfMinutes;
//	remainder = remainder % SecPerfMinutes;
//	PrintResult(NumberOfMinutes, "NumberOfMinutes: ");
//
//	PrintResult(remainder, "NumberOfSeconds: ");
//
//	cout << "---------------------------\n";
//	cout << NumberOfDays << " : "
//		<< NumberOfHours << " : "
//		<< NumberOfMinutes << " : "
//		<< remainder << endl;
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	int seconds = ReadPositiveNumber("Enter seconds: ");
//	CalculateDurationBySeconds(seconds);
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
