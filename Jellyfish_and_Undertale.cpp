#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll a,b,n;
        cin >> a >> b >> n;

        vector <ll> c(n);
        int time = 0;
        for(int i = 0 ; i < n ; i++){
        	cin >> c[i];
        	time += min(c[i],a-1);
        }

        cout << b + time << endl;

    }
    return 0;
}