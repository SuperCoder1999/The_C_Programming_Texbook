//#include"Head.h"
//#include<cstdio>
//#include<cmath>
//
// 稍微做了一点优化，还有另一种算法
// 
//int is_prime(int n) {
//	for (int i = 2; i <= sqrt(n); i += 2)
//	{
//		if (n % i == 0) return 0;
//		if (i == 2) i--;
//			// i++; 这里加 1 for循环结束又加2，直接跳过了3
//	}
//	if (n == 1) return 0;
//	return 1;
//}
//int main() {
//	for (int i = 1; i <= 100; i+=2) {
//		if (is_prime(i)) printf("%d ", i);
//	}
//	return 0;
//}