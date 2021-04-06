//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int nums[10] = { 0 };// 因为需要和平均数比较，所以10个数都操作完，再比较。此时，需要一个数组存储
//	int sum = 0;
//	printf("Enter 10 integers: ");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &nums[i]);
//		sum += nums[i];
//	}
//	printf("average=%.2f\n", sum / 10.0);// 注意这里sum是整数
//	printf(">average: ");
//	for (int i = 0; i < 10; i++)
//		if (nums[i] > sum / 10.0)
//			printf("%d ", nums[i]);
//	return 0;
//}