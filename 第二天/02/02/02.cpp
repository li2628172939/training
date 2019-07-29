//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>


//int main() {
//	int a[] = { 1,2,3,4 };
//	int *b = a;
//	*b += 2;
//	*(b + 2) = 2;
//	b++;
//	printf("%d,%d\n", *b, *(b + 2));
//	system("pause");
//}


//µ¹ÖÃÕû¸ö×Ö·û´®
//void function(char* str, int begin,int end ) {
//	while (begin < end) {
//		char temp = str[begin];
//		str[begin] = str[end];
//		str[end] = temp;
//
//		begin++;
//		end--;
//	}
//	
//}
//
////µ¹ÖÃ×Ö·û´®ÀïµÄµ¥´Ê
//void function_worlds(char* str) {
//	int w_begin = 0;
//	int w_end = 0;
//	while (str[w_end] != '\0') {
//		if (str[w_end] != ' ') {
//			w_begin = w_end;
//			while (str[w_end] != '\0'&&str[w_end] != ' ') {
//				w_end++;
//			}
//			function(str, w_end , w_begin);
//			w_end++;
//		}
//	}
//}
//
//
//int main(void) {
//	char str[1000];
//	str[1000]=getchar();
//	int l = strlen(str);
//	function_worlds(str);
//
//	return 0;
//}

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
int main(){    
	string s;
	stack<string> st;
	while(cin>>s)    {
		st.push(s);
		string s1=s;
		if(*(s.rbegin())=='.')
			break;
	}
	cout<<st.top();
	st.pop();
	while(!st.empty())
	{        cout<<" "<<st.top();
	st.pop();
	}
	return 0;}
