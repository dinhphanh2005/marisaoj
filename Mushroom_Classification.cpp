#include <iostream>
using namespace std;

int main() {
    double t;
    cin >> t;
    if (t < 5.0) {
        cout << "SAFE" << endl;
    } else if ((5.0 <= t) && (t < 9.0)) {
        cout << "TOXIC" << endl;
    } else if (t >= 9.0) {
        cout << "VERY TOXIC" << endl;
    }

    return 0;
}