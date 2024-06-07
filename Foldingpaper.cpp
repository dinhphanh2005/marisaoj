#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;
    int count = ceil(log2(n));
    cout << count << endl;

    return 0;
}

//C2
int main() {
    unsigned long long int n;
    cin >> n;
    unsigned long long int folded = 1;
    int count = 0;

    while (folded < n) {
        folded <<= 1; 
        count++;
    }

    cout << count << endl;

    return 0;
}

//C3
int main() {
    unsigned long long int n;
    cin >> n;
    unsigned long long int folded = 1;
    int count = 0;

    while (folded < n) {
        folded *= 2;
        count++;
    }

    cout << count << endl;

    return 0;
}

//C4
int main() {
    unsigned long long int n;
    cin >> n;
    unsigned long long int folded = 1;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (folded < n) {
            folded *= 2;
            count++;
        } 
    }
    cout << count << endl;

    return 0;
}
