#include <iostream>
using namespace std;

void input_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
}

int find_max(int a[], int size) {
    int max = a[0];
    for (int i = 0; i < size; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int find_min(int a[], int size) {
    int min = a[0];
    for (int i = 0; i < size; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    input_array(a, n);
    int max = find_max(a, n);
    int min = find_min(a, n);
    cout << max << " " << min << endl;

    return 0;
}