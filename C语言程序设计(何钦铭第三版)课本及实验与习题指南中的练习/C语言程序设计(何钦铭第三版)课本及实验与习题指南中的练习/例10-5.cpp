//#include"Head.h"
//#include<cstdio>
//#define mile_meter 1609
//#define Foot_centimeter 30.48
//#define Inch_centimeter 2.54
//
//int main() {
//	int choice = 0;
//	double res = 0;
//	cout << "1.mile to meter " << endl << "2.Foot to centimeter " << endl << "3.Inch to centimeter 0.exit" << endl;	
//	cout << "Enter your choice: ";
//	cin >> choice;
//	while (choice) {
//		double num = 0;
//		cout << "Enter num: ";
//		cin >> num;
//		switch (choice) {
//		case 1:res = num * mile_meter; break;
//		case 2:res = num * Foot_centimeter; break;
//		case 3:res = num * Inch_centimeter; break;
//		default:break;
//		}
//		cout << res<<endl;
//		cout << "1.mile to meter " << endl << "2.Foot to centimeter " << endl << "3.Inch to centimeter 0.exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//	}// 类似计算器之类的算法,如何循环使得每次都显示菜单和输入提示
//	// 之前寒假有写过，可以看看
//	return 0;
//}