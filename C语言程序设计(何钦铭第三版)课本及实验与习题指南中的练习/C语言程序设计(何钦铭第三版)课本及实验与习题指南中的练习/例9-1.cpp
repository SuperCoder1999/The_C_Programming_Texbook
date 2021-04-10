//#include"Head.h"
//#include<cstdio>
//
//typedef struct stu {
//	int num;
//	char name[10];
//	int computer, english, math;
//	float average;
//}Stu;
// 其实，也可以Stu students[10];或者动态规划
//int main() {
//	int n = 0;
//	cout << "Enter n:";
//	cin >> n;
//	Stu max;
//	//cin >>max.num>>max.name >>max.computer >> max.english >> max.math;// 这种形式下，101Nie也会分开存储
//	//scanf("%d%s%d%d%d", &max.num, &max.name, &max.computer, &max.english, &max.math); 这种形式也会分开存储
//	max.average = (max.computer + max.english + max.math) / 3.0;
//	Stu s1;
//	for (int i = 1; i < n; i++)
//	{
//		cin >>s1.num>>s1.name >>s1.computer >> s1.english >> s1.math;
//		s1.average = (s1.computer + s1.english + s1.math) / 3.0;
//		if (s1.average > max.average) max = s1;
//	}
//	cout << max.average;
//	return 0;
//}