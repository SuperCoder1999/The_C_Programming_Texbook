//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int i = 0;
//	int count = 0;
//	char arr[81] = { 0 };
//	printf("Enter a string :");
//	while ((arr[i] = getchar()) != '\n') i++; // 这是全部存储字符（包括\n），按需求进行标记下标(但是这里还是多标记了一个)
//	// = 赋值符的优先级小于逻辑操作符小于关系操作符
//	for (int j = 0; j <= i-1; j++)
//		if (arr[j] <= '9' && arr[j] >= '0')
//			count++;
//	cout << count;
//	return 0;
//}