//#include"Head.h"
//#include<cstdio>
//
//char Judge1(char ch) {
//
//	if (ch == ' ') return 'K';
//	else if (ch == '\n') return 'H';
//}
//char Judge2(int n) {
//	// 三目操作符 可充当 if-else 双分支的情况，不能充当多重分支
//	char res=(n % 2) ? 'Y' : 'N';
//	return res;
//}
//char Judge3(int year) {
//	char res=(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 'Y' : 'N';
//	return res;
//}
//int main() {
//	int choice = 0;
//	printf("判断ch是空格或者回车;1\n判断number是偶数:2\n判断year是闰年:3\n");
//	printf("输入你的选项:");
//	scanf("%d", &choice);
//	char ch = '0';
//	int n = 0;
//	int year = 0;
//	switch (choice) {
//	case 1:
//		printf("Enter ch: ");
//		getchar();// 这是消除输入choice后的那个回车
//		ch = getchar();
//		putchar(Judge1(ch));
//		break;
//	case 2:
//		printf("Enter n: ");
//		scanf("%d", &n);
//		printf("Y代表奇数odd，N代表even：%c", Judge2(n));
//		break;
//	case 3:
//		printf("Enter Year :");
//		scanf("%d", &year);
//		printf("Y代表是闰年：%c", Judge3(year));
//		break;
//	default:break;
//	}
//	return 0;
//}