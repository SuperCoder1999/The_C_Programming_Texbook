//#include<stdio.h>
//
//// ��ʵ������ָ�����飬û��Ҫ�ٶ������ָ�룬��Ϊָ�����������Ƕ���ָ��
//void Bubble(char** ppch, int n) {
//	// int flag = 0;��������û�п���
//	for (int i = 0; i < n - 1; i++) {
//		int min = i;
//		for (int j = i+1; j < n; j++)
//		{
//			if (strcmp(*(ppch + min), *(ppch + j)) > 0)
//				// if (strcmp(*(ppch + i), *(ppch + j)) > 0)
//				// ������� i ����min ���򽻻��͸���ifѭ���ڣ�������С�ַ����ڱ仯����min�ı��û�ж����ͻᵼ�±Ƚϲ���
//				// ������Щ��ɬ������д�� i �ͺ�
//			{
//				min = j;
//			}
//			
//		}
//		char* tmp = *(ppch + i);// ����ĵ���ch[5]�д�ĵ�ַ����ch[5]���ʱ���ͻᰴ����Ҫ��˳��
//		*(ppch + i) = *(ppch + min);
//		*(ppch + min) = tmp;
//		/*
//		char tmp[10] = **(ppch + i);
//		**(ppch + i) = **(ppch + j);
//		**(ppch + j) = tmp;
//		 ��ֵ�����ܽ����ַ��� */
//	}
//}
//int main() {
//	char* ch[5] = { "red","blue","yellow","green","black" };
//	char** ppch = ch;
//	Bubble(ppch, 5);
//	for (int i = 0; i < 5; i++)
//		// printf("%s ", **(ppch + i)); %s ȡ���ǵ�ַ
//		printf("%s ", *(ppch + i));
//	return 0;
//}