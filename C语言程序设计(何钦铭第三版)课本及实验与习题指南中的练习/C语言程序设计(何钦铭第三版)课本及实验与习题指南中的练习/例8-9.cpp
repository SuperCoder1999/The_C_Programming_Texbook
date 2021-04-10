//#include"Head.h"
//#include<cstdio>
//
//void Encrypt(char arr[]) {
//	int i = 0;
//	while (arr[i]) {
//		if (arr[i] == 'z') arr[i] = 'a';
//		else arr[i] = arr[i] + 1;
//		i++;// while中需要自己改变循环变量
//	}
//}
//int main() {
//	char arr[100] = { 0 };
//	cout << "Enter the string:";
//	//错误： cin >> arr; 数组的输入一定不是这样
//	int i = 0;
//	while ((arr[i] = getchar()) != '\n') i++; 
//	// 算上'\n'，下标增加了1 ( 如果输入abc,则arr中abc'\n' i=3)
//	arr[i] = '\0';// 只需要将'\n'变成'\0'即可，i现在就指向这里
// 	Encrypt(arr);
//	cout << "After being encrypted:" << arr;
//	return 0;
//}
/*
void Encrypted(char arr[]) {
	int i = 0;
	//本来想着，能把arr[i]!='\0'和arr[i]encrypted
	// 一起合并到while()或for()的条件判断中
	// 但是因为encrypted有两种情况，所以没法做到

	// 如果只是合并 循环变量 i和判断条件，for循环也是可以的
	// for循环不一定处理不了不知循环次数的问题
	
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
		i++;// while中需要自己改变循环变量
	}
}
int main() {
	char arr[100] = { 0 };
	cout << "Enter the string:";
	// 采用课本中gets函数
	gets_s(arr);
	cout << strlen(arr)<<endl;// 很方便，回车也不会被存入arr中
	Encrypt(arr);
	cout << "After being encrypted:" << arr;
	return 0;
}
*/