#include"Head.h"
extern double ave_comp, ave_eng, ave_math;

int main() {
	Stu s[100];
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	New_students(s, n);
	// ��������Ϣ�⣬ѡ����еĲ���
	int choice = 0;
	cout << "---  1.���  2.�޸� 3.���㲢���ƽ���ɼ� 4.��ƽ���ɼ����� 5.��ѯ" << endl;
	cout << "ѡ����еĲ�����";
	cin >> choice;
	int score = 0;// ��Щ������Ҫ��switch���õ��ı���
	int course = 0;
	int num_mod = 0;
	int num_sear = 0;
	while (choice) {
		switch (choice) {
		case 1:Output_students(s, n); break;
		case 2:
			cout << "��������˵�ѧ�ţ�";
			cin >> num_mod;
			cout << "1.computer 2.english 3.math" << endl;
			cout << "ѡ������˵�ѧ�ƣ�";
			cin >> course;
			cout << "������ĺ�ķ�����";
			cin >> score;
			Modify(s, n, num_mod, course, score);
			break;
		case 3:
			Average(s, n);
			cout << "�������" << ave_comp << "  Ӣ�" << ave_eng << "  ��ѧ��" << ave_math << endl;
			break;
		case 4:
			Sort(s, n);
			cout << "�������" << endl;
			break;
		case 5:
			cout << "����Ҫ��ѯ��ѧ�ţ�";
			cin >> num_sear;
			Search_students(s, n, num_sear);
			break;
		default:break;
		}
		cout << "---  1.���  2.�޸� 3.���㲢���ƽ���ɼ� 4.��ƽ���ɼ����� 5.��ѯ 0.�˳�" << endl;
		cout << "ѡ����еĲ�����";
		cin >> choice;
	}
}


/*  --- �ϵͳ����
	Stu s[100];

	// �Ƚ�����Ϣ��---- ���������������������ڣ���Ϊ����������Ҫ�õ�
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	New_students(s,n);
	//// �׶μ�⣺������
	//Output_students(s,n);

	// ����ƽ���ɼ�----�������ʲô��ƽ����ʱ��֪����������Ϊÿһ�Ƶ�
	//Average(s, n);
	//cout << "�������" << ave_comp << "  Ӣ�" << ave_eng << "  ��ѧ��" << ave_math << endl;
	//// �׶μ�⣺������
	//Output_students(s,n);

	// ��ƽ���ɼ�����
	//Sort(s, n);
	//// �׶μ�⣺������
	//Output_students(s,n);

	// �޸�
	int num_mod = 0;
	cout << "��������˵�ѧ�ţ�";
	cin >> num_mod;
	int course = 0;
	cout << "1.computer 2.english 3.math" << endl;
	cout << "ѡ������˵�ѧ�ƣ�";
	cin >> course;
	int score = 0;
	cout << "������ĺ�ķ�����";
	cin >> score;
	Modify(s, n, num_mod, course, score);// ���ﲻ���ظ��޸���Ϣ�����յĲ˵��ڰ����������
	//// �׶μ�⣺������
	//Output_students(s,n);

	// ��ѯ
	int num_sear = 0;
	cout << "����Ҫ��ѯ��ѧ�ţ�";
	cin >> num_sear;
	Search_students(s, n, num_sear);
	//// �׶μ�⣺������(���õ���Out_put ����)
	return 0;
	*/