#include <iostream>
using namespace std;

// long int factorial(int a) {
//     if (a > 0) {
//         return a * factorial(a - 1);
//     } else {
//         return 1;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     long int result = factorial(n);
//     cout << result << endl;

//     return 0; 
// }

//C2
int main() {
    int n; 
    cin >> n;
    long int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << factorial << endl;

    return 0;
}