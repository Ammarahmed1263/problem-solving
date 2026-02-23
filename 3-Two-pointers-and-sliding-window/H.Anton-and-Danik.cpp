#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a_wins = 0, d_wins = 0;
    for (int i = 0; i < s.size(); i++) {

        if (s[i] == 'A') {
            a_wins++;
        } else {
            d_wins++;
        }
    }

    if (a_wins > d_wins) {
        cout << "Anton";
    } else if (a_wins < d_wins) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
}