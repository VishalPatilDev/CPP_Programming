#include <iostream>
#include <iomanip>  // For setting the output format

using namespace std;

// Structure to represent a time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to convert a time to seconds
int timeToSeconds(const Time& t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

// Function to convert seconds to a time format (HH:MM:SS)
Time secondsToTime(int totalSeconds) {
    Time t;
    t.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    t.minutes = totalSeconds / 60;
    t.seconds = totalSeconds % 60;
    return t;
}

// Function to calculate the difference between two times
Time timeDifference(const Time& t1, const Time& t2) {
    int t1InSeconds = timeToSeconds(t1);
    int t2InSeconds = timeToSeconds(t2);

    int diffInSeconds = abs(t1InSeconds - t2InSeconds);
    return secondsToTime(diffInSeconds);
}

int main() {
    Time time1, time2;

    // Input first time
    cout << "Enter first time (HH MM SS): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    // Input second time
    cout << "Enter second time (HH MM SS): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;

    // Calculate the difference
    Time diff = timeDifference(time1, time2);

    // Display the difference
    cout << "Time difference: " 
         << setw(2) << setfill('0') << diff.hours << ":" 
         << setw(2) << setfill('0') << diff.minutes << ":" 
         << setw(2) << setfill('0') << diff.seconds << endl;

    return 0;
}
