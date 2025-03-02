// Mary and Flowers (EASY)
// https://unstop.com/code/challenge-assessment/262419?moduleId=372

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> nums(n, 0);
    for(int i=0;i<n;i++) cin >> nums[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == t){
                cout << i << " " << j;
                return 0;
            }
        }
    }

    return 0;
}
