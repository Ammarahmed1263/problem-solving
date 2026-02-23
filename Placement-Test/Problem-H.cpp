#include <iostream>
#include <set>
using namespace std;
int main()
{
    int y;
    cin >> y;
    set<int> distinct;

    while (y != 0)
    {
        distinct.insert(y % 10);
        y /= 10;
    }

    if (distinct.size() > 3)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}