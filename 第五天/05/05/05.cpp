#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
#include<iostream>
#include<string.h>

using namespace std;
#if 0
int mian() {
	int x = 1;
	do {
		printf("%2d\n", x++);
	} while (x--);

	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	char p1[15] = "abcd", *p2 = "ABCD", str[50] = "xyz";
	strcpy(str + 2, strcat(p1 + 2, p2 + 2));
	printf("%s", str);

	system("pause");
	return 0;
}

void main() {
	int n[][3] = { 10,20,30,40,50,60 };
	int(*p)[3];
	p = n;
	cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;

	system("pause");
	
}

int main() {
	int a;
	float b, c;
	scanf("%2d%3f%4f", &a, &b, &c);
	printf("\na=%d,b=%d,c=%f\n", a, b, c);

	system("pause");
	return 0;
}
#endif

#if 0
int getmax(int *arr, int size) {
	if (arr == NULL || size <= 1)
		return 0;
	int max = arr[0];
	int sum = arr[0];
	for (int i = 1; i < size; i++) {
		if (sum < 0)
			sum = arr[i];
		else
			sum += arr[i];
		if (sum > max)
			max = sum;
	}
	return max;
}

int main() {
	int arr[100000];
	int size, Max = 0;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];

	}

		Max = getmax(arr, size);
	
		cout << Max << endl;


	system("pause");
	return 0;
}
#endif

 bool huiwen(string str1) {

	int len2 = str1.length();

	for (int i = 0; i < len2; i++) {
		if (str1[i] != str1[len2 - 1]) {
			return false;
			
		}
		len2 -= 1;
	}
	return true;
}

int main() {
	int sum = 0;
	string str1, str2,temp;
	while (cin >> str1 >> str2) {
		int len1 = str1.length()+1;
		temp = str1;
		for (int i = 0; i < len1; i++) {
			str1 = temp;
			str1.insert(i, str2);
			if (huiwen(str1))
				sum += 1;
		}
		cout << sum << endl;

	}

	system("pause");
	return 0;
}