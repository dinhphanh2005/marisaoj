#include <iostream>
using namespace std;

// int powerMod(unsigned long long base, unsigned long long exp, unsigned long long mod) {
//     unsigned long long result = 1; 
//     base = base % mod; 
//     while (exp > 0) {
//         if (exp & 1) {
//             result = (result * base) % mod;
//         }
//         exp = exp >> 1;
//         base = (base * base) % mod;
//     }
//     return result; 
// }

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     unsigned long long result = powerMod(a, b, c);
//     cout << result << endl;

//     return 0;
// }

//C2 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ret = 1;
    for (int i = 1; i <= b; i++) {
        ret = ((ret % c) * (a % c)) % c;
    }
    cout << ret << endl;

    return 0;
}