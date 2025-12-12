#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k,oddCnt = 0;
        cin >> n >> k;

        string s;
        cin >> s;

        map <char,int> freq;
        for(char c:s) freq[c]++;e

        for(auto &m:freq){
        	if(m.second % 2 != 0) oddCnt++;
        }

        if(oddCnt > k+1) cout << "NO\n";
        else cout << "YES\n";

    }
    return 0;
}