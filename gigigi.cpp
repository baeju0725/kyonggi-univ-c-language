//#include <stdio.h>
//
//
//int fibo1(int num) {
//	if (num == 1 || num == 2)
//		return 1;
//	return fibo1(num - 1) + fibo1(num - 2);
//}
//int fibo2(int num) {
//
//	int f1;
//	int f2;
//
//	if (num == 1 || num == 2)
//		return 1;
//
//	f1 = fibo2(num - 1);
//	f2 = fibo2(num - 2);
//
//	return f1 * f1 + f2 * f2;
//		/*fibo2(num - 1) * fibo2()  + fibo2(num - 2);*/   
//}
//int fibo3(int num) {
//
//	if (num == 1 || num == 2)
//		return 1;
//
//	return fibo3(num - 1) % 5 + fibo3(num - 2) % 5;
//}
///*F(x) = F(x - 1) % 5 + F(x – 2) % 5*/
//int main(){
//
//	int num;
//	int menu;
//
//	
//    home:
//	printf("케이스를 입력해주세요! 1. 1번케이스  2. 2번케이스  3. 3번케이스  0. 종료\n");
//	scanf_s("%d", &menu);
//	if (menu != 0) {
//	home2:
//		printf("피포나치항을 입력해주세요 1 과 8사이어야합니다\n");
//		scanf_s("%d", &num);
//		if (num < 1 || num > 8) {
//			printf("입력이 잘 못되었습니다!\n");
//			goto home2;
//		}
//	}
//
//	switch (menu)
//	{
//	case 1:
//		printf("%d\n\n ", fibo1(num));
//		goto home;
//		break;
//
//	case 2:
//		printf("%d\n\n", fibo2(num));
//		goto home; 
//		break;
//
//	case 3:
//		printf("%d\n\n", fibo3(num));
//		goto home;
//		break;
//	case 0:
//		printf("프로그램을 종료합니다!~\n");
//		scanf_s("%d", &menu);
//		break;
//	}
//	return 0;
//}
//		