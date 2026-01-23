#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    long long time = 0, current = 1;
    
    int task;
    for (int i = 0; i < m; i++)
    {
        cin >> task;

        time += (task - current + n) % n;
        current = task;
    }

    cout << time;
    return 0;
}