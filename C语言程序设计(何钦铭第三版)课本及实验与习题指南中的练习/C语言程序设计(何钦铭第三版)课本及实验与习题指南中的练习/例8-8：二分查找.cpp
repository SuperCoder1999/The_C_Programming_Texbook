//// ²»Ì«ÊìÁ·
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