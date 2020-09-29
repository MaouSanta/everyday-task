//https://www.nowcoder.com/pat/6/problem/4059
//输出时判断一下该字符是否可以打出，通过ascii码优化一下代码
#include <iostream>
#include <cstring>
using namespace std;

int lena, lens;
char a[131];
char inv[131], s[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin >> a >> s;
	lena = strlen(a);
	lens = strlen(s);
	for(int i = 0; i < lena; ++i)
	{
		inv[a[i]] = 1;
		if(a[i] >= 'A' && a[i] <= 'Z') inv[a[i] + 32] = 1;
	}
	for(int i = 0; i < lens; ++i)
	{
		if(inv[s[i]]) continue;
		if(inv['+'] && s[i] >= 'A' && s[i] <= 'Z') continue;
		cout << s[i];
	}
	cout << endl;
	return 0;
}
