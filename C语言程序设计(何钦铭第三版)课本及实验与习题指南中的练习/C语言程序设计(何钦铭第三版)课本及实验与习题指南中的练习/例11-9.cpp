///*
//double calc(double (*funp) (double), double a, double b);
// ����calc �������õĺ��� ��ʡ�������еı����� 
//*/
//// double calc(double (*fun)(double), double a, double b) ������(*fun)��ʽ.��Ϊ�����ڶ����βΡ���Ҫ�ö��庯��ָ��ĸ�ʽ
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
//	double(*fun)(double);// ����ĺ���ָ�룬���ڵ��ò�ͬ����
//	cout << "Enter a,b: ";
//	cin >> a >> b;
//	fun = fun1;
//	cout << calc(fun, a, b);
//	fun = fun2;
//	cout << calc(fun, a, b);
//	return 0;
//}