//// ����ת��Ϊ���������ű���һ�α����г��ֹ���
//// Leetcode �ϵ��ǵ�������ת��"
//// ����ȷ�ţ���������Ҫ�ԡ�
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
//// ��������㷨��
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
//	// ���·��� �㷨֮ǰ���һ��뵽���ü���(���ǿα��еļ���)  if((my_yearday -= month[i]) < yearday) break;
//	// �����п��ܼ�����һ���һ�¡�����覴�̫����
//	// �����������Ҳ���Ǻ�����
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