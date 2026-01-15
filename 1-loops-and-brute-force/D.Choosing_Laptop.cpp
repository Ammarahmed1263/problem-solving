#include <iostream>
#include <vector>

using namespace std;
int main()
{
    const int specs = 4;
    int n;
    cin >> n;
    vector<vector<int>> laptops(n, vector<int>(specs, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < specs; j++)
        {
            cin >> laptops[i][j];
        }
    }

    int lowest_price = INT_MAX, best_index = -1;
    for (int i = 0; i < n; i++)
    {
        bool outdated = false;
        for (int j = 0; j < n; j++)
        {
            if (laptops[i][0] < laptops[j][0] && laptops[i][1] < laptops[j][1] && laptops[i][2] < laptops[j][2])
            {
                outdated = true;
            }
        }

        if (!outdated && lowest_price > laptops[i][3])
        {
            lowest_price = laptops[i][3];
            best_index = i + 1;
        }
    }

    cout << best_index;

    return 0;
}