#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#define int long long
using namespace std;
// a: 入力された数列
// b: 添字に対する値の出現回数
// s: 添字以降の値の総和
int n, a[1000010], b[1000010], s[1000010];
signed main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]]++;
	}
	for (int i = 1000000; i >= 1; i--) {
		s[i] = s[i + 1] + b[i] * i;
	}
	for (int i = 1; i <= n; i++) {
		cout << s[a[i] + 1] << ' ';
	}
	return 0;
}