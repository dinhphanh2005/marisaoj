#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == c) || (a == d) || (b == c) || (b == d)) {
        cout << "YES" << endl;
    } else if (((c > a) && (c < b)) || ((a > c) && (a < d))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}