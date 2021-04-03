//#include"Head.h"
//#include<cstdio>
//#include<cmath>
// 按理说，这题还能继续优化：偶数全排除，另外还有一种算法
// 
//int main() {
//	int n = 0;
//	printf("Enter a number:");
//	scanf("%d", &n);
//	int i=0;
//	for (  i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) // ! 的优先级很高，如果需要对运算的表达式进行逻辑反操作，需加括号
//		{
//			printf("%d", i); // 用于判断较大数字输出结果是否是对的
//			break;
//		}
//	}
//	if (n!=1&&i > sqrt(n)) printf("It's a prime number!");
//	else printf("It's not a prime number!");
//	return 0;
//}