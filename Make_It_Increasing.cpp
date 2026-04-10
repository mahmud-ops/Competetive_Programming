#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ops = 0;
        for (int i = n - 1; i > 0; i--)
        {
            while (a[i] <= a[i - 1])
            {
                if(a[i] == 0){
                    ops = -1;
                    break;
                }
                a[i - 1] /= 2;
                ops++;
            }

            if(ops == -1) break;
        }

        cout << ops << endl;
    }
    return 0;
}