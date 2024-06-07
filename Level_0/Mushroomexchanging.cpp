#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int days = n;
    while (n >= k) {
        int exchange = n / k;
        days += exchange;
        n = n % k + exchange;
    }

    cout << days << endl;

    return 0;
}