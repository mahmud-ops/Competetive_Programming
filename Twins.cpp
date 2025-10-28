#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> a(n);

    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a.rbegin(), a.rend()); // fixed sort

    sum /= 2;

    int newSum = 0;
    int res;
    for(int i = 0 ; i<n ;i++){
        newSum += a[i];
        if(newSum > sum){
            res = i+1;
            break;
        }
    }

    cout << res << endl;

    return 0;
}