// // 按照自己的方法暂时做不出来
//
//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int count = 0;// 用于记录存入的单词数量
//	char tmp[20] = { 0 };// 暂存区
//	// 虽然告诉了单词数小于20，但是要求用动态分配内存，所以只能定义指针
//
//	printf("Enter some colors: \n");
//	scanf("%s", tmp);
//	// char** p; 这里二级指针几乎没用，原题中也是用的color[i]，并没有用到color(二级指针)。
//	// 指针没有初始化，不能使用
//	char** p=NULL;
//	while (tmp[20] != '#') {
//		*(p+count) = (char*)malloc(20);
//		strcpy(*p, tmp);
//		count++;
//		scanf("%s", tmp);
//	}
//	for (int i = 0; i < count; i++) {
//		printf("%s  ", *(p + count));
//	}
//	return 0;
//}