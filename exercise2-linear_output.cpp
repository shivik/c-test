#include <iostream>
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

    // Output the result
    cout << "Years: " << years << " years" << endl;
    cout << "Days: " << days << " days" << endl;
    cout << "Hours: " << hours << " hours" << endl;
    cout << "Minutes: " << minutes << " minutes" << endl;
    cout << "Seconds: " << seconds << " seconds" << endl;

    return 0;
}
