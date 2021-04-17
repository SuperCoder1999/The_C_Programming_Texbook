//#include"Head.h"
//#include<cstdio>
//#define PI 3.1415926
//
//void vol_ball(void) {
//	int r = 0;
//	cout << "Enter r";
//	cin >> r;
//	cout << 4 / 3.0 * PI * r * r * r<<endl;
//}
//void vol_cylind() {
//	int r = 0;
//	int h = 0;
//	cout << "Enter r,h";
//	cin >> r >> h;
//	cout << PI * r * r * h << endl;
//}
//void vol_cone() {
//	int r = 0;
//	int h = 0;
//	cout << "Enter r,h";
//	cin >> r >> h;
//	cout << 1/3.0*PI * r * r * h << endl;
//}
//int main() {
//	// 菜单
//	cout << "圆形体体积计算器"<<endl;
//	while (1) {
//		cout << "圆形体类型：1.球体 2.圆柱体 3.圆锥体 0.退出" << endl;
//		int choice = 0;
//		cin >> choice;
//		switch (choice) {
//		case 1:vol_ball(); break;
//		case 2:vol_cylind(); break;
//		case 3:vol_cone(); break;
//		case 0:return 0;
//		}
//	}
//	return 0;
//}
//// 课本中的高内聚低耦合做得很好