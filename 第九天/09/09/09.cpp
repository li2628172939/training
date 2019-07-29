#include<stdio.h>
#include<iostream>

using namespace std;

//int fun(int a) {
//	a ^= (1 << 5) - 1;
//	return a;
//
//}
//
//int main() {
//	int m,a=21;
//	m = fun(a);
//	cout << m << endl;
//	system("pause");
//	return 0;
//}
//
//void func(char **m) {
//	++m;
//	cout << *m << endl;
//}
//
//int main() {
//	static char *a[] = { "morning","afternoon","evening" };
//	char **p;
//	p = a;
//	func(p);
//	system("pause");
//	return 0;
class MyClass {
public:
	MyClass(int i = 0) { cout << 1; }
	MyClass(const MyClass&x) { cout << 2; }
	MyClass& operator=(const MyClass&x) { cout << 3; return*this; }
	~MyClass() { cout << 4; }
};
int main() {
	MyClass obj1(1), obj2(2), obj3(obj1);
	system("pause");
	return 0;
}