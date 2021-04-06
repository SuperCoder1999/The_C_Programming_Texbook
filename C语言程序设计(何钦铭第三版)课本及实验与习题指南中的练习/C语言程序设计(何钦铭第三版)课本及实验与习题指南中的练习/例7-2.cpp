//#include"Head.h"
//#include<cstdio>
//
//int main() {
//	int arr[10] = { 0 };
//	int count = 0;
//	arr[0] = arr[1] = 1;
//	cout << arr[0] << " " << arr[1]<<" ";// cout暂时不知道怎么左对齐
//	count += 2;
//	for (int i = 2; i <= 9; i++) {
//		arr[i] = arr[i - 2] + arr[i - 1];
//		printf("%6d ", arr[i]);// 6d能让输出的结果全部对齐向左
//		count++;
//		if (!(count % 5)) cout << endl;
//	}
//	return 0;
//}