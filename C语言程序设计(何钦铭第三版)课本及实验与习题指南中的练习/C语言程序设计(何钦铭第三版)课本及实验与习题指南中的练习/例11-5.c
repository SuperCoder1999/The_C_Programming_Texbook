//#include<stdio.h>
//int main() {
//	char* ch[4] = { "abcdef","bcdef","cdef","def" };
//	for (int i = 0; i < 4; i++)
//		// printf("%c", ch[i]); %c ȡ�����ַ��������ƣ����ַ����� ���ܺ�%s �����
//		printf("%c", *ch[i]);
//	return 0;
//}
//// ������㷨�ܹ������ֽڵ��ַ���������������˫�ֽ��ַ�����֪����洢ģʽ��


/* ׼ȷ���㷨
#include<stdio.h>
int main() {
	char* ch[4] = { "һ�ҵġ�������","���ҵġ�����","��˳��������","˳�ҡ�������" };
	char mean[9] = { 0 };// ���ڴ洢����--2*4+1 ������־
	int i=0;
	for (i = 0; i < 4; i++) {
		mean[2 * i] = *ch[i];
		// ����mean[2 * i + 1] = *ch[i] + 1; 
		mean[2 * i + 1] = *(ch[i] + 1);
	}
	// �����˼ӽ�����־
	mean[2 * i] = '\0';
	printf("%s", mean);
	return 0;
}
*/