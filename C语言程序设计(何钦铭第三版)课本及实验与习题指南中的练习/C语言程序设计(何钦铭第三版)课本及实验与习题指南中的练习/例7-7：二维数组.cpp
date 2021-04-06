//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int arr[3][2] = { 0 };
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 2; j++)
//			cin >> arr[i][j];
//
//	int max_x = 0, max_y = 0;
//	for(int i=0;i<3;i++)
//		for(int j=0;j<2;j++)
//			if (arr[i][j] > arr[max_x][max_y])
//			{
//				max_x = i;
//				max_y = j;
//			}
//	cout << max_x << max_y << endl;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//			cout << arr[i][j] << "  ";
//		cout << endl;// 二维数组需要靠自己输出回车，否则只会在一行输出
//	}
//	return 0;
//}