//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//
//class A {
//public:
//	A(char *s) {
//		cout << s << endl;
//	}
//	~A(){}
//};
//class B :virtual public A {
//public:
//	B(char *s1, char *s2) :A(s1) {
//		cout << s2 << endl;
//	}
//};
//class C :virtual public A {
//public:
//	C(char *s1, char *s2) :A(s1) {
//		cout << s2 << endl;
//	}
//};
//class D :public B, public C {
//public:
//	D(char *s1, char *s2, char *s3, char *s4) :B(s1, s2), C(s1, s3), A(s1){
//		cout << s4 << endl;
//	}
//};
//int main() {
//	D *p = new D("class A", "class B", "class C", "class D");
//	delete p;
//	return 0;
//}
//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//int main() {
//	int M = 0, N = 0;
//	int i = 0,j=0;
//	cin >> M >> N;
//	string s;
//	string temp = "0123456789ABCDEF";
//	char str ;
//	if (M < 0) {
//		M = -M;
//		cout << "-";
//	}
//	while (M != 0) {
//		s += temp[M%N];
//		M /= N;
//		i++;
//	}
//	for (j, i; j < i;j++,i--) {
//		str = s[i - 1];
//		s[i - 1] = s[j];
//		s[j] = str;
//
//	}
//	cout << s.c_str() << endl;
//
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
	int A=0, B=0, C=0;
	int a = A - B, b = B - C, c = A + B, d = B + C;
	cin >> a >> b >> c >> d;
	if (a < -30 || a>30)
		cout << "NO" << endl;
	if (b < -30 || b>30)
		cout << "NO" << endl;
	if (c < -30 || c>30)
		cout << "NO" << endl;
	if (d < -30 || d>30)
		cout << "NO" << endl;
	else if (c - a == b + d) {
			B = (c - a) / 2;
			if (a + B == c - B) {
				A = a + B;
				C = d - B;
				if (A < 0 || B < 0 || C < 0)
					cout << "NO" << endl;
				else
					cout << A << ' ' << B << ' ' << C << endl;
			}
		}
	else
		cout << "NO" << endl;

	system("pause");
	return 0;
}
