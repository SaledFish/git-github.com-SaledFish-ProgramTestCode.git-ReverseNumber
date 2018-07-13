/*******************************************************************
����2017 ���ַ�ת
��Ŀ������
����һ������X���������rev(X)Ϊ��X����λ��ת����������ȥ����ǰ��0������:
��� X = 123����rev(X) = 321;
��� X = 100����rev(X) = 1.
���ڸ�������x��y,Ҫ��rev(rev(x) + rev(y))Ϊ���٣�
����������
����Ϊһ�У�x��y(1 �� x��y �� 1000)���Կո������
���������
���rev(rev(x) + rev(y))��ֵ
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