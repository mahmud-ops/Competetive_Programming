#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(n);

        int foundBefore;
        for(int &x:a){
        	cin >> x;
        }


        if(a[0] == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}