//#include"Head.h"
//#include<cstdio>
//
//// 选择排序
//int main() {
//	int n = 0;
//	int arr[100] = { 0 };
//	// int flag = 0;
//	printf("Enter n:");
//	scanf("%d",&n);
//	printf("Enter %d integers:",n);
//	for (int i = 0; i < n; i++)
//		scanf("%d",&arr[i]);
//	for (int j = 0; j < n - 1; j++) // 实质上每次都在 n-j 个中寻找最小的在将它放在首位。依次类推
//	{
//		int min = j;// 存放最小元素的下标。起始时，假设首元素最小
//		for (int k = j + 1; k < n; k++)
//			if (arr[min] > arr[k])
//				min = k;// 发现有比首元素更小的，就将更小的下标，给min
//			
//		// 等将余下的数中最小的下标找到，将这个最小的放在第一个位置即可
//		{
//				int tmp = arr[j];
//				arr[j] = arr[min];
//				arr[min] = tmp;
//				// flag = 1;这里要开关没有用，只能得出arr[0]小于任何数
//			}
//	}
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}