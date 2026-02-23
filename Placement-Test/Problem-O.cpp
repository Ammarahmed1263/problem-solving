#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int left = n / 10;
    int right = n % 10;

    if (right % 2 == 0 && left % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}