#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;

        string x,s;
        cin >> x >> s;

        int op = 0;
        bool found = false;
        for(int i = 0 ; i < 6 ; i++){
        	if(x.find(s) != string::npos){
        		found = true;
        		break;
        	}

        	x += x;
        	op++;
        }

        cout << (found ? op : -1) << endl;

    }
    return 0;
}