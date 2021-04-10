//#include"Head.h"
//#include<cstdio>
//
//typedef struct stu {
//	int num;
//	char name[10];
//	int computer, english, math;
//	float average;
//}Stu;
//
//void Updata(Stu s[], int n, int num,int choice,int score) {
//	for (int i = 0; i < n; i++) {
//		if (s[i].num == num) {
//			switch (choice) {
//			case 1:
//				s[i].computer = score;
//				s[i].average = (s[i].english + s[i].computer + s[i].math) / 3.0;
//				return;
//			case 2:
//				s[i].english = score;
//				s[i].average = (s[i].english + s[i].computer + s[i].math) / 3.0;
//				return;
//			case 3:
//				s[i].math = score;
//				s[i].average = (s[i].english + s[i].computer + s[i].math) / 3.0;
//				return;
//			default:return;
//			}
//		}
//		// return;// 没找到---位置不对
//	}
//	return;// 没找到
//}
//
//int main() {
//	Stu s[100];
//	// 输入n个学生信息
//	int n = 0;
//	cout << "Enter n:";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> s[i].num >> s[i].name >> s[i].computer >> s[i].english >> s[i].math;
//		s[i].average = (s[i].english + s[i].computer + s[i].math) / 3.0;
//	}
//
//	// 修改信息
//	int num=0;
//	cout << "学号：";
//	cin >> num;
//	int choice = 0;
//	int score = 0;
//	cout << "Choice course:1.computer 2.english 3.math";
//	cin >> choice;
//	cout << "Enter his score:";
//	cin >> score;
//	Updata(s,n ,num,choice,score);
//	for (int i = 0; i < n; i++)
//		cout << s[i].num <<" "<< s[i].name << " " << s[i].computer << " " << s[i].english << " " << s[i].math << " " << s[i].average << " " << endl;
//	return 0;
//}