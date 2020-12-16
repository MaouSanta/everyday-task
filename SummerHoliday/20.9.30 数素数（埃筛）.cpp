//https://www.nowcoder.com/pat/6/problem/4079
//埃拉托尼斯筛法的主要思想是 先把每个数定义为素数，然后把素数的倍数判断为合数
#include <bits/stdc++.h>
using namespace std;

const int maxm = 104729;
int m, n, cnt;
int a[200003], prime[10001];

int main()
{
	ios::sync_with_stdio(false);
	cin >> m >> n;
	for(int i = 2; i <= maxm; ++i)
	{
		if(a[i] == 1) continue;
		prime[++cnt] = i;
		for(int j = i; j <= maxm; j += i) a[j] = 1;
	}
	for(int i = m; i < n; ++i)
	{
		cout << prime[i];
		if((i - m + 1) % 10 == 0) cout << endl;
		else cout << " ";
	}
	cout << prime[n];
	return 0;
}
