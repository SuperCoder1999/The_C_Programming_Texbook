//#include"Head.h"
//#include<cstdio>
//
//typedef struct stu {
//	int num;
//	char name[10];
//	int computer, english, math;
//	float average;
//}Stu;
//void Bubble(Stu students[51],int n) {
//	int flag = 0;
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j < n - i; j++) {
//			if (students[j].average < students[j+1].average)
//			{
//				/* tmp������int�ͣ�����ĿҪ���ѧ����Ϣȫ�����������Ӧ���޸�����ѧ��˳�򣬶����ǽ����ǵ�average�����������
//				int tmp = students[j].average;
//				students[j].average = students[j + 1].average;
//				students[j + 1].average = tmp;
//				*/
//				Stu tmp = students[j];
//				students[j] = students[j + 1];
//				students[j + 1] = tmp;
//			}
//			flag = 1;
//		}
//		if (flag == 0) return;
//	}
//}
//int main() {
//	Stu students[51];
//	// �����룬��ͬʱ������ƽ����
//	int n = 0;
//	cout << "Enter n:";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> students[i].num >> students[i].name >> students[i].computer >> students[i].english >> students[i].math;
//		students[i].average = (students[i].computer + students[i].english + students[i].math) / 3.0;
//	}
//	// ����
//	Bubble(students,n);
//	for (int i = 0; i < n; i++)
//		cout << students[i].num<<" " << students[i].name << " " << students[i].computer << " " << students[i].english << " " << students[i].math << " " << students[i].average << endl;
//	return 0;
//}