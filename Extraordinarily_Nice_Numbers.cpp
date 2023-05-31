#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    cin >> x;
    int chan = 0, le = 0;

    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            if (i % 2 == 0) {
                chan++;
            } else {
                le++;
            }

            if (i != x / i) {
                if ((x / i) % 2 == 0) {
                    chan++;
                } else {
                    le++;
                }
            }
        }
    }

    if (chan == le) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
