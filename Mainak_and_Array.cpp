#include <bits/stdc++.h>
using namespace std;

typedef long long int ll

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		ll n;
		cin >> n; 
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) 
			cin >> v[i];

		ll answer = v[n - 1] - v[0];

		for (int i = 1; i < n; i++)
			answer = max(answer, v[i] - v[0]);

		for (int i = 0; i < n - 1; i++)
			answer = max(answer, v[n - 1] - v[i]);

		for (int i = 0; i < n - 1; i++)
			answer = max(answer, v[i] - v[i + 1]);

		cout << answer << endl;
	}
	return 0;
}

