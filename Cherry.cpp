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

        int64_t mult = 1;
        
        for (int h = 0; h < 2; h++)
        {
            int maxVal = INT_MIN;
            for (int i = h; i < n; i++)
            {
                if (a[i] > maxVal)
                {
                    maxVal = a[i];
                    a[i] = 0;
                }
            }
            mult *= maxVal;
        }

        cout << mult << endl;
    }
    return 0;
}