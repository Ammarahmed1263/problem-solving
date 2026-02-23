#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    string letters;
    getline(cin >> ws, letters);

    set<char> unique_letters;
    for (auto c : letters)
    {
        unique_letters.insert(c);
    }
    int target = unique_letters.size();

    map<char, int> letters_freq;
    int left = 0, min_visits = n;
    for (int right = 0; right < n; right++)
    {
        letters_freq[letters[right]]++;

        while (letters_freq.size() == target) {
            min_visits = min(min_visits, right - left + 1);

            letters_freq[letters[left]]--;

            if (letters_freq[letters[left]] == 0) {
                letters_freq.erase(letters[left]);
            }

            left++;
        }
    }

    cout << min_visits;
    return 0;
}