#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    if (c < 0) {
        cout << "NO SOLUTION";
    }
    else {
        if (a == 0) {
            if (b >= 0) {
                if (b == c * c) {
                    cout << "MANY SOLUTIONS";
                }
                else {
                    cout << "NO SOLUTION";
                }
            }
            if (b < 0) {
                cout << "NO SOLUTION";
            }
        }
        else {
            x = (c * c - b) / a;
            if ((c * c - b) % a != 0) {
                cout << "NO SOLUTION";
            }
            else {
                if ((a * x + b) >= 0) {
                    cout << x;
                }
                else {
                    cout << "NO SOLUTION";
                }
            }
        }
    }
    return 0;
}