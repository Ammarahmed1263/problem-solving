#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<long long> cities(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> cities[i];
    }

    vector<long long> towers(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> towers[i];
    }

    long long max_distance = 0;
    int tower_id = 0;
    for (int i = 0; i < cities.size(); i++)
    {
        while (tower_id < towers.size() - 1 && abs(towers[tower_id + 1] - cities[i]) <= abs(towers[tower_id] - cities[i]))
        {
            tower_id++;
        }

        long long nearest_tower = abs(towers[tower_id] - cities[i]);
        max_distance = max(nearest_tower, max_distance);
    }

    cout << max_distance;
}