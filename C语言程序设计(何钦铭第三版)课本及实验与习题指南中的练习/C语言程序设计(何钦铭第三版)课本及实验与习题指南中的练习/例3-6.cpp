//#include"Head.h"
//#include<cstdio>
//
//char Judge1(char ch) {
//
//	if (ch == ' ') return 'K';
//	else if (ch == '\n') return 'H';
//}
//char Judge2(int n) {
//	// ��Ŀ������ �ɳ䵱 if-else ˫��֧����������ܳ䵱���ط�֧
//	char res=(n % 2) ? 'Y' : 'N';
//	return res;
//}
//char Judge3(int year) {
//	char res=(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 'Y' : 'N';
//	return res;
//}
//int main() {
//	int choice = 0;
//	printf("�ж�ch�ǿո���߻س�;1\n�ж�number��ż��:2\n�ж�year������:3\n");
//	printf("�������ѡ��:");
//	scanf("%d", &choice);
//	char ch = '0';
//	int n = 0;
//	int year = 0;
//	switch (choice) {
//	case 1:
//		printf("Enter ch: ");
//		getchar();// ������������choice����Ǹ��س�
//		ch = getchar();
//		putchar(Judge1(ch));
//		break;
//	case 2:
//		printf("Enter n: ");
//		scanf("%d", &n);
//		printf("Y��������odd��N����even��%c", Judge2(n));
//		break;
//	case 3:
//		printf("Enter Year :");
//		scanf("%d", &year);
//		printf("Y���������꣺%c", Judge3(year));
//		break;
//	default:break;
//	}
//	return 0;
//}