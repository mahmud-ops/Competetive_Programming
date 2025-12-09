#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        set<pair<ll,ll>> kingHits, qweenHits;

        ll dx[] = { a,  a, -a, -a,  b,  b, -b, -b };
        ll dy[] = { b, -b,  b, -b,  a, -a,  a, -a };

        for(int i = 0; i < 8; i++) {
            kingHits.insert({xk + dx[i], yk + dy[i]});
            qweenHits.insert({xq + dx[i], yq + dy[i]});
        }

        ll count = 0;
        for(auto &k: kingHits){
            if(qweenHits.count(k)) count++;
        }

        cout << count << endl;
    }
}
