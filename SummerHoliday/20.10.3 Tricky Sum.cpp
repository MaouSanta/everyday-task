//https://codeforces.com/problemset/problem/598/A
//https://www.luogu.com.cn/problem/CF598A
//套公式就可以了 暴力跑的话反而TLE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll T;
ll n;

int main()
{
	ios::sync_with_stdio(false);
	cin >> T;
	while(T--)
	{
		cin >> n;
		ll k = 0, sum = (1 + n) * n / 2;
		while((1 << k) <= n)
		{
			sum -= 2 * (1 << k);
			k ++;
		}
		cout << sum << endl;
	}
	return 0;
}
