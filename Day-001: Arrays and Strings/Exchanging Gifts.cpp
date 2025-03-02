// Exchanging Gifts (EASY)
// https://unstop.com/code/challenge-assessment/250196?moduleId=372

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> gives(n+1, 0);
    vector<int> rec(n+1, 0);

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        gives[a]++;
        rec[b]++;
    }

    int result = -1;
    for(int i=1;i<=n;i++){
        if(gives[i] == 0 && rec[i] == n-1){
            result = i;
            break;
        }
    }

    cout << result << endl; 
    return 0;
}
