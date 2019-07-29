#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<string>
#define N 100000
int x[N];

using namespace std;

void swap(int &a, int &b) {
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
}

int main() {
	byte byte;
	int count=0,sum=0,i = 0;
	int arr[N];

	cin >> byte;
	for ( i=0; byte >0;i++) {

		arr[i] = byte % 2;
		byte /= 2;
	}
	for (int j=0; j < i; j++) {
		if (arr[j] ==1)
			sum++;
		else
			swap(count, sum);
	}
	int a = count > sum ? count : sum;
	cout << a << endl;

	system("pause");
	return 0;

}




//class A {
//public:
//	virtual void func(int val = 1) {
//		std::cout << "A->" << val << std::endl;
//	}
//		virtual void test() {
//			func();
//		}
//};
//
//class B :public A {
//public:
//	void func(int val = 0) {
//		std::cout << "B->" << val << std::endl;
//	}
//};
//int main() {
//	B *p = new B;
//	p->test();
//	system("pause");
//	return 0;
//}


//void dump() {
//	int i = 0;
//	for (i = 0; i < N; i++) {
//		printf("%d", x[i]);
//	}
//	printf("\n");
//}
//void swap(int a, int b) {
//	int t = x[a];
//	x[a] = x[b];
//	x[b] = t;
//}
//void run(int n) {
//	int i;
//	if (N - 1 == n) {
//		dump();
//		count++;
//		return;
//	}
//	for (i = n + 1; i < N; i++) {
//		swap(n , i);
//		run(n + 1);
//		swap(n, i);
//	}
//}
//int main() {
//	
//	int i;
//	for (i = 0; i < N; i++) {
//		x[i] = i + 1;
//	}
//	run(0);
//	printf("* total:%d\n", count);
//	system("pause");
//	return 0;
//}

//int main() {
//	int x = 3, y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y) {
//		case 0:cout << "first";
//		case 1:cout << "second";
//			break;
//		default:cout << "hello";
//		}
//	case 2:cout << "third"<<endl;
//	}
//
//	system("pause");
//	return 0;
//}