//#include"Head.h"
//#include<cstdio>

/*  这两种方式，在利用完 i 之后进行判断，实质是后置i++；
float funpi1(float e) {
	int i = 1;
	int flag = 1;
	float sum = 0;
	while (1.0 / (2 * i - 1) >= e) {
		sum += (flag * 1.0 / (2 * i - 1));
		i++;
		flag *= -1;
	}
	return sum;
}
float funpi(float e) {
	int i = 1;
	int flag = 1;
	float sum = 0;
	do {
		sum += (flag*1.0 / (2 * i - 1));
		i++;
		flag *= -1;
	} while (1.0/(2 * i - 1) >= e);
	return sum;
}
*/

//double funpi(float e) {
//	int i = 0; // 前置i++ ，i初始化为 0
//	int flag = 1;
//	double sum = 0;
//	do {
//		i++;
//		sum += (flag * 1.0 / (2 * i - 1));
//		flag *= -1;
//	} while (1.0 / (2 * i - 1) >= e);
//	return sum;
//}
//
//int main() {
//	double e = 0;  // 计算过程中的 double 能让结果更精确
//	printf("Enter e: ");
//	scanf("%lf", &e);
//	printf("%.6f\n", 4*funpi(e));
//	printf("%f", 4 * funpi(e));
//	return 0;
//}