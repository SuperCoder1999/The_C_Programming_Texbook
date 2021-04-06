//#include"Head.h"
//#include<cstdio>
//
//int day_of_year(int year, int month, int day)
//{
//	int count = 0;
//	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) arr[2]++;
//
//	for (int i = 1; i < month; i++)
//		count += arr[i];
//	count += day;
//	return count;
//}
//
//int main() {
//	int year = 0, month = 0, day = 0;
//	cin >> year >> month >> day;
//	int count = day_of_year(ye/ar, month, day);
//
//	cout << count;
//	return 0;
//}