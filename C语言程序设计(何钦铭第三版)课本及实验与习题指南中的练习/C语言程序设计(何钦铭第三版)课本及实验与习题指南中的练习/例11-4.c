//#include<stdio.h>
//
//// 其实定义了指针数组，没必要再定义二级指针，因为指针数组名就是二级指针
//void Bubble(char** ppch, int n) {
//	// int flag = 0;快速排序没有开关
//	for (int i = 0; i < n - 1; i++) {
//		int min = i;
//		for (int j = i+1; j < n; j++)
//		{
//			if (strcmp(*(ppch + min), *(ppch + j)) > 0)
//				// if (strcmp(*(ppch + i), *(ppch + j)) > 0)
//				// 如果这里 i 代替min ，则交换就该在if循环内，否则最小字符串在变化，而min的标记没有动，就会导致比较不对
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
//		 赋值符不能交换字符串 */
//	}
//}
//int main() {
//	char* ch[5] = { "red","blue","yellow","green","black" };
//	char** ppch = ch;
//	Bubble(ppch, 5);
//	for (int i = 0; i < 5; i++)
//		// printf("%s ", **(ppch + i)); %s 取的是地址
//		printf("%s ", *(ppch + i));
//	return 0;
//}