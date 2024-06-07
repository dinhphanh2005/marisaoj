#include <iostream>
#include <algorithm>
using namespace std;

// int gcd(int a, int b) {
//     if ((a == 0) || (b == 0)) {
//         return a + b;
//     } else {
//         return gcd(b % a, a);
//     }
// }

// int main() {
//     int a, b;
//     cin >> a >> b; 
//     int irriducible_number = gcd(a, b);
//     a = a / irriducible_number;
//     b = b / irriducible_number;
//     cout << a << " " << b << endl;

//     return 0;
// }

//C2

int main() {
    int a, b;
    cin >> a >> b;
    int minimum = min(a, b);
    for (int i = minimum; i > 0; i--) {
        if ((a % i == 0) && (b % i == 0)) {
            a /= i;
            b /= i;
        }
    }
    cout << a << " " << b << endl;

    return 0;
}