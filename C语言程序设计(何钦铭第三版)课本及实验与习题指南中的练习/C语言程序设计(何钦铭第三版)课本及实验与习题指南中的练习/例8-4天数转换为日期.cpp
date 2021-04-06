//// 天数转换为日期在蓝桥杯的一次比赛中出现过。
//// Leetcode 上的那道“进制转换"
//// 让我确信，基础的重要性。
//#include"Head.h"
//#include<cstdio>
//
//void month_day(int, int, int*, int*);
//int main() {
//	int year = 0, yearday = 0;
//	int month = 0, day = 0;
//	cout << "Enter year & yearday:";
//	cin >> year >> yearday;
//	month_day(year, yearday,&month,&day);
//	cout << year << ":" << month << ":" << day;
//
//	return 0;
//}
//// 简洁清晰算法：
//void month_day(int year, int yearday, int* month, int* day) {
//	int month2[2][13] = { { 0,31,28,31,30,31,30,31,31,30,31,30,31 },
//		{0,31,29,31,30,31,30,31,31,30,31,30,31} };
//
//	int leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
//
//	int i = 0;
//	for (i = 1; yearday > month2[leap][i]; i++) yearday -= month2[leap][i];
//	*month = i;
//	*day = yearday;
//}
//
//
//
//
//
//
//
//void month_day1(int year, int yearday, int* month1, int* day) {
//	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)month[2]++;
//	int my_yearday = 0;
//	int i = 0;
//
//	// 在下方的 算法之前，我还想到了用减法(不是课本中的减法)  if((my_yearday -= month[i]) < yearday) break;
//	// 减法有可能减到下一年的一月。所以瑕疵太大了
//	// 而这个减法，也不是很清晰
//	for (i = 1; i <= 13; i++) {
//		if ((my_yearday += month[i]) >= yearday) break;
//	}
//	if (my_yearday = yearday) {
//		*month1 = i;
//		*day = month[i];
//	}
//	else if (my_yearday > yearday) {
//		*month1 = i - 1;
//		*day = month[i] - (my_yearday - yearday);
//	}
//
//}