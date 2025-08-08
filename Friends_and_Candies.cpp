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

        vector<int> a;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            int v;
            cin >> v;
            sum += v;
            a.push_back(v);
        }

        int result;
        int target;
        int cnt = 0;
        if(sum % n != 0){
            result = -1;
        }
        else{
            target = sum/n;
            for(int i = 0 ; i < n ; i++){
                if(a[i] > target) cnt++;
            }
            result = cnt;
        }

        cout << result << endl;
    }
    return 0;
}