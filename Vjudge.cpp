#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map <int , string> m;

    m[1] = "ONE";
    m[3] = "THREE";

    for(auto n:m){
        cout << n.first << " -> " << n.second << endl;
    }

    return 0;
}