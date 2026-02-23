#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    cin >> s;

    string output = s;

    // add to output the length of the output + the length of its length after adding digit [0-9]
    cout << output + to_string(output.length() + (to_string(s.length() + 1)).length());
    return 0;
}