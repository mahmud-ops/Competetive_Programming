#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int minVal = a[0];
        for (int i = 0; i < n - 1 ; i++){
            minVal = min(minVal,a[i+1]);
        }

        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(a[i] > minVal) cnt ++;
        }
        cout << cnt << endl;
    }

    return 0;
}