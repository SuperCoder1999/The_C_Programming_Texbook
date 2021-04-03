//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	
//	/*
//	double fact = 1; // 如果内层循环是从一开始，那么fact需要在第一层循环内初始化
//	for (int i = 1; i <= 100; i++) {
//		for (int j = 1; j <= i; j++)
//			fact *= j;
//		sum += fact;
//	}
//	*/
//	
//	//// 一层循环只能求前 0!+1!+2!+3!+……+100!
//	//double sum = 1;
//	//double fact = 1;
//	//for (int i = 1; i <= 99; i++)
//	//	//sum = sum + sum * i;// 从第一个得到的sum=2，是2!,这样，导致原本3!变成了2*2；
//	//	sum = sum + sum * (i + 1);// 这样也不行
//	//printf("1!+2!+3!+……+100! = %e", sum+1);
//
//	// 只能用嵌套循环来了
//	double sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		double fact = 1;
//		for (int j = 1; j <= i; j++)
//			fact *= j;
//		sum += fact;
//	}
//	printf("%e", sum);
//	return 0;
//}