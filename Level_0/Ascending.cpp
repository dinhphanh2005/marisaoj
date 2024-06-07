#include <iostream>
using namespace std;

void bubble_sort(int a[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int array[] = {a, b, c};
    int size = sizeof(array) / sizeof(array[0]);
    bubble_sort(array, size);
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

//C2

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}