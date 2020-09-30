//https://www.nowcoder.com/pat/6/problem/4079
//通过百度（划掉） 通过自己写代码可以知道第 10000 个素数是 104729，所以 O(n^2) 暴力是跑不过去的
//因为一个合数 x 可以被 p * q（p <= q） 得到，那么我们只需要枚举到 p 就可以得到 q（x / p = q）
//所以我们只需要枚举到 sqrt(x) (使用cmath库）就可以判断 x 是否为素数了 复杂度 O(n·sqrt(n)) 可以卡过去
#include <iostream>
#include <cmath>
using namespace std;

int m, n;
int cnt;

int main()
{
	ios::sync_with_stdio(false);
	cin >> m >> n;
	for(int i = 2; i <= 104729; ++i)//104729是第10000个素数
	{
		int a = sqrt(i), flag = 1;
		for(int j = 2; j <= a; ++j)//判断素数枚举到根号i就可以了
			if(i % j == 0)
			{
				flag = 0;
				break;
			}

		if(flag)//按格式输出
		{
			cnt++;
			if(m <= cnt && cnt <= n)
			{
				cout << i;
				if((cnt - m + 1) % 10 == 0) cout << endl;
				else if(cnt == n) break;
				else cout << " ";
			}
		}
	}
	return 0;
}
