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

        if((n * b <= a) || ( a == b)){
        	cout << 1 << endl;
        }
        else{
        	cout << 2 << endl;
        }
    }
    return 0;
}