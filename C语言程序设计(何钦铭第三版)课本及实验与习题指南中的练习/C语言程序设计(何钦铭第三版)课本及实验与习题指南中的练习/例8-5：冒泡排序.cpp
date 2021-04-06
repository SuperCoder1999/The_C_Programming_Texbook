//#include"Head.h"
//#include<cstdio>
//
//// 冒泡排序和选择排序恰恰相反，冒泡排序每次排好的数字都在最右边
//// 而选择排序每次排好的数在最左边
//
//void Exchange1(int arr[], int x, int y) {
//	arr[x] = arr[x] ^ arr[y];
//	arr[y] = arr[x] ^ arr[y];
//	arr[x] = arr[x] ^ arr[y];
//}
//
//void Exchange(int arr[], int x, int y) {
//	int tmp = arr[x];
//	arr[x] = arr[y];
//	arr[y] = tmp;
//}
//
//int main() {
//	
//	int n = 0;
//	cout << "Enter n:";
//	cin >> n;
//	int arr[9] = { 0 };
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	
//	for (int i = 1; i <= n-1; i++) {
//		int flag = 0;// 开关在每一趟排序前就重置，一旦浏览完，没有交换过，就代表结束
//		for (int j = 0; j < n-1; j++)
//			if (arr[j] > arr[j + 1]) {
//				Exchange(arr, j, j+1);
//				flag = 1;
//			}
//		if (!flag)break;
//	}
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i]<<" ";
//
//	return 0;
//}