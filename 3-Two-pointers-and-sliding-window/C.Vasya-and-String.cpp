#include <bits/stdc++.h>

using namespace std;
int count_chars(string &s, char c, int k);
int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    getline(cin >> ws, s);

    int a_count = count_chars(s, 'b', k);
    int b_count = count_chars(s, 'a', k);

    cout << max(a_count, b_count);
    return 0;
}

int count_chars(string &present, char c, int k)
{
    int left = 0, consumed = 0, max_beauty = 0;

    for (int right = 0; right < present.length(); right++)
    {
        if (present[right] == c)
        {
            consumed++;
        }

        while (consumed > k)
        {
            if (present[left] == c)
            {
                consumed--;
            }

            left++;
        }

        max_beauty = max(max_beauty, right - left + 1);
    }

    return max_beauty;
}