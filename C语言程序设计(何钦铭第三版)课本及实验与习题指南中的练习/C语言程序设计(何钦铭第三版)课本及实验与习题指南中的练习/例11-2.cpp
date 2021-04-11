//// 考察 二级指针 操作后的结果
//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int a = 10, b = 20, t;
//	int* pa = &a, * pb = &b, *pt;
//	int** ppa = &pa, ** ppb = &pb, ** ppt;
//	ppt = ppb; 
//	ppb = ppa;
//	ppa = ppt;
//	cout << **ppa <<" "<< **ppb << " " <<*pa << " " << *pb << " " << a << " " << b << " " << endl;
//	//     20             10            10           20            10           20 
//	pt = pb;
//	pb = pa;
//	pa = pt;
//	cout << **ppa << " " << **ppb << " " << *pa << " " << *pb << " " << a << " " << b << " " << endl;
//	//      10             20               20            10            10         20
//	t = b;
//	b = a;
//	a = t;
//	cout << **ppa << " " << **ppb << " " << *pa << " " << *pb << " " << a << " " << b << " " << endl;
//	//        20          10                10           20              20          10
//	return 0;
//}