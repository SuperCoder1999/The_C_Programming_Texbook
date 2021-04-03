//#include"Head.h"
//#include<cstdio>
//#include<cmath>
//
//int prime(int n) {
//	for (int i = 2; i <= sqrt(n); i += 2)
//	{
//		if (n % i == 0) return 0; //  有return的地方相当于break; 
//		if (i == 2)i--; // 防止跳过 i==3
//	}
//	if (n == 1) return 0;
//	else return 1; //这里可以省略else了； 因为不是素数时return 0；跳出程序了。所以能运行到这里，说明已经不是是素数了
//}
//int main() {
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (prime(i)) {
//			printf("%d ", i);
//			count++;
//		}
//		if (count!=0&&count % 10 == 0) printf("\n");// 不同于不用判断而输出一系列数字，那样count在进入判断前就变为1了。而这里count==0是会被判断到的
//	}
//	return 0;
//}