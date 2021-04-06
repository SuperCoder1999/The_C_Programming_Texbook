//// 程序结果判断题
//#include"Head.h"
//#include<cstdio>
//
////void swap1(int, int), void swap2(int*, int*), void swap3(int*, int*);
//// 多个同返回类型函数的声明能用逗号相隔,只能共用一个函数类型
//void swap1(int, int),  swap2(int*, int*),  swap3(int*, int*);
//
//int main() {
//	int a = 1, b = 2;
//	int* pa = &a, * pb = &b;
//	swap1(a, b);
//	printf("Afert calling swap1:a=%d,b=%d\n", a, b);
//
//	a = 1, b = 2;
//	swap2(pa, pb);
//	printf("Afert calling swap1:a=%d,b=%d\n", a, b);
//
//	a = 1, b = 2;
//	swap3(pa, pb);
//	printf("Afert calling swap1:a=%d,b=%d\n", a, b);
//
//	return 0;
//}
//void swap1(int x, int y) {
//	int t=0;
//	t = x;
//	x = y;
//	y = t;
//}
//
//void swap2(int* px, int* py) {
//	int t = 0;
//	t = *px;
//	*px = *py;
//	*py = t;
//}
//
//void swap3(int* px, int* py) {
//	int* pt = NULL;
//	pt = px;
//	px = py;
//	py = pt;
//}