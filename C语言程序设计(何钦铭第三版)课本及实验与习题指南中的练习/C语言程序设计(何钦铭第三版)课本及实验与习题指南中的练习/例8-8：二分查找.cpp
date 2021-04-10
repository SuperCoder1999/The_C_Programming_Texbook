//// 不太熟练
//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int x = 10;
//
//	int left = 0, right = 9;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//			left = mid + 1;
//		else if (arr[mid] == x) {
//			cout << mid;
//			return 0;
//		}
//		else
//			right = mid - 1;
//	}
//	cout << "Not found";
//	return 0;
//}

// ---------------------------   2021.4.10 练习 -----------
//#include"Head.h"
//#include<cstdio>
//int Bsearch(int arr[], int x) {
//	int left = 0, right = 9;// right 一定是长度-1
//	// int mid = (left + right) / 2; 
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//			left = mid + 1;
//		else if (arr[mid] > x)
//			right = mid-1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main() {
//	int arr[10] = {0, 1,2,3,4,5,6,7,8,9 };
//	int x = 0;
//	cout << "Enter x:";
//	cin >> x;
//
//	int loc=Bsearch(arr, x);
//	if (loc != -1)
//		cout << loc;
//	else
//		cout << "No found";
//	return 0;
//}