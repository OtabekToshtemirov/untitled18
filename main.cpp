#include <iostream>
#include <cmath>
using namespace std;
int main() {
   // input year, month, day
   //output day of until the end of the year
    int year, month, day;
    cin >> year >> month >> day;
    int days = 0;
    int daysOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        daysOfMonth[1] = 29;
    }
    for (int i = month; i < 12; i++) {
        days += daysOfMonth[i];
    }
    days += daysOfMonth[month - 1] - day;
    cout << days << endl;

    return 0;
}
