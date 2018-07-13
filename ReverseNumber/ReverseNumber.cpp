/*******************************************************************
网易2017 数字翻转
题目描述：
对于一个整数X，定义操作rev(X)为将X按数位翻转过来，并且去除掉前导0。例如:
如果 X = 123，则rev(X) = 321;
如果 X = 100，则rev(X) = 1.
现在给出整数x和y,要求rev(rev(x) + rev(y))为多少？
输入描述：
输入为一行，x、y(1 ≤ x、y ≤ 1000)，以空格隔开。
输出描述：
输出rev(rev(x) + rev(y))的值
********************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int ReverseNumber(string& str)
{
	reverse(str.begin(), str.end());
	auto itor = str.begin();
	while (itor != str.end())
	{
		if (*itor == '0')
			str.erase(itor);
		else
			break;
	}
	return atoi(str.c_str());
}

int main()
{
	string str1, str2;
	while (cin >> str1>>str2)
	{
		int num = ReverseNumber(str1) + ReverseNumber(str2);
		num = ReverseNumber(to_string(num));
		cout << num << endl;
	}
	return 0;
}