//#include"Head.h"
//#include<cstdio>
//
//// 构建 快速幂运算
//int my_pow(int x, int y) {
//	int res = 1;
//	while (y) {
//		if (1 & y) // 判断最后一位是否是 1
//			res *= x;
//		y >>= 1; // y 需要向后移位，判断二进制中哪一位是 1
//		x *= x; // 每次都要操作，不论是否满足if；x*=x的原理在y的二进制中能看出来
//	}
//	return res;
//}
//int main() {
//	int n = 0;
//	printf("Enter n:");
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++)
//		printf("pow(2,%d) = %d\n", i, my_pow(2, i));
//	return 0;
//}