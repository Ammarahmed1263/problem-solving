#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> cities(n);
    vector<int> towers(m);

    for (int i = 0; i < n; i++)
    {
        cin >> cities[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> towers[i];
    }

    int city = 0, tower = 0, max_dist = 0;
    while (city < n)
    {
        int curr_dist = abs(towers[tower] - cities[city]);

        if (tower < m - 1 && abs(towers[tower + 1] - cities[city]) <= curr_dist) {
            tower++;
        } else {
            max_dist = max(max_dist, curr_dist);
            city++;
        }
    }

    cout << max_dist;
    return 0;
}