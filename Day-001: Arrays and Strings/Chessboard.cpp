// Chessboard (EASY)
// https://unstop.com/code/challenge-assessment/250904?moduleId=372

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;

    int column = s[0] - 'a'; 
    int row = s[1] - '0';    

    if ((column + row) % 2 != 0) cout << "Black" << endl;
    else cout << "White" << endl;

    return 0;
}
