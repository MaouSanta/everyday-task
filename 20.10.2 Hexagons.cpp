//https://www.luogu.com.cn/problem/CF630D
//http://codeforces.com/problemset/problem/630/D
//数学题 找规律即可
#include <iostream>
#define ll long long
using namespace std;

ll n;

int main()
{
	ios::sync_with_stdio(false);
	cin >> n;
	cout << 3 * n * n + 3 * n + 1;
	return 0;
}
