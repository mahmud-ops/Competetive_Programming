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

        bool reached = false;
        int x = 0, y = 0;
        for (int i = 0; i < 100; i++)
        {

            for (char c : s)
            {
                if (c == 'N')
                    y++;
                else if (c == 'S')
                    y--;
                else if (c == 'E')
                    x++;
                else
                    x--;

                if (x == a && y == b)
                {
                    reached = true;
                    break;
                }
            }

            if (x == a && y == b)
            {
                reached = true;
                break;
            }
        }

        if(reached) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}