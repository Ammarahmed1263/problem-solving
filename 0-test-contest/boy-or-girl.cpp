#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int main()
{
    string userName;
    cin >> userName;
    set<char> distinct;

    for (int i = 0; i < userName.length(); i++)
    {
        distinct.insert(userName[i]);
    }

    if (distinct.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}