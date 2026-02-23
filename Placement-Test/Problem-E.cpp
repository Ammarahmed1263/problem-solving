#include <iostream>

using namespace std;
int main() {
    int a, h;
    cin >> a >> h;

    if (a == h) {
        cout << "D";
    } else if (a > h) {
        cout << "A";
    } else {
        cout << "H";
    }

    return 0;
}