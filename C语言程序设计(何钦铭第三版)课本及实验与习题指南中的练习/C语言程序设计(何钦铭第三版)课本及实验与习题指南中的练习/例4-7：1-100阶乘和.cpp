//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	// 方法一：最暴力的
//	/* 
//	double fact = 1; // 如果内层循环是从 1 开始，那么fact需要在第一层循环内初始化
//	for (int i = 1; i <= 100; i++) {
//		for (int j = 1; j <= i; j++)
//			fact *= j;
//		sum += fact;
//	}
//	*/
//	
//	// 方法二：每次存(n-1)!，求下一个n！时只要*n就可以了
//
//	// 方法三：求阶乘 (存(n-1)!法) 的同时进行求和
//	//// 一层循环只能求前 0!+1!+2!+3!+……+100!-----------------这个算法错得离谱，据sum*i中的一项进行说明 sum=(2!+3!)*4 !!!!
//	//double sum = 1;
//	//double fact = 1;
//	//for (int i = 1; i <= 99; i++)
//	//	//sum = sum + sum * i;// 从第一个得到的sum=2，是2!,这样，导致原本3!变成了2*2；
//	//	sum = sum + sum * (i + 1);// 这样也不行
//	//printf("1!+2!+3!+……+100! = %e", sum+1);
//
//	double sum = 0;
//	double fact = 1;
//	for (int i = 1; i <= 100; i++)
//		// sum += (fact * i); fact每次都没有变化
//		sum += (fact *= i);
//
//	//// 只能用嵌套循环来了---最暴力的
//	//double sum = 0;
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	double fact = 1;
//	//	for (int j = 1; j <= i; j++)
//	//		fact *= j;
//	//	sum += fact;
//	//}
//	printf("%e", sum);
//	return 0;
//}
