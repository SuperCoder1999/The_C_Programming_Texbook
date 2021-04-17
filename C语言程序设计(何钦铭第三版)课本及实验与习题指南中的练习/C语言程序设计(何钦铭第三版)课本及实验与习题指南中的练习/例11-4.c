//#include<stdio.h>
//
//// 其实定义了指针数组，没必要再定义二级指针，因为指针数组名就是二级指针
//void Choice(char** ppch, int n) {
//	// int flag = 0;选择排序没有开关
//	for (int i = 0; i < n - 1; i++) {
//		int min = i;
//		for (int j = i+1; j < n; j++)
//		{
//			if (strcmp(*(ppch + min), *(ppch + j)) > 0)
//				// if (strcmp(*(ppch + i), *(ppch + j)) > 0)
//				// 如果这里 i 代替min ，则交换就该在if循环内
//				// 解释有些晦涩，别再写成 i 就好
//			{
//				min = j;
//			}
//			
//		}
//		char* tmp = *(ppch + i);// 这里改的是ch[5]中存的地址。当ch[5]输出时，就会按照想要的顺序
//		*(ppch + i) = *(ppch + min);
//		*(ppch + min) = tmp;
//		/*
//		char tmp[10] = **(ppch + i);
//		**(ppch + i) = **(ppch + j);
//		**(ppch + j) = tmp;
//		 这种方法确实可以交换，但是赋值符不能交换字符串 */
//	}
//}
//int main() {
//	char* ch[5] = { "red","blue","yellow","green","black" };
//	char** ppch = ch;
//	Choice(ppch, 5);
//	for (int i = 0; i < 5; i++)
//		// printf("%s ", **(ppch + i)); %s 取的是地址
//		printf("%s ", *(ppch + i));
//	return 0;
//}