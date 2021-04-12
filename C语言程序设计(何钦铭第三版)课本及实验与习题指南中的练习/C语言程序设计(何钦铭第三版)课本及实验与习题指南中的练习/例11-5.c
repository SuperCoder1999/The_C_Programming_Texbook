//#include<stdio.h>
//int main() {
//	char* ch[4] = { "abcdef","bcdef","cdef","def" };
//	for (int i = 0; i < 4; i++)
//		// printf("%c", ch[i]); %c 取的是字符变量名称，或字符本身， 不能和%s 搞混了
//		printf("%c", *ch[i]);
//	return 0;
//}
//// 上面的算法能够处理单字节的字符，而汉字这样的双字节字符，不知道其存储模式。


/* 准确的算法
#include<stdio.h>
int main() {
	char* ch[4] = { "一我的。。。。","帆我的。。。","风顺、、、、","顺我。。。。" };
	char mean[9] = { 0 };// 用于存储汉字--2*4+1 结束标志
	int i=0;
	for (i = 0; i < 4; i++) {
		mean[2 * i] = *ch[i];
		// 错误：mean[2 * i + 1] = *ch[i] + 1; 
		mean[2 * i + 1] = *(ch[i] + 1);
	}
	// 别忘了加结束标志
	mean[2 * i] = '\0';
	printf("%s", mean);
	return 0;
}
*/