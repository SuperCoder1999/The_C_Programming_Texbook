//#include"Head.h"
//#include<cstdio>
//
//// ѡ������
//int main() {
//	int n = 0;
//	int arr[100] = { 0 };
//	// int flag = 0;
//	printf("Enter n:");
//	scanf("%d",&n);
//	printf("Enter %d integers:",n);
//	for (int i = 0; i < n; i++)
//		scanf("%d",&arr[i]);
//	for (int j = 0; j < n - 1; j++) // ʵ����ÿ�ζ��� n-j ����Ѱ����С���ڽ���������λ����������
//	{
//		int min = j;// �����СԪ�ص��±ꡣ��ʼʱ��������Ԫ����С
//		for (int k = j + 1; k < n; k++)
//			if (arr[min] > arr[k])
//				min = k;// �����б���Ԫ�ظ�С�ģ��ͽ���С���±꣬��min
//			
//		// �Ƚ����µ�������С���±��ҵ����������С�ķ��ڵ�һ��λ�ü���
//		{
//				int tmp = arr[j];
//				arr[j] = arr[min];
//				arr[min] = tmp;
//				// flag = 1;����Ҫ����û���ã�ֻ�ܵó�arr[0]С���κ���
//			}
//	}
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}