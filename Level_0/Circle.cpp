#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cin >> r;
    const double pi = 3.14;
    double c = 2 * pi * r;
    double a = pi * r * r;
    cout << fixed << setprecision(3) << c << " " << a << endl;

    return 0;
}