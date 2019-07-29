#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

//int main() {

	//char **a[3][4];
	//cout << sizeof(a) << endl;

	//int x = 9999;
	//int count = 0;
	//while (x) {
	//	count++;
	//	x = x & (x - 1);
	//}
	//cout << count << endl;

	//int I = 1;
	//if (I <= 0)
	//	printf("****\n");
	//else
	//	printf("%%%%\n");



//	system("pause");
//	return 0;
//}

//struct A {
//	void foo() { printf("foo"); }
//	virtual void bar() { printf("bar"); }
//	A() { bar(); }
//};
//struct B :A {
//	void foo() { printf("b_foo"); }
//	void bar() { printf("b_bar"); }
//};
//int main() {
//	A *p = new B;
//	p->foo();
//	p->bar();
//
//	system("pause");
//	return 0;
//}

//class Printer {
//public:
//	Printer(std::string name) {
//		std::cout << name;
//	}
//};
//class Container {
//public:
//	Container():b("b"),a("a"){}
//	Printer a;
//	Printer b;
//};
//
//
//int main() {
//	Container c;
//
//	system("pause");
//	return 0;
//}

//¾®×ÖÆå
//#include<vector>
//
//class Board {
//public:
//	bool checkWon(vector<vector<int>> board) {
//		if (board[0][0] + board[1][1] + board[2][2] == 3)
//			return true;
//		if (board[0][2] + board[1][1] + board[2][0] == 3)
//			return true;
//		for (int i = 0; i < 3; ++i) {
//			if (board[i][0] + board[i][1] + board[i][2] == 3)
//				return true;
//			if (board[0][i] + board[1][i] + board[2][i] == 3)
//				return true;
//		}
//		return false;
//	}
//};

//ÃÜÂëÇ¿¶È

using namespace std;
int main() {
	string Str;
	cin >> Str;
	int s, sum=0, a = 0, b = 0, c = 0, d = 0;
	s = Str.size();
	//³¤¶È
	if (s >= 8)
		sum += 25;
	else if (s >= 5 && s <= 7)
		sum += 10;
	else
		sum += 5;

	for (int i = 0; i < s; i++) {
		if ((Str[i] >= 'a') && (Str[i] <= 'z'))
			a++;
		else if ((Str[i] >= 'A') && (Str[i] <= 'Z'))
			b++;
		else if ((Str[i] >= '0') && (Str[i] <= '9'))
			c++;
		else if ((Str[i] >= '!') && (Str[i] <= '/') || (Str[i] >= ':') && (Str[i] <= '@') || (Str[i] >= '[') && (Str[i] <= '\'') || (Str[i] >= '{') && (Str[i] <= '~'))
			d++;
	}
	//×ÖÄ¸
	if (a == s || b == s)
		sum += 10;
	else if (a == 0 && b == 0)
		sum += 0;
	else
		sum += 20;

	//Êý×Ö
	if (c > 1)
		sum += 20;
	else if (c == 1)
		sum += 10;
	else
		sum += 0;
	//·ûºÅ
	if (d > 1)
		sum += 25;
	else if (d == 1)
		sum += 10;
	else
		sum += 0;

	if (a > 0 && b > 0 && c > 0 && d > 0)
		sum += 5;
	else if (a +b> 0 && d > 0 && c > 0)
		sum += 3;
	else if (a + b > 0 && c > 0)
		sum += 2;

	if (sum >= 90)
		cout << "VERY_SECURE" << endl;
	else if (sum >= 80)
		cout << "SECURE" << endl;
	else if (sum >= 70)
		cout << "VERY_STRONG" << endl;
	else if (sum >= 60)
		cout << "STRONG" << endl;
	else if (sum >= 50)
		cout << "AVERAGE" << endl;
	else if (sum >= 25)
		cout << "WEAK" << endl;
	else
		cout << "VERY_WEAK" << endl;

	system("pause");
	return 0;
}

