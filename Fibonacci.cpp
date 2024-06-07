#include <iostream>
using namespace std;

long int fib(int n) {
    long int a = 0, b = 1, c, i;
    if (n == 0) {
        return a;
    } 
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    long int n;
    cin >> n;
    long int fib_n = fib(n);
    cout << fib_n << endl;

    return 0;
}

// //C2 
// int fib(int n) {
//     if (n <= 1) {
//         return n;
//     } else {
//         return fib(n - 1) + fib(n - 2);
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int fib_n = fib(n);
//     cout << fib_n << endl;

//     return 0;
// }