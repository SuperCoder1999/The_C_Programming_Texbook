// // 按照自己的方法暂时做不出来
//
//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int count = 0;// 用于记录存入的单词数量-----像这种动态分配内存的情况，往往需要有计数器，所以就产生了数据结构
//	char tmp[20] = { 0 };// 暂存区
//	// 虽然告诉了单词数小于20，但是要求用动态分配内存，所以只能定义指针。否则二级数组arr[20][15]就可以
//
//	printf("Enter some colors: \n");
//	scanf("%s", tmp);
//	// char** p; 这里二级指针几乎没用，原题中也是用的color[i]--用于存字符串首地址，并没有用到color(二级指针)。
//	// char** p; 指针没有初始化，不能使用
//	// 指针的初始化，必须要有变量、数组才行，这么来看，必须要定义数组了，只是这个数组存的是地址。（动态分配返回的都是地址？）
//	char* string[20];
//	char** p = string; // 这里**p就多余了
//	while (tmp[0] != '#') {// 这里tmp字符串内还有 \0 结尾，所以不能将tmp和'#'比较
//		*(p+count) = (char*)malloc(20);
//		strcpy(*(p+count), tmp);
//		count++;
//		scanf("%s", tmp);
//	}
//	for (int i = 0; i < count; i++) {
//		printf("%s  ", *(p + i));// 二级指针 应用时 * 解引用之后得到的是什么。这个思维还不是很熟练
//	}
//	return 0;
//}