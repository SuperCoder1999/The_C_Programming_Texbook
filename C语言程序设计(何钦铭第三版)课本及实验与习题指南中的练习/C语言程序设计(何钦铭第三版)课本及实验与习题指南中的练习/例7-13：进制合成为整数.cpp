//#include"Head.h"
//#include<cstdio>
//
//
//// �α��У���û������������
//int main() {
//	int i = 0;
//	char arr[11] = { 0 };
//	char arr2[11] = { 0 };
//	int k = 0;
//	while ((arr[i] = getchar()) != '\n') i++;
//	for (int j = 0; j <= i - 1; j++)// i ���±�(i������һ��)
//		if (arr[j] <= '9' && arr[j] >= '0')
//			arr2[k++] = arr[j];// ���� k���±��Ҷ���� 1
//	int sum = 0;
//	for (int u = 0; u <=k-1; u++)
//		sum = sum * 10 + arr2[u]-'0';// �������LeetCode�Ͽ����ġ�ԭ�����ڿα���
//	printf("%d", sum);
//	return 0;
//}