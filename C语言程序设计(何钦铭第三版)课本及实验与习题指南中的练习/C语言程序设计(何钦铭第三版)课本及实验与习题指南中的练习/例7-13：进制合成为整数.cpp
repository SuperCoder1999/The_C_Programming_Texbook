//#include"Head.h"
//#include<cstdio>
//
//
//// 课本中，并没有用两个数组
//int main() {
//	int i = 0;
//	char arr[11] = { 0 };
//	char arr2[11] = { 0 };
//	int k = 0;
//	while ((arr[i] = getchar()) != '\n') i++;
//	for (int j = 0; j <= i - 1; j++)// i 是下标(i多标记了一个)
//		if (arr[j] <= '9' && arr[j] >= '0')
//			arr2[k++] = arr[j];// 这里 k是下标且多加了 1
//	int sum = 0;
//	for (int u = 0; u <=k-1; u++)
//		sum = sum * 10 + arr2[u]-'0';// 这个是在LeetCode上看到的。原来就在课本上
//	printf("%d", sum);
//	return 0;
//}