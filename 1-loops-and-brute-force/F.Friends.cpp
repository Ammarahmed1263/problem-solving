#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int pairs_count;
    cin >> pairs_count;
    int relations[6][6]{0};

    for (int i = 0; i < pairs_count; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        relations[n1][n2] = 1;
        relations[n2][n1] = 1;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            for (int k = j + 1; k <= 5; k++)
            {
                if ((relations[i][j] == 1 && relations[i][k] == 1 && relations[j][k] == 1) || (relations[i][j] == 0 && relations[i][k] == 0 && relations[j][k] == 0))
                {
                    cout << "WIN";
                    return 0;
                }
            }
        }
    }

    cout << "FAIL";
    return 0;
}