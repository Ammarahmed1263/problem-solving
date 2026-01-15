#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int pairs = 0;
    for (int a = 0; a * a <= n; a++) {
        int b = n - (a * a);

        if (a + (b * b) == m) {
            pairs++;
        }
    }

    cout << pairs;

    return 0;
}