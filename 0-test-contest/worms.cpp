#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 2; i < n; i++)
    {
        int left = 0, right = i - 1;
        while (left < right)
        {
            int sum = arr[left] + arr[right];
            if (sum == arr[i])
            {
                cout << i << " " << left << " " << right;
                return 0;
            }
            else if (sum < arr[i])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    cout << -1;

    return 0;
}