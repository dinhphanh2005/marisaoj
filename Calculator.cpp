#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;  
    char op;
    cin >> a >> op >> b;
    switch(op) {
        case '+': 
            cout << fixed << setprecision(3) << a + b << endl;
            break;
        case '-': 
            cout << fixed << setprecision(3) << a - b << endl;
            break;
        case '*': 
            cout << fixed << setprecision(3) << a * b << endl;
            break;
        case '/': 
            if (b == 0) {
                cout << "ze" << endl;
            } else {
                cout << fixed << setprecision(3) << a / b << endl;
            }
            break;
    }

    return 0;
}