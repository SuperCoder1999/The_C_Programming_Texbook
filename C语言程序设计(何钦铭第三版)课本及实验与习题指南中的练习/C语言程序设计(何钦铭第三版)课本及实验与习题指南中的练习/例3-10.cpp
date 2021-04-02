//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	char ch = '0';
//	int n = 10;
//	int digit = 0,blank=0,other=0;
//	printf("Enter 10 characters:");
//	while (n--) {
//		if ((ch = getchar()) >= '0' && ch <= '9') digit++;// 赋值符的优先级很低 ch = getchar()要加一个括号
//		else if (ch == ' '||ch=='\n') blank++;
//		else other++;
//	}
//	printf("blank=%d,digit=%d,other=%d", blank, digit, other);
//	return 0;
//}