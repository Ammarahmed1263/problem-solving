#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> fence(n);

    for (int i = 0; i < n; i++)
    {
        cin >> fence[i];
    }

    int sum = 0, min_sum = INT_MAX, right = 0, left = 0;
    for (int right = 0; right < n; right++)
    {
        sum += fence[right];

        if (right >= k - 1)
        {
            if (sum < min_sum)
            {
                min_sum = sum;
                left = right - k + 2;
            }
            sum -= fence[right - k + 1];
        }
    }

    cout << left;
    return 0;
}