#include <iostream>
#include <cmath>
using namespace std;

unsigned long long count_square(unsigned long long a) {
    return sqrt(a);
}

int main() {
    unsigned long long a; 
    cin >> a;
    unsigned long long result = count_square(a);
    cout << result << endl;

    return 0;
}