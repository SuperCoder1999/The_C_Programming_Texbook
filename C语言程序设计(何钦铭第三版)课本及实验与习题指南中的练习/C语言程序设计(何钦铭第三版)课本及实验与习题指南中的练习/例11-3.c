//// 使用二级指针改写11-1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	char* p[5] = { "red","blue","yellow","green","black" };// 指针数组只能在 .c 文件中存在
//	char** pp = p;
//
//	char ch[10] = { 0 };
//	scanf("%s",ch);
//	for (int i = 0; i < 5; i++) {
//		if (!strcmp(ch, *(pp + i))) 
//		{//if (strcmp(ch, **(pp + i)))只需要解引用一次，因为strcmp参数是地址,忘记加 ！
//			printf("%d", i + 1);
//				return 0;
//		}
//	}
//	printf("No found");
//	return 0;
//}