#include <iostream>
using namespace std;
enum enMonths {
	January = 1,
	February = 2,
	March = 3,
	April = 4,
	May = 5,
	June = 6,
	July = 7,
	August = 8,
	September = 9,
	October = 10,
	November = 11,
	December = 12,
};

int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}

enMonths ReadMonth() {
	cout << "SELECT YOUR DAY: " << endl;
	cout << "1  - January" << endl;
	cout << "2  - February" << endl;
	cout << "3  - March" << endl;
	cout << "4  - April" << endl;
	cout << "5  - May" << endl;
	cout << "6  - June" << endl;
	cout << "7  - July" << endl;
	cout << "8  - August" << endl;
	cout << "9  - September" << endl;
	cout << "10 - October" << endl;
	cout << "11 - November" << endl;
	cout << "12 - December" << endl;
	enMonths Month = (enMonths)ReadPositiveNumber("Enter NUM. OF Months: ");
	return Month;
}

void PrintResult(string Message) {
	cout << "----------------------------------\n";
	cout << "----------------------------------\n";
	cout << "Its " << Message << endl;
}

string FindMonth(enMonths Month) {
	switch (Month)
	{
	case enMonths::January:
		return "January";
	case enMonths::February:
		return "February";
	case enMonths::March:
		return "March";
	case enMonths::April:
		return "April";
	case enMonths::May:
		return "May";
	case enMonths::June:
		return "June";
	case enMonths::July:
		return "July";
	case enMonths::August:
		return "August";
	case enMonths::September:
		return "September";
	case enMonths::October:
		return "October";
	case enMonths::November:
		return "November";
	case enMonths::December:
		return "December";
	default:
		return "Wrong Month";
	}
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	PrintResult(FindMonth(ReadMonth()));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
