//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//
//char fun(char x, char y) {
//	if (x < y)
//		return x;
//	return y;
//}
//
//int main() {
//
//	//int m = 0123, n = 123;
//	//printf("%o %o", m, n);
//
//	//char a = 0, ch;
//	//while ((ch = getchar()) != '\n') {
//	//	if (a % 2 != 0 && (ch >= 'a'&&ch <= 'z'))
//	//		ch = ch - 'a' + 'A';
//	//	a++;
//	//	putchar(ch);
//	//}
//	//printf("\n");
//
//	int a = '1', b = '1', c = '2';
//	cout << fun(fun(a, b), fun(b, c));
//
//	system("pause");
//	return 0;
//
//}

#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	int StrToInt(string str) {

		int a = 1,num = 0;
		int len = str.length();
		if (str == "\0")
			return 0;
		if (str[0] == '-')
			a = -1;
		else if (str[0] >= '0'&&str[0] <= '9')
			num = str[0] - '0';
		else if (str[0] == '+')
			a = 1;
		else
			return 0;
		for (int i = 1; i < len; i++) {
			if (str[i] >= '0'&&str[i] <= '9') {
				num = num * 10 + str[i] - '0';
			}
			else
				return 0;
		}
		return num * a ;
	}
};

int main() {
	int m = 0;
	string str;
	cin >> str;
	Solution A;
	m = A.StrToInt(str);
	cout << m << endl;
	system("pause");
	return 0;
}