//#include"Head.h"
//#include<cstdio>
//#include<string.h>

// ��覴�
//int main() {
//	char arr[81] = { 0 };
//	printf("Enter a strin :");
//	scanf("%s", arr);// scanf�洢���ǻس�/�ո�֮ǰ���ַ��������ַ������Զ����'\n'
//	int right = strlen(arr)-1;// right ��Ҫ��strlen(arr)�����ϼ�һ.��Ϊstrlen�õ�������ţ������±�
//	int left = 0;
//	while (arr[left++] == arr[right--] && left <= right);
//	if (left > right) printf("�ǻ���");
//	else
//		printf("����");
//	return 0;
//}


// // �α�����'\n'Ϊ����ʱ�Ľ�����������ȫ���Ա��±����������Ͳ�����\nΪ�������㷨��
//int main() {
//	char arr[81] = { 0 };
//	printf("Enter a strin :");
//	int i = 0;
//	char ch = '0';
//	while ((ch = getchar()) != '\n')arr[i++] = ch;// �������ݴ�ķ�ʽ����'\n'������һ�ַ�ʽ(�α���)������������ı��жϵ���ż���
//	int right = i - 1;// right ��Ҫ��strlen(arr)�����ϼ�һ.��Ϊstrlen�õ�������ţ������±�
//	int left = 0;
//	while (arr[left++] == arr[right--] && left <= right);
//	if (left > right) printf("�ǻ���");
//	else
//		printf("����");
//	return 0;
//}