#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector< pair <int,int>> a(n);
    
    for(int i = 0 ; i < n ; i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.rbegin(), a.rend());

    int shots = 1;
    for (int i = 1; i < n; i++)
    {
        shots += a[i].first * i + 1;
    }

    cout << shots << endl;
    for(int i = 0 ; i < n ; i++){
        cout << a[i].second << " ";
    }
    cout << endl;

    return 0;
}