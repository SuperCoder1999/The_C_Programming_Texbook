#include"Head.h"
double ave_comp, ave_eng, ave_math;

// 创建信息库
void New_students(Stu s[],int n) {
	// 确定创建多少人的信息库

	// 录入信息
	cout << "Enter infomation:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> s[i].num >> s[i].name >> s[i].compuer >> s[i].english >> s[i].math;
		s[i].average = (s[i].compuer + s[i].english + s[i].math) / 3.0;
	}
}

// 输出信息
void Output_students(Stu s[],int n) {
	for (int i = 0; i < n; i++) {
		cout<< "学号:"<<s[i].num <<" 姓名:"<< s[i].name <<" computer:"<< s[i].compuer <<" English"<< s[i].english <<" Math"<< s[i].math<<" average:"<<s[i].average<<endl;
	}
}

// 计算平均成绩
void Average(Stu s[], int n) {
	double sum_comp=0, sum_eng=0, sum_math=0;
	for (int i = 0; i < n; i++) {
		sum_comp += s[i].compuer;
		sum_eng += s[i].english;
		sum_math += s[i].math;
	}
	ave_comp = sum_comp / 3;
	ave_eng = sum_eng / 3;
	ave_math = sum_math / 3;
}

// 按平均成绩排名
void Bubble_sort(Stu s[], int n) {
	for (int i = 1; i < n; i++)
	{
		int flag = 0;// 开关---放在第一个循环内
		for (int j = 0; j < n - i; j++) {
			if (s[j].average < s[j + 1].average)
			{
				Stu tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
				flag = 1;
			}
		}
		if (!flag)
			break;
	}
}
void Sort(Stu s[], int n) {
	Bubble_sort(s, n);
}

// 修改成绩
void Modify(Stu s[], int n,int num_mod, int course, int score) {
	for (int i = 0; i < n; i++) {
		if (s[i].num == num_mod) {
			switch (course) {
			case 1:s[i].compuer = score; break;
			case 2:s[i].english = score; break;
			case 3:s[i].math = score; break;
			default:break;
			}
			s[i].average = (s[i].compuer + s[i].english + s[i].math) / 3.0;
		}
	}
}

// 查询
void Search_students(Stu s[], int n, int num_sear) {
	for(int i=0;i<n;i++)
		if(s[i].num==num_sear)
			cout << "学号:" << s[i].num << " 姓名:" << s[i].name << " computer:" << s[i].compuer << " English" << s[i].english << " Math" << s[i].math << " average:" << s[i].average << endl;
}