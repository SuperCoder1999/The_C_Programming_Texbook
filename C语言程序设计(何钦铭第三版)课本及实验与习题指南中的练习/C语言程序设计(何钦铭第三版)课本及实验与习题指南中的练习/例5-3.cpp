//#include"Head.h"
//#include<cstdio>

/*  �����ַ�ʽ���������� i ֮������жϣ�ʵ���Ǻ���i++��
float funpi1(float e) {
	int i = 1;
	int flag = 1;
	float sum = 0;
	while (1.0 / (2 * i - 1) >= e) {
		sum += (flag * 1.0 / (2 * i - 1));
		i++;
		flag *= -1;
	}
	return sum;
}
float funpi(float e) {
	int i = 1;
	int flag = 1;
	float sum = 0;
	do {
		sum += (flag*1.0 / (2 * i - 1));
		i++;
		flag *= -1;
	} while (1.0/(2 * i - 1) >= e);
	return sum;
}
*/

//double funpi(float e) {
//	int i = 0; // ǰ��i++ ��i��ʼ��Ϊ 0
//	int flag = 1;
//	double sum = 0;
//	do {
//		i++;
//		sum += (flag * 1.0 / (2 * i - 1));
//		flag *= -1;
//	} while (1.0 / (2 * i - 1) >= e);
//	return sum;
//}
//
//int main() {
//	double e = 0;  // ��������е� double ���ý������ȷ
//	printf("Enter e: ");
//	scanf("%lf", &e);
//	printf("%.6f\n", 4*funpi(e));
//	printf("%f", 4 * funpi(e));
//	return 0;
//}