//#include"Head.h"
//#include<cstdio>
//
//// ���� ����������
//int my_pow(int x, int y) {
//	int res = 1;
//	while (y) {
//		if (1 & y) // �ж����һλ�Ƿ��� 1
//			res *= x;
//		y >>= 1; // y ��Ҫ�����λ���ж϶���������һλ�� 1
//		x *= x; // ÿ�ζ�Ҫ�����������Ƿ�����if��x*=x��ԭ����y�Ķ��������ܿ�����
//	}
//	return res;
//}
//int main() {
//	int n = 0;
//	printf("Enter n:");
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++)
//		printf("pow(2,%d) = %d\n", i, my_pow(2, i));
//	return 0;
//}