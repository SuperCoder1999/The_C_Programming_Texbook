//#include"Head.h"
//#include<cstdio>
//
//// 这个代码相当于一道判断输出题
//// 所考察的知识点是：全局变量和局部变量冲突时，局部变量优先(也可以想到，因为有人定义全局变量后忘记了，在函数内又定义了一个同名的。这时其本意就是以局部变量优先)
//
//
//int x;
//int f();// 函数声明
//
//int main() {
//	int a = 1;
//	x = a;// 全局变量，当然是能赋值的，只是在f()函数中的定义与全局变量产生了冲突
//	a = f();
//	{
//		int b = 2;
//		b = a + b;
//		x += b;
//	}
//	printf("%d %d", a, x); //我的答案： a是4，x是7
//	return 0;
//}
//
//int f() {
//	int x = 4;
//	return x;
//}