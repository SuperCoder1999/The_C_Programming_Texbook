//#include"Head.h"
//#include<cstdio>
//
//int Match(char s[], char ch) {
//	int i=0;
//	for (i = 0; s[i] != ch && s[i] != '\0'; i++);// ´íÎó£ºfor (i = 0; s[i] != ch || s[i] != '\0'; i++)
//		//if (s[i] == ch)
//			//break;
//	if (s[i] == '\0') return -1;
//	else return i;
//}
//int main() {
//	char string[100] = { 0 };
//	char ch = '0';
//	cout << "Enter string : ";
//	cin >> string;
//	cout << "Enter ch : ";
//	cin >> ch;
//	int loc=Match(string, ch);
//	if (loc == -1)
//		cout << "No found";
//	else
//		cout << string + loc;
//	return 0;
//}