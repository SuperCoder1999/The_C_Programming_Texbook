//#include"Head.h"
//#include<cstdio>
//
//void Encrypt(char arr[]) {
//	int i = 0;
//	while (arr[i]) {
//		if (arr[i] == 'z') arr[i] = 'a';
//		else arr[i] = arr[i] + 1;
//		i++;// while����Ҫ�Լ��ı�ѭ������
//	}
//}
//int main() {
//	char arr[100] = { 0 };
//	cout << "Enter the string:";
//	//���� cin >> arr; ���������һ����������
//	int i = 0;
//	while ((arr[i] = getchar()) != '\n') i++; 
//	// ����'\n'���±�������1 ( �������abc,��arr��abc'\n' i=3)
//	arr[i] = '\0';// ֻ��Ҫ��'\n'���'\0'���ɣ�i���ھ�ָ������
// 	Encrypt(arr);
//	cout << "After being encrypted:" << arr;
//	return 0;
//}
/*
void Encrypted(char arr[]) {
	int i = 0;
	//�������ţ��ܰ�arr[i]!='\0'��arr[i]encrypted
	// һ��ϲ���while()��for()�������ж���
	// ������Ϊencrypted���������������û������

	// ���ֻ�Ǻϲ� ѭ������ i���ж�������forѭ��Ҳ�ǿ��Ե�
	// forѭ����һ�������˲�֪ѭ������������
	
}
int main() {
	char arr[100] = { 0 };
	cout << "Enter the string:";
	cin >> arr;
	Encrypted(arr);
	cout << "After being encrypted:" << arr;
	return 0;
}
*/

/*
#include"Head.h"
#include<cstdio>

void Encrypt(char arr[]) {
	int i = 0;
	while (arr[i]) {
		if (arr[i] == 'z') arr[i] = 'a';
		else arr[i] = arr[i] + 1;
		i++;// while����Ҫ�Լ��ı�ѭ������
	}
}
int main() {
	char arr[100] = { 0 };
	cout << "Enter the string:";
	// ���ÿα���gets����
	gets_s(arr);
	cout << strlen(arr)<<endl;// �ܷ��㣬�س�Ҳ���ᱻ����arr��
	Encrypt(arr);
	cout << "After being encrypted:" << arr;
	return 0;
}
*/