#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<iostream>
using namespace std;



typedef struct stu {
	int num;// ѧ��
	char name[10];// ����
	int compuer, english, math;// ���Ƴɼ�
	float average;
}Stu;

// ����������
void New_students(Stu s[],int);
void Output_students(Stu s[], int n);
void Average(Stu s[], int n);
void Sort(Stu s[], int n);
void Modify(Stu s[], int n, int num_x, int course, int score);
void Search_students(Stu s[], int n, int num_sear);