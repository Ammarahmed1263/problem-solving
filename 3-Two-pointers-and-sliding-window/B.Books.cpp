#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> books(n);
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }

    int left = 0, max_books = 0, sum = 0;
    for (int right = 0; right < n; right++)
    {
        sum += books[right];

        if (sum > t)
        {
            sum -= books[left];
            left++;
        }

        max_books = max(max_books, right - left + 1);
    }

    cout << max_books << endl;
    return 0;
}