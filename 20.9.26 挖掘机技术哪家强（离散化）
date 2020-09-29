//https://www.nowcoder.com/pat/6/problem/4058
//将学校编号离散化，避免学校编号过大导致的数组越界
#include <bits/stdc++.h>
using namespace std;

int n;
struct node
{
	int sch, scr;
}a[100001];

int cmp(node a, node b) {return a.sch < b.sch;}

int main()
{
	ios::sync_with_stdio(false);
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i].sch >> a[i].scr;
	sort(a + 1, a + n + 1, cmp);

	int maxm = 0, maxn = 0, tmpm = 0, tmpn = 0;
	for(int i = 1; i <= n; ++i)
	{
		if(a[i].sch == a[i - 1].sch) tmpm += a[i].scr;
		if(a[i].sch != a[i - 1].sch || i == n)
		{
			maxn = maxm > tmpm ? maxn : tmpn;
			maxm = maxm > tmpm ? maxm : tmpm;
			tmpn = a[i].sch; tmpm = a[i].scr;
		}
	}
	cout << maxn << " " << maxm;
	return 0;
}
