// // �����Լ��ķ�����ʱ��������
//
//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int count = 0;// ���ڼ�¼����ĵ�������
//	char tmp[20] = { 0 };// �ݴ���
//	// ��Ȼ�����˵�����С��20������Ҫ���ö�̬�����ڴ棬����ֻ�ܶ���ָ��
//
//	printf("Enter some colors: \n");
//	scanf("%s", tmp);
//	// char** p; �������ָ�뼸��û�ã�ԭ����Ҳ���õ�color[i]����û���õ�color(����ָ��)��
//	// ָ��û�г�ʼ��������ʹ��
//	char** p=NULL;
//	while (tmp[20] != '#') {
//		*(p+count) = (char*)malloc(20);
//		strcpy(*p, tmp);
//		count++;
//		scanf("%s", tmp);
//	}
//	for (int i = 0; i < count; i++) {
//		printf("%s  ", *(p + count));
//	}
//	return 0;
//}