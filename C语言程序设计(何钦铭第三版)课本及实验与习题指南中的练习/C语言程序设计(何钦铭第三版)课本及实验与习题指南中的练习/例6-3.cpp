//// 这题可作为简单的 判断输出题 来做
//#include"Head.h"
//#include<cstdio>
//
//// 需要掌握的是，逻辑运算符和算术运算符的关系，以及 && 的一票否决  逻辑( || < && ) <- 关系( == "<" < ) <- 算术 <- ! 
//
//int main() {
//	char ch = 'w';
//	int a = 2, b = 0, c = 0;
//	float x = 3.0;
//	printf("%d\n", a && b); // 0 之考察了 && 的规则
//	printf("%d\n", a || b && c); // 1  这里 && > || 、、这里我错了
//	printf("%d\n", !a && b); // 0
//	printf("对照；%d\n", !0 || b); // 1 ,这里 ! 的优先级很高
//
//	printf("%d\n", a || 3 + 10 && 2); // 1 算术运算符 优先于 逻辑运算符
//	printf("%d\n", !(x == 2)); // 1 括号的优先级最高
//	printf("%d\n", !x == 2); // 0，! 先和x结合了 == 的优先级没
//	printf("%d\n", ch || b); // 1 
//	return 0;
//}