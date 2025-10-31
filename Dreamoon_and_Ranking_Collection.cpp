#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            s.insert(e);
        }

        vector<int> a(s.begin(), s.end());

        int curr = 1;
        int i = 0;
        while (x)
        {
            if ((i < a.size()) && (curr == a[i]))
            {
                i++;
            }
            else
            {
                x--;
            }
            curr++;
        }

        if((x > 0) || i >= a.size()){
            curr += x;
            cout << curr - 1 << endl;
        }
        else{
            cout << curr << endl;
        }

    }
    return 0;
}