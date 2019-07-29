#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>

using namespace std;

class Base {
public:
	Base(int j) : i(j) {}
	virtual~Base(){}
	void func1() {
		i *= 10;
		func2();
	}
	int getValue() {
		return i;
	}
protected:
	virtual void func2() {
		i++;
	}
protected:
	int i;
};
class Child :public Base {
public:
	Child(int j):Base(j){}
	void func1() {
		i *= 100;
		func2();
	}
protected:
		void func2() {
		i += 2;
	}
};

int main() {
	Base *pb = new Child(1);
	pb->func1();
	cout << pb->getValue() << endl;
	delete pb;


	/*char str[] = "glad to test something";
	char *p = str;
	p++;
	int *p1 = reinterpret_cast<int *>(p);
	p1++;
	p= reinterpret_cast<char *>(p1);
	cout << p << endl;*/


	//int n = 0;
	//cin >> n;
	//n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
	//n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
	//n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);
	//n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);
	//n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff);
	//cout << n << endl;


	//char ccString1[] = "Is Page Fault?";
	//char ccString2[] = "Is Page Fault?";
	//strcpy(ccString1, "NO");
	//if (strcmp(ccString1, ccString2)==0)
	//	cout << ccString2;
	//else
	//	cout << ccString1;


	//char dog[] = "wang\0miao";
	//int a = sizeof(dog);
	//int b = strlen(dog);
	//cout << a << b << endl;


	system("pause");
	return 0;
}