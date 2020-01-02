/* Program to demonstrate working of Class while passing object as an argument. */

#include <iostream>
using namespace std;

class time
{
private:
    int hour, minute;

public:
    void get_time(int i, int j)
    {
        hour = i;
        minute = j;
    }
    void showtime()
    {
        cout << hour << " Hours & " << minute << " minutes." << endl;
    }
    void sum(time t1, time t2)
    {
        minute = t1.minute + t2.minute;
        hour = minute / 60;
        minute %= 60;
        hour = hour + t1.hour + t2.hour;
    }
};

int main(int argc, char const *argv[])
{
    time t1, t2, t3;
    t1.get_time(12, 23);
    t1.showtime();
    t2.get_time(3, 53);
    t2.showtime();
    t3.sum(t1, t2);
    t3.showtime();
    return 0;
}
