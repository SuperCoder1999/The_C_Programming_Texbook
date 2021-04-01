//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int n;
//	printf("Enter n:");
//	scanf("%d", &n);
//	double sum = 0;
//	int flag = 1; // 开关 ,可以直接设置为 1/-1 
//	int deno = 0;
//	for (int i = 1; i <= n; i++) {
//		deno = 2 * i - 1;
//		sum += flag*1.0 / deno;
//		flag = -flag; // 开关有一次性的和反复利用的(一次性的就像flag=-1)
//	}
//	printf("sum=%.6f", sum);
//	return 0;
//}