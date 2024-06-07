#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d;
    if (a == b) {
        d = c;
        cout << d << endl;
    } else if (a == c) {
        d = b;
        cout << d << endl;
    } else if (b == c) {
        d = a;
        cout << d << endl;
    }

    return 0;
}