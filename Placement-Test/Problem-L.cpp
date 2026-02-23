#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<long long> results(t);

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        long long sum = 2;
        long long fact = 1;

        for (int i = 2; i <= n; i++)
        {
            fact *= i;
            sum += fact;
        }

        results[i] = sum % (static_cast<int>(pow(10, 7)) + 7);
    }

    for (size_t i = 0; i < results.size(); i++)
    {
        cout << results[i] << endl;
    }

    return 0;
}
