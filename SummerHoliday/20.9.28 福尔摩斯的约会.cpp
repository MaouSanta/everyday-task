//https://www.nowcoder.com/pat/6/problem/4040
//(福尔摩斯看了想骂人)按题目要求模拟即可
#include <iostream>
using namespace std;

string week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
string s1, s2;
int len1, len2, minlen;

int main()
{
	cin >> s1 >> s2;
	len1 = s1.length();
	len2 = s2.length();
	minlen = min(len1, len2);

	int i = 0;
	for(; i < minlen; ++i)
		if(s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G')
		{
			cout << week[s1[i] - 'A'] << " ";
			break;
		}
	for(++i; i < minlen; ++i)
		if(s1[i] == s2[i] && (s1[i] >= 'A' && s1[i] <= 'G' || s1[i] >= '0' && s1[i] <= '9'))
		{
			if(isdigit(s1[i])) cout << "0" << s1[i] - '0' << ":";
			else if(s1[i] >= 'A' && s1[i] <= 'N') cout << int(s1[i] - 'A') + 10 << ":";
			else continue;
			break;
		}

	cin >> s1 >> s2;
	len1 = s1.length();
	len2 = s2.length();
	minlen = min(len1, len2);

	for(i = 0; i < minlen; ++i)
		if(s1[i] == s2[i] && (s1[i] >= 'a' && s1[i] <= 'z' || s1[i] >= 'A' && s1[i] <= 'Z'))
		{
			printf("%02d", i);
			break;
		}
	return 0;
}
