#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    if (n == 1) {
        cout << "NO" << endl;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                count++;
            }
        }
        if (count == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
} 