//// 这题可作为简单的 判断输出题 来做
//#include"Head.h"
//#include<cstdio>
//
// // 要掌握的是：关系运算符和算术运算符、 逻辑运算符&&……的关系。以及==和<=……的微妙关系  逻辑( || < && ) <- 关系( == "<" < ) <- 算术 <- ! 
//
//
//int main() {
//	char ch = 'w';
//	int a = 2, b = 3, c = 1, d, x = 10;
//	printf("%d\n", a > b == c); // 0
//	printf("额外：%d\n", 0 == -1 > 0); // == 确实比 >< 优先级低
//	printf("额外2：%d\n", 3 <= 1 <= 5); // 这里是判断 3 <= 1 <= 5 是否执行到最后，还是说它像 && 一样有一票否决
//	printf("%d\n", d = a > b); // 0
//	printf("%d\n", ch > 'a' + 1); // 1
//	printf("%d\n", d = a + b > c); // 算术运算符 优先于 关系运算符 ，所以输出 1
//	printf("%d\n", b - 1 == a != c); // 0 ，== 与 != 优先级相同
//	printf("%d", 3 <= x <= 5); // 1 ,这种写法不适用于计算机
//	return 0;
//}