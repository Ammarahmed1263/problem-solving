#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int evens = 0, odds = 0, last_even = 0, last_odd = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp % 2 == 0)
        {
            evens++;
            last_even = i + 1;
        }
        else
        {
            odds++;
            last_odd = i + 1;
        }
    }

    if (evens == 1)
    {
        cout << last_even;
    }
    else
    {
        cout << last_odd;
    }

    return 0;
}