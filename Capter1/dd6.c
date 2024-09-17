// //Two dates are entered through the keyboard in dd-mm-yy format write a code to
// find out the difference in these two dates in terms of number of days
#include <stdio.h>
#include <stdbool.h>

#define LEAP_YEAR(year) (((year) % 4 == 0 && (year) % 100 != 0) || ((year) % 400 == 0))

// Function to calculate the number of days in a month
int daysInMonth(int month, int year) {
    switch (month) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return LEAP_YEAR(year) ? 29 : 28;
        default:
            return 31;
    }
}

// Function to calculate the number of days from 1-1-1900 to the given date
int daysSince1900(int day, int month, int year) {
    int days = 0;

    // Add days for the years from 1900 to the year before the given year
    for (int y = 1900; y < year; y++) {
        days += LEAP_YEAR(y) ? 366 : 365;
    }

    // Add days for the months of the given year
    for (int m = 1; m < month; m++) {
        days += daysInMonth(m, year);
    }

    // Add days for the given month
    days += day;

    return days;
}

// Function to calculate the difference between two dates
int dateDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
    int days1 = daysSince1900(day1, month1, year1);
    int days2 = daysSince1900(day2, month2, year2);

    return abs(days1 - days2);
}

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    // Input first date
    printf("Enter first date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &day1, &month1, &year1);

    // Input second date
    printf("Enter second date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &day2, &month2, &year2);

    // Calculate and print the difference
    int diff = dateDifference(day1, month1, year1, day2, month2, year2);
    printf("The difference between the two dates is %d days.\n", diff);

    return 0;
}
