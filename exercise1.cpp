#include <iostream>
#include <iomanip>

using namespace std; //std library ns

int main()
{
    long totalSeconds = 585580100446; // < replace this number with your Student Number >
    int secondsInMinute = 60;
    int minutesInHour = 60;
    int hoursInDay = 24;
    long secondsInDay = secondsInMinute * minutesInHour * hoursInDay;

    // Calculate number of days
    double numberOfDays = static_cast<double>(totalSeconds) / static_cast<double>(secondsInDay);

    // output - two decimal places
    cout << fixed << setprecision(2) << "Number of days: " << numberOfDays << " days" << endl;

    return 0;
}