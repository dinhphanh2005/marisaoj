#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long int a; 
    cin >> a;
    long double s = sqrt(a);
    if (s == (long int)s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}