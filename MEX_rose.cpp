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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> freq(n + 2, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int missing = 0;
        for (int i = 0; i < k; i++)
        {
            if (freq[i] == 0)
            {
                missing++;
            }
        }

        int count_k = freq[k];

        cout << max(missing, count_k) << endl;
    }
    return 0;
}