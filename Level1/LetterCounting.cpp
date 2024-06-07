#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char a, b; 
    cin >> a >> b;
    if (isupper(a)) {
        a = tolower(a);
    }

    if (isupper(b)) {
        b = tolower(b);
    }
    
    int result = abs(a - b) - 1;
    cout << result << endl;

    return 0;
}