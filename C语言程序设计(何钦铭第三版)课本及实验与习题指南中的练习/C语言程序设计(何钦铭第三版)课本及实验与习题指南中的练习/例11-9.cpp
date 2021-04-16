///*
//double calc(double (*funp) (double), double a, double b);
// 这里calc 函数引用的函数 是省略了其中的变量名 
//*/
//// double calc(double (*fun)(double), double a, double b) 必须是(*fun)形式.因为这是在定义形参。需要用定义函数指针的格式
//#include"Head.h"
//#include<cstdio>
//#include<math.h>
//
//
//
//double fun1(double x) {
//	return x * x;
//}
//double fun2(double x) {
//	return sin(x) / x;
//}
//double calc(double (*fun)(double), double a, double b) {
//	return (b - a) / 2 * ((*fun)(a) + (*fun)(b));
//}
//int main() {
//	double a = 0, b = 0;
//	double(*fun)(double);// 定义的函数指针，用于调用不同函数
//	cout << "Enter a,b: ";
//	cin >> a >> b;
//	fun = fun1;
//	cout << calc(fun, a, b);
//	fun = fun2;
//	cout << calc(fun, a, b);
//	return 0;
//}