//#include"Head.h"
//#include<cstdio>
//
//// ð�������ѡ������ǡǡ�෴��ð������ÿ���źõ����ֶ������ұ�
//// ��ѡ������ÿ���źõ����������
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
//		int flag = 0;// ������ÿһ������ǰ�����ã�һ������꣬û�н��������ʹ������
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