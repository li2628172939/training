#include<stdio.h>
#include<iostream>
#include<cstdlib>

using namespace std;

bool sushu(int n) {
	int m = 2;
	for ( m = 2; m <= n; m++) {
		if (n%m == 0)
			break;
	}
	if (m == n)
		return true;
	else
		return false;
}



int main() {
	int sum=0,a=0;
	cin >> sum;
	int b = sum;

	for (int i = 2;i<=sum/2; i++) {
		if (sushu(i)) {
			for (int j = sum; j >= i; j--) {
				if (sushu(j)) {
					if (i + j == sum) {

						if (j - i < b - a) {
							a = i;
							b = j;
							break;
						}
					}
				}
			}
		}
	}
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}


//int main() {
//	int n[][3] = { 10,20,30,40,50,60 };
//	int(*p)[3];
//	p = n;
//	cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;
//
//
//	system("pause");
//	return 0;
//}

//#define SQR(A) A*A
//void main() {
//	int x = 6, y = 3, z = 2;
//	x /= SQR(y + z) / SQR(y + z);
//	cout << x << endl;
//
//	system("pause");
//	//return 0;
//}

//void func(const int& v1, const int& v2) {
//	std::cout << v1 << ' ';
//	std::cout << v2 << ' ';
//}
//int main(int argc,char* argv[]) {
//	int i = 0;
//	func(++i, i++);
//	system("pause");
//	return 0;
//}