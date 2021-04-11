//#include"Head.h"
//#include<cstdio>
//
//void Hano(int n, char A, char B, char C) {
//
//	if (n == 1)
//		cout << A<<"->"<<B<<endl;
//	else
//	{
//		Hano(n - 1, A, C, B);
//		cout << A << "->" << B<<endl;
//		Hano(n - 1, C, B, A);
//	}
//
//}
//
//int main() {
//	int n = 0;
//	char A='a',B='b',C='c';
//	cout << "Enter n:";
//	cin >> n;
//	Hano(n,A,B,C);
//	return 0;
//}


//// 2021.4.11 ¸´Ï°
//#include"Head.h"
//#include<cstdio>
//void Hano(int n, char A, char B, char C) {
//	if (n == 1)
//		cout << A << "->" << B<<endl;
//	else
//	{
//		Hano(n - 1, A, C, B);
//		cout << A << "->" << B<<endl;
//		Hano(n - 1, C, B, A);
//	}
//}
//int main() {
//	char A = 'a', B = 'b', C = 'c';
//	int n = 0;
//	cout << "Enter n:";
//	cin >> n;
//	Hano(n, A, B, C);
//	return 0;
//}