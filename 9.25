//https://www.nowcoder.com/pat/6/problem/4052
//printf里 %2d 控制输出两位向右对齐， %-2d 控制两位向左对齐，%+2d 控制两位含符号，%02d 控制两位补前缀0
#include <bits/stdc++.h>
using namespace std;

int a, b;
int h, m, s;

int main()
{
	scanf("%d%d", &a, &b);
	b -= a;
	b = (double)b / 100 + 0.5;
	h = b / 3600; b -= h * 3600;
	m = b / 60;   b -= m * 60;
	s = b / 1;
	printf("%02d:%02d:%02d", h, m, s);
	return 0;
}
