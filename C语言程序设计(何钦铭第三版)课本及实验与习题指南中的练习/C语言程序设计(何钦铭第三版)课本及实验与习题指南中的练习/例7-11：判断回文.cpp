//#include"Head.h"
//#include<cstdio>
//#include<string.h>

// 有瑕疵
//int main() {
//	char arr[81] = { 0 };
//	printf("Enter a strin :");
//	scanf("%s", arr);// scanf存储的是回车/空格之前的字符，且在字符后面自动添加'\n'
//	int right = strlen(arr)-1;// right 需要在strlen(arr)基础上减一.因为strlen得到的是序号，不是下标
//	int left = 0;
//	while (arr[left++] == arr[right--] && left <= right);
//	if (left > right) printf("是回文");
//	else
//		printf("不是");
//	return 0;
//}


// // 课本上以'\n'为查找时的结束条件，完全可以被下标替代。这里就不补充\n为条件的算法了
//int main() {
//	char arr[81] = { 0 };
//	printf("Enter a strin :");
//	int i = 0;
//	char ch = '0';
//	while ((ch = getchar()) != '\n')arr[i++] = ch;// 这是用暂存的方式过滤'\n'，还有一种方式(课本上)：都存进来，改变判断的序号即可
//	int right = i - 1;// right 需要在strlen(arr)基础上减一.因为strlen得到的是序号，不是下标
//	int left = 0;
//	while (arr[left++] == arr[right--] && left <= right);
//	if (left > right) printf("是回文");
//	else
//		printf("不是");
//	return 0;
//}