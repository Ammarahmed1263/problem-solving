#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    string word;
    cin >> word;

    if (n < 26)
    {
        cout << "NO";
        return 0;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (i == (char)tolower(word[j]))
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}