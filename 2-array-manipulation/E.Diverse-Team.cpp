#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> team;
    bool seen[101] = {false};

    for (int i = 1; i <= n; i++)
    {
        int rating;
        cin >> rating;

        if (!seen[rating])
        {
            seen[rating] = true;
            team.push_back(i);

            if (team.size() == k)
                break;
        }
    }

    if (team.size() >= k)
    {
        cout << "YES" << endl;

        int printed = 0;
        for (int i = 0; i < team.size(); i++)
        {
            cout << team[i] << (i == team.size() - 1 ? "" : " ");
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}