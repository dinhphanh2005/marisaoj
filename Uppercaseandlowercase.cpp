#include <iostream>
#include <cctype>
using namespace std;

// int main() {
//     char c; 
//     cin >> c;
//     char result;
//     if ((c >= 'A') && (c <= 'Z')) {
//         result = c + 32;
//         cout << result << endl;
//     } else if ((c >= 'a') && (c <= 'z')) {
//         result = c - 32;
//         cout << result << endl;
//     }

//     return 0;
// }

//C2

int main() {
    char c;
    cin >> c;
    char result;
    if (islower(c)) {
        result = toupper(c);
        cout << result << endl;
    } else if (isupper(c)) {
        result = tolower(c);
        cout << result << endl;
    }

    return 0;
}