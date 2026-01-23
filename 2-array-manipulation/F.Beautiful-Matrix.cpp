#include <iostream>

using namespace std;
int main()
{
    int row;
    int col;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int temp;
            cin >> temp;

            if (temp == 1) {
                row = i;
                col = j;
            }
        }
    }

    cout << abs(3 - row) + abs(3 - col);
    return 0;
}