// Distinct K (EASY)
// https://unstop.com/code/challenge-assessment/250739?moduleId=372

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);
    for (int i = 0; i < n; ++i) cin >> strings[i];
                            

    int k;
    cin >> k;
  
    unordered_map<string, int> frequency;
    vector<string> uniqueStrings;

    for (const auto& str : strings) frequency[str]++;
    for (const auto& str : strings) {
        if (frequency[str] == 1) {
            uniqueStrings.push_back(str);
        }
    }

    if (uniqueStrings.size() < k) cout << -1 << endl;
    else cout << uniqueStrings[k - 1] << endl;
    return 0;
}
