//https://www.nowcoder.com/pat/6/problem/4058
//使用数组下标代表学校编号，将学校编号相同的相加，找出最大值
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin >> n;
	int x, y;
	for(int i = 1; i <= n; ++i)
	{
		cin >> x >> y;
		a[x] += y;
	}
	
	int maxm = 0, maxn = 0;
	for(int i = 1; i <= 100000; ++i)
		if(a[i] > maxm) maxm = a[i], maxn = i;
	cout << maxn << " " << maxm;
	return 0;
}
