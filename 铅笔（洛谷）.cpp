//https://www.luogu.com.cn/record/list?pid=U132476
//题解：相同的数异或的值为0，而异或符合交换律，所以把全部数字异或起来就可以得到单独的数
#include <bits/stdc++.h>
using namespace std;

int n, x, y;

int main()
{
	ios::sync_with_stdio(false);
	cin >> n;
	n = n * 2 - 1;
	for(int i = 1; i <= n; ++i)
	{
		cin >> x;
		y ^= x;
	}
	cout << y;
	return 0;
}
