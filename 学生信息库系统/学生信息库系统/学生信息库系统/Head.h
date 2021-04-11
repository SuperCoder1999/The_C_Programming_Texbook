#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<iostream>
using namespace std;



typedef struct stu {
	int num;// 学号
	char name[10];// 姓名
	int compuer, english, math;// 三科成绩
	float average;
}Stu;

// 函数声明：
void New_students(Stu s[],int);
void Output_students(Stu s[], int n);
void Average(Stu s[], int n);
void Sort(Stu s[], int n);
void Modify(Stu s[], int n, int num_x, int course, int score);
void Search_students(Stu s[], int n, int num_sear);