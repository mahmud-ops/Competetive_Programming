#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> n >> m;

    int a, b;

    int maxNum = max(n, m);

    int count = 0;
    for (int a = 0; a <= 2*maxNum; a++)
    {
        for (int b = 0; b <= 2*maxNum; b++)
        {
            if ((a * a + b == n) && (a + b * b == m))
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}