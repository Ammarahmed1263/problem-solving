#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<bool> alpha(26, 0);

    char character;
    while (cin >> character) {
        if (character == '}') {
            break;
        }

        if (isalpha(character)) {
            alpha[character - 'a'] = true;
        }
    }

    int unique = 0;
    for (int i = 0; i < alpha.size(); i++) {
        if (alpha[i] >= 1) unique++;
    }

    cout << unique << endl;

    return 0;
}