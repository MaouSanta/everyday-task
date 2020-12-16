//https://www.nowcoder.com/pat/6/problem/4057
//按题意模拟即可
#include <iostream>
using namespace std;

int T;
int flag, _flag, sum;
int val[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char ans[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
char s[18];

int main()
{
    cin >> T;
    while(T--)
    {
        sum = 0; flag = 0;
        cin >> s;
        for(int i = 0; i <= 16; ++i)
        {
            if(!isdigit(s[i]))
            {
                flag = _flag = 1;
                break;
            }
            sum += (s[i] - '0') * val[i];
        }
        if(ans[sum % 11] != s[17]) flag = _flag = 1;
        if(flag) cout << s << endl;
    }
    if(!_flag) cout << "All passed" << endl;
    return 0;
}
