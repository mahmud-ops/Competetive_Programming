#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[100000];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i = 0;
        while (i <= n - k)
        {
            bool canHike = true;
            for (int j = i; j < i + k; j++)
            {
                if (a[j] == 1)
                {
                    canHike = false;
                    break;
                }
            }
            if (canHike)
            {
                count++;
                i += k + 1;
            }
            else
            {
                i++;
            }
        }

        cout << count << endl;
    }
    return 0;
}