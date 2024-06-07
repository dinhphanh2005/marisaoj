#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[1000];
    int i = -1;
    do {
        i++;
        cin >> a[i];
    } while (a[i] != 0);
    for (int j = 0; j < i; j++) {
        a[j] = pow(a[j], 5);
    }
    for (int j = 0; j < i; j++) {
        cout << a[j] << endl;
    }

    return 0;
}