//#include"Head.h"
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char s[100] = { 0 };
//	printf("input characters: ");//scanf �����ո�ͻ�ֹͣ
//	gets_s(s);
//	//scanf("%s", s); ��Ȼ�����ַ������룬���һ�����scanf���룬�������һ���ַ��Ͳ����ǡ�\n��,���Բ�����while(!s[i])���жϡ������ַ�����Ҳ�ǿ���֪����
//	int i = 0;
//	while (i<=strlen(s))// "abc\0" �� 'a','b','c','\0' �� 97��98��99��0  ���� \0 �����ַ�����ASCIIֵΪ0
//	{
//		if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
//		else if (s[i] <= 'Z' && s[i] >= 'A') s[i] += 32;
//		i++;
//
//	}
//	printf("%s", s);
//	return 0;
//}