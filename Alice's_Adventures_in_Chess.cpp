#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        int x, y;
        x = 0, y = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
                y += 1;
            else if (s[i] == 'E')
                x += 1;
            else if (s[i] == 'S')
                y -= 1;
            else
                x -= 1;
        }

        cout << x << " " << y << endl;
    }
    return 0;
}