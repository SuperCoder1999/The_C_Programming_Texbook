//#include"Head.h"
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char s[100] = { 0 };
//	printf("input characters: ");//scanf 遇到空格就会停止
//	gets_s(s);
//	//scanf("%s", s); 既然我用字符串输入，而且还是用scanf输入，所以最后一个字符就不会是‘\n’,所以不能用while(!s[i])来判断。而且字符总数也是可以知道的
//	int i = 0;
//	while (i<=strlen(s))// "abc\0" 即 'a','b','c','\0' 即 97，98，99，0  所以 \0 就是字符，其ASCII值为0
//	{
//		if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
//		else if (s[i] <= 'Z' && s[i] >= 'A') s[i] += 32;
//		i++;
//
//	}
//	printf("%s", s);
//	return 0;
//}