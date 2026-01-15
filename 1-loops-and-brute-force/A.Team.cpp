#include <iostream>
#include <vector>

using namespace std;
int main()
{
    const int members = 3;
    int p_count;
    cin >> p_count;

    int sure_total = 0;
    for (int i = 0; i < p_count; i++)
    {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2)
        {
            sure_total++;
        }
    }

    cout << sure_total;

    return 0;
}