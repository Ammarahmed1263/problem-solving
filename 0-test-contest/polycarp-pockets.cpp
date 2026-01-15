#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> freq(101, 0);

    int maxPockets = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        freq[val]++;

        if (freq[val] > maxPockets)
        {
            maxPockets = freq[val];
        }
    }

    cout << maxPockets;

    return 0;
}