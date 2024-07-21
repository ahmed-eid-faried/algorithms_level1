#include <iostream>
using namespace std;
enum enDays {
	Sunday = 1,
	Monday = 2,
	Tuesday = 3,
	Wednesday = 4,
	Thursday = 5,
	Friday = 6,
	Saturday = 7,
};

int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}

enDays ReadDay() {
	cout << "SELECT YOUR DAY: " << endl;
	cout << "1 - Sunday" << endl;
	cout << "2 - Monday" << endl;
	cout << "3 - Tuesday" << endl;
	cout << "4 - Wednesday" << endl;
	cout << "5 - Thursday" << endl;
	cout << "6 - Friday" << endl;
	cout << "7 - Saturday" << endl;
	enDays Day = (enDays)ReadPositiveNumber("Enter NUM. OF Days: ");
	return Day;
}

void PrintResult(string Message) {
	cout << "----------------------------------\n";
	cout << "----------------------------------\n";
	cout << "Its " << Message << endl;
}

string FindDay(enDays Day) {
	switch (Day)
	{
	case enDays::Sunday:
		return "Sunday";
	case enDays::Monday:
		return "Monday";
	case enDays::Tuesday:
		return "Tuesday";
	case enDays::Wednesday:
		return "Wednesday";
	case enDays::Thursday:
		return "Thursday";
	case enDays::Friday:
		return "Friday";
	case enDays::Saturday:
		return "Saturday";
	default:
		return "Wrong Day";
	}
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintResult(FindDay(ReadDay()));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
