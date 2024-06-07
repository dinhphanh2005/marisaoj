#include <iostream>
using namespace std;

int factorial(int n) {
    if (n > 0) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int n; 
    cin >> n;
    int d = factorial(n);
    int temp = d;
    int remainder, count = 0;
    while (temp > 0) {
        remainder = temp % 10;
        if (remainder == 0) {
            count++;
        }
        temp /= 10;
    }
    cout << count << endl;

    return 0;
}

//C2
int find_trailling_zero(int n) {
    if (n < 0) {
        return -1;
    }
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int t = find_trailling_zero(n);
    cout << t << endl;
    return 0;
}