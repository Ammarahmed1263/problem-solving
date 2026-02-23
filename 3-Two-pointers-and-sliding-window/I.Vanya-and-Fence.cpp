#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;

    int road_width = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        if (temp > h) road_width += 2;
        else road_width++;
    }

    cout << road_width;

    return 0;
}