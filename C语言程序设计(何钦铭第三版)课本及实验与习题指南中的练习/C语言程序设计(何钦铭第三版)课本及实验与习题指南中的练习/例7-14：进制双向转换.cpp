//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	char arr[110] = { 0 };
//	char arr2[110] = { 0 };
//	int i = 0;
//	int sum = 0;
//	cout << "Enter a string :";
//	while ((arr[i] = getchar()) != '#') i++;
//	int k = 0;
//	for (int j = 0; j < i; j++) {
//		if (arr[j] >= '0' && arr[j] <= '9')
//		{
//			arr2[k++] = arr[j];
//			sum = sum * 16 + arr[j] - '0';// �������ܽ�sum*16ͬ�����ȥ�����ȥ�������У���Ϊ*16����������ء�
//		}
//		else if (arr[j] <= 'f' && arr[j] >= 'a')// �ַ�һ���������ӡ���Ҫת����ASCII�����⣬ͨ��������Կ��ٵص�
//		{
//			arr2[k++] = arr[j];
//			sum = sum * 16 + arr[j] - 'a' + 10;
//		}
//		else if (arr[j] >= 'A' && arr[j] <= 'F')
//		{
//			arr2[k++] = arr[j];
//			sum = sum * 16 + arr[j] - 'A' + 10;
//		}
//	}
//	cout << "New string :";
//	for (int u = 0; u < k; u++)
//		cout << arr2[u] << "  ";
//	cout << "Number:";
//	printf("\n%d", sum);
//	return 0;
//}