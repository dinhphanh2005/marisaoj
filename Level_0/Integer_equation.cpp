#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;  
    cin >> a >> b;
    int flag = 1;
    if ((a != 0) && (b != 0)) {
        double x = (0 - double(b)) / a;
        if (ceil(x) != floor(x)) {
            flag = 0;
            cout << "NO SOLUTION" << endl;
        } else {
            cout << x << endl;
        }
    } else if ((a == 0) && (b != 0)) {
        cout << "NO SOLUTION" << endl;
    } else if ((a == 0) && (b == 0)) {
        cout << "INFINITE SOLUTIONS" << endl;
    }

    return 0;
}