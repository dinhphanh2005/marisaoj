#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, y, z;  
    cin >> a >> b >> c >> x >> y >> z;
    if (c == z) {
        if (b == y) {
            if (a < x) {
                cout << "1" << endl;
            } else {
                cout << "2" << endl;
            }
        } else if (b < y) {
            cout << "1" << endl;
        } else {
            cout << "2" << endl;
        }
    } else if (c < z) {
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }

    return 0;
}