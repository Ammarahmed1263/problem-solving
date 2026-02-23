#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int len;
    cin >> len;

    vector<int> freq(26, 0);
    for (size_t i = 0; i < len; i++)
    {
        char letter;
        cin >> letter;
        freq[letter - 'a']++;
    }

    int counter = 0;
    for (size_t i = 0; i < 26; i++)
    {
        counter += freq[i] / 2;
    }

    cout << counter;
    return 0;
}