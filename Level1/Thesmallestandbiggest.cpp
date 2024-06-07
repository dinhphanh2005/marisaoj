#include <iostream> 
using namespace std; 

int max(int a, int b, int c) {
    int max;
    if ((a > b) && (a > c)) {
        max = a;
    } else if ((b > a) && (b > c)) {
        max = b;
    } else { 
        max = c;
    }
    return max;
}

int min(int a, int b, int c) {
    int min;
    if ((a < b) && (a < c)) {
        min = a;
    } else if ((b < a) && (b < c)) {
        min = b;
    } else {
        min = c;
    }
    return min;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max1 = max(a, b, c);
    int min1 = min(a, b, c);
    cout << min1 << " " << max1 << endl;

    return 0;
}