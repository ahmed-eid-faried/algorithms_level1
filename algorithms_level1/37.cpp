#include <iostream>
using namespace std;

int ReadNumber() {
    int Num;
    cout << "ENTER POSITIVE NUMBER (or -99 to stop): ";
    cin >> Num;
    return Num;
}

void PrintResult(int Sum) {
    cout << "---------------------------\n";
    cout << "Sum: " << Sum << endl;
}

int ReadingUntilTheUserEnters99() {
    cout << "Read numbers from user and sum them, keep reading until the user enters -99:\n";
    int Sum = 0;
    int Num = 0;
    while (true) {
        Num = ReadNumber();
        if (Num == -99) {
            break;
        }
        if (Num >= 0) { // Only add positive numbers to the sum
            Sum += Num;
        }
        else {
            cout << "Please enter a positive number or -99 to stop." << endl;
        }
    }
    return Sum;
}

int main() {
    cout << "########################################################\n";
    cout << "#####################-by-ahmed-mady-####################\n";
    cout << "########################################################\n";
    PrintResult(ReadingUntilTheUserEnters99());
    cout << "########################################################\n";
    cout << "########################################################\n";
    return 0;
}
