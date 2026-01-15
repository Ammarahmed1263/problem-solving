#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if ((n / 2) % 2 == 0)
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";

    return 0;
}