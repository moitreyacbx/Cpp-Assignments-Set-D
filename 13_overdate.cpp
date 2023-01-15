#include <iostream>
using namespace std;

class Time {
    private:
        int hours, minutes, seconds;
    public:
        // Overloading '>>' operator to accept time from user
        friend istream& operator >> (istream& is, Time& t) {
            char ch;
            is >> t.hours >> ch >> t.minutes >> ch >> t.seconds;
            return is;
        }
        // Overloading '+' operator to add two times
        Time operator + (const Time& t) {
            Time sum;
            sum.seconds = seconds + t.seconds;
            sum.minutes = minutes + t.minutes + sum.seconds/60;
            sum.hours = hours + t.hours + sum.minutes/60;
            sum.seconds %= 60;
            sum.minutes %= 60;
            return sum;
        }
        // Overloading '<<' operator to display time in required format
        friend ostream& operator << (ostream& os, const Time& t) {
            os << t.hours << ":" << t.minutes << ":" << t.seconds;
            return os;
        }
        // Overloading '==' operator to check for equality of two times
        bool operator == (const Time& t) {
            return (hours == t.hours) && (minutes == t.minutes) && (seconds == t.seconds);
        }
};

int main() {
    Time t1, t2, t3;
    cout << "Enter time 1 (in hours:mins:secs format): ";
    cin >> t1;
    cout << "Enter time 2 (in hours:mins:secs format): ";
    cin >> t2;
    t3 = t1 + t2;
    cout << "Sum of time 1 and time 2 is: " << t3 << endl;
    if (t1 == t2) {
        cout << "Time 1 and Time 2 are equal." << endl;
    } else {
        cout << "Time 1 and Time 2 are not equal." << endl;
    }
    return 0;
}
