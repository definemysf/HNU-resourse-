#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 7 == 0) cout << n / 7;
	else cout << n % 7;
}
/*
【问题描述】

　　输入一个非负整数（不超过10000），判断这个整数是不是7的倍数.如果是7的倍数，输出它的商，如果不是7的倍数输出它的余数

【输入格式】

一行，一个非负整数。

【输出格式】

　　一行，一个对应的数

【样例输入1】

15
【样例输出1】

1
【样例输入2】

21
【样例输出2】

3
*/
