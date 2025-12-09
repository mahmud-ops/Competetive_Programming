#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
 		int n;cin >> n;
 		int c_1 = 0,c_2 = 0;
 		int numCnt = 0;
 		vector <int> a;
 		for(int i = 0 ; i < n ; i++){
 			cin >> a[i];
 			if((i > 0) && (a[i] != a[i-1])) numCnt ++;
 		}       

 		cout << numCnt << endl;
    }
    return 0;
}