#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>

using namespace std;

#if 0
int main() {
	char a[] = { '1','2','3','4','5','6','7','8','9',0 }, *p;
	int i;
	i = 8;
	p = a + i;
	printf("%s", p-3);

	system("pause");
	return 0;
}
#endif


void CountMax(char *str) {
	string output;
	string temp;
	int len = strlen(str);
	for (int i = 0; i < len; ++i) {
		if (str[i] >= '0'&&str[i] <= '9') {
			temp += str[i];
			if (output.length() < temp.length())
				output = temp;
		}
		else
			temp = "";
	}
	cout << output << endl;
}

int main() {
	char str[256];
	cin >> str;

	CountMax(str);

	system("pause");
	return 0;
}