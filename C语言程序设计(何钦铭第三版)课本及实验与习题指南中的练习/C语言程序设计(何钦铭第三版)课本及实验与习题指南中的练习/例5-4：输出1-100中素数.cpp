//#include"Head.h"
//#include<cstdio>
//#include<cmath>
//
//int prime(int n) {
//	for (int i = 2; i <= sqrt(n); i += 2)
//	{
//		if (n % i == 0) return 0; //  ��return�ĵط��൱��break; 
//		if (i == 2)i--; // ��ֹ���� i==3
//	}
//	if (n == 1) return 0;
//	else return 1; //�������ʡ��else�ˣ� ��Ϊ��������ʱreturn 0�����������ˡ����������е����˵���Ѿ�������������
//}
//int main() {
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (prime(i)) {
//			printf("%d ", i);
//			count++;
//		}
//		if (count!=0&&count % 10 == 0) printf("\n");// ��ͬ�ڲ����ж϶����һϵ�����֣�����count�ڽ����ж�ǰ�ͱ�Ϊ1�ˡ�������count==0�ǻᱻ�жϵ���
//	}
//	return 0;
//}