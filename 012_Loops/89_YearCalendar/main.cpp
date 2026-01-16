#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to check leap year
bool isLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    return (year % 4 == 0);
}

int main() {
    int year;
    int startDay; // 0 = Sunday, 1 = Monday, ..., 6 = Saturday

    string months[12] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int daysInMonth[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    // Input
    cout << "Enter year: ";
    cin >> year;

    cout << "Enter the first weekday of the year\n";
    cout << "(0 = Sunday, 1 = Monday, ..., 6 = Saturday): ";
    cin >> startDay;

    // Adjust February for leap year
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    cout << "\nCalendar for " << year << "\n\n";

    // Print calendar
    for (int month = 0; month < 12; month++) {
        cout << "------------ " << months[month] << " ------------\n";
        cout << "Sun Mon Tue Wed Thu Fri Sat\n";

        // Print leading spaces
        for (int i = 0; i < startDay; i++) {
            cout << "    ";
        }

        // Print days
        for (int day = 1; day <= daysInMonth[month]; day++) {
            cout << setw(4) << day;

            if ((startDay + day) % 7 == 0) {
                cout << endl;
            }
        }

        cout << "\n\n";

        // Calculate first weekday of next month
        startDay = (startDay + daysInMonth[month]) % 7;
    }

    return 0;
}
