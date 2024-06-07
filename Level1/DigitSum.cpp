#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int n, remainder;
    int count = 0, sum = 0;
    cin >> n;
    if (n < 0) {
        n = abs(n);
    }
    long long int temp = n;
    while (temp > 0) {
        remainder = temp % 10;
        count++;
        temp = temp / 10;
    }

    for (int i = 0; i < count; i++) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
        cout << sum << endl;

    return 0;
}