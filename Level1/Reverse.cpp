#include <iostream>
using namespace std;

int main() {
    long int a, b;
    cin >> a >> b;
    long int sum = a + b;
    long int temp = sum;
    long int remainder, reverse = 0;
    while (temp > 0) {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    cout << reverse << endl;

    return 0;
}