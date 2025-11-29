#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;

        vector<int> gap;
        vector <int> a(n);
        for(int i = 0 ; i < n ; i++){
        	cin >> a[i];
        }

        for(int i = n, j = 0; i < 2*n; i++,j++){
        	a.push_back((a[j]*2) - (x - 1));
        }

        for(int b:a){
        	cout << b;
        }

        cout << endl;
    }
    return 0;
}