#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long totalSeconds = 585580100446;
    int secondsInMinute = 60;
    int minutesInHour = 60;
    int hoursInDay = 24;
    int daysInYear = 365;

    // Calculate number of years
    long years = totalSeconds / (secondsInMinute * minutesInHour * hoursInDay * daysInYear);

    // Calculate remaining seconds after removing years
    long remainingSeconds = totalSeconds % (secondsInMinute * minutesInHour * hoursInDay * daysInYear);

    // Calculate number of days
    int days = remainingSeconds / (secondsInMinute * minutesInHour * hoursInDay);

    // Calculate remaining seconds after removing days
    remainingSeconds %= (secondsInMinute * minutesInHour * hoursInDay);

    // Calculate number of hours
    int hours = remainingSeconds / (secondsInMinute * minutesInHour);

    // Calculate remaining seconds after removing hours
    remainingSeconds %= (secondsInMinute * minutesInHour);

    // Calculate number of minutes
    int minutes = remainingSeconds / secondsInMinute;

    // Calculate remaining seconds
    int seconds = remainingSeconds % secondsInMinute;

    // Print output as table
    cout << setw(10) << "Years |" << setw(10) << "Days |" << setw(10) << "Hours |" << setw(10) << "Minutes |" << setw(10) << "Seconds" << endl;
    cout << setw(10) << years << " |" << setw(10) << days << " |" << setw(10) << hours << " |" << setw(10) << minutes << " |" << setw(10) << seconds << endl;

    return 0;
}
