#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int left = 0, right = n - 1, s_sum = 0, d_sum = 0;
    bool s_turn = true;

    while (left <= right) {
        int val = 0;

        if (cards[left] > cards[right]) {
            val = cards[left];
            left++;
        } else {
            val = cards[right];
            right--;
        }

        if (s_turn) s_sum += val;
        else d_sum += val;

        s_turn = !s_turn;
    }

    cout << s_sum << " " << d_sum << endl;

    return 0;
}