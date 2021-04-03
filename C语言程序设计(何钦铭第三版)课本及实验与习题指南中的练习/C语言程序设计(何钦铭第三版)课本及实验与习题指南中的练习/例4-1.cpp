//#include"Head.h"
//#include<cstdio>
//
//// 本来以为需要用到abs()函数，其实for循环中进行的判断是每一项的绝对值，而正负号其实由开关决定
//int main() {
//	float pi= 0;
//	int flag = 1; // 重复型开关 
//	float i=0;
//	for (i = 1; 1.0 / (2 * i - 1) >= 1e-4; i++) { 
//		pi += flag*1.0 / (2 * i - 1);// 一个表达式中类型不一样，需要类型转换时编译器都会有警告
//		flag = -flag;
//	}
//	pi += 1.0 / (2 * i - 1);// for 循环刚好加到前一项，少了关键的一项。do……while/前置i++的while可以一步到位
//	printf("pi=%.4f", 4.0*pi);// 求出的 pi 是 PI/4
//	return 0;
//}