#include"Head.h"
extern double ave_comp, ave_eng, ave_math;

int main() {
	Stu s[100];
	// 先建立信息库---- 创建人数必须再主函数内，因为后续操作需要用到
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	New_students(s,n);
	//// 阶段检测：输出检查
	//Output_students(s,n);

	// 计算平均成绩----具体计算什么的平均暂时不知道，姑且认为每一科的
	//Average(s, n);
	//cout << "计算机：" << ave_comp << "  英语：" << ave_eng << "  数学：" << ave_math << endl;
	//// 阶段检测：输出检查
	//Output_students(s,n);

	// 按平均成绩排名
	//Sort(s, n);
	//// 阶段检测：输出检查
	//Output_students(s,n);

	// 修改
	int num_mod = 0;
	cout << "输入更改人的学号：";
	cin >> num_mod;
	int course = 0;
	cout << "1.computer 2.english 3.math" << endl;
	cout << "选择更改人的学科：";
	cin >> course;
	int score = 0;
	cout << "输入更改后的分数：";
	cin >> score;
	Modify(s, n, num_mod, course, score);// 这里不用重复修改信息。最终的菜单内包含这个操作
	//// 阶段检测：输出检查
	//Output_students(s,n);

	int num_sear = 0;
	cout << "输入要查询的学号：";
	cin >> num_sear;
	Search_students(s, n, num_sear);
	//// 阶段检测：输出检查(不用调用Out_put 函数)
	return 0;
}
