#include <iostream>
#include <vector>
 
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> difference(m + 2, 0);
 
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
 
        difference[l] += 1;
        difference[r + 1] -= 1;
    }
 
    vector<int> result;
    int coverage = 0;
 
    for (int i = 1; i <= m; i++) {
        coverage += difference[i];
 
        if (coverage == 0) {
            result.push_back(i);
        }
    }
 
    cout << result.size() << endl;
 
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
    
    return 0;
}