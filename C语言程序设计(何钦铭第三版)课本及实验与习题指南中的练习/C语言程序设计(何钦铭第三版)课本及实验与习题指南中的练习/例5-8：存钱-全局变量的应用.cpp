//#include"Head.h"
//#include<cstdio>
//
//
//float cash = 0;
//void Income(float);
//void Expend(float);
//
//
//int main() {
//	int choice = 0;
//	float value = 0;
//	do{
//		printf("Enter operate choice(0--end,1--income,2--expend):");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1:
//			printf("Enter cash value:");
//			scanf("%f", &value);
//			Income(value);
//			printf("current cash:%f\n", cash);
//			break;
//		case 2:
//			printf("Enter cash value:");
//			scanf("%f", &value);
//			Expend(value);
//			printf("current cash:%f\n", cash);
//			break;
//		case 0:return 0;//break;在这里只能跳出switch，而对while不起作用
//		}
//	}while(cash);
//	return 0;
//}
//
//void Income(float value) {
//	cash += value;
//}
//void Expend(float value) {
//	cash -= value;
//}