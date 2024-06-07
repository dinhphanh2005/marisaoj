#include <iostream>
using namespace std;

int main() {
    long int d;
    cin >> d;
    long int hours = d / 3600;
    long int remain_seconds = d % 3600;
    long int minutes = remain_seconds / 60;
    long int seconds = remain_seconds % 60;
    cout << hours << " " << minutes << " " << seconds << endl;

    return 0;
}