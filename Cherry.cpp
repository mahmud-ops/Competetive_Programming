#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;

            a.push_back(value);
        }

        vector<int64_t> multPairs;

        for (int i = 1; i < n; i++)
        {
            int64_t mult = 1LL * a[i] * a[i - 1];
            multPairs.push_back(mult);
        }

        int64_t multMax = LLONG_MIN;
        for (int i = 0; i < multPairs.size(); i++)
        {
            if (multPairs[i] > multMax)
            {
                multMax = multPairs[i];
            }
        }

        cout << multMax << endl;
    }
    return 0;
}