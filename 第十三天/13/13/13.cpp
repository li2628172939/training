#include<stdio.h>
#include<iostream>

using namespace std;







#if 0
class B {
	B() {
		cout << "default constructor" << " ";
	}
	~B() {
		cout << "destructed" << " ";
	}
	B(int i) :data(i) {
		cout << "constructes by parmeter" << data << " ";
	}
	private:int data;
};
B Play(B b) {
	return b;
}
int main(int argc, char *argv[]) {
	B temp = Play(5);
	system("pause");
	return 0;
}
#endif


#if 0
int main() {
	int i = 0, a = 1, b = 2, c = 3;
	i = ++a || ++b || ++c;
	cout << i << a << b << c <<endl;

	system("pause");
	return 0;
}
#endif


