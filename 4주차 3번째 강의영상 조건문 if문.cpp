#include <stdio.h>
#include <string.h>
#define num_food 20

void printfline(){
	printf("==================================\n");
}
typedef struct //음식 구조체 선언
{
	int num;
	char name[20];
	int price;
	int pctable;
}food;

void setfood(food*);
void customer(food*);
void worker(food*);
void showfood(food*);
void orderfood(food*);
void showorder(food*);
void money(food*);

int main() {
	int inputnum = 0;
	food f[20];
	setfood(f);


	while (1) {
		printfline;
		printf("안녕하세요 경기pc방 주문화면 입니다\n");
		printfline;
		printf("1. 음식  2. 음료  3. 사이드");
		printfline;
		printf("메뉴를 선택해주세요: ");
		scanf("%d", &inputnum);
		switch (inputnum)
		{
		case 1:
			customer(f);
			break;
		case 2:
			customer(f);
			break;
		case 3:
			customer(f);
			break;
		default:
			printf("입력이 잘못되었습니다!");
		}
	}
	return 0;
}
void setfood(food* food) {

	food[0].num = 1; //음식번호
	strcpy(food[0].name, "제육볶음");
	food[0].price = 5500;
	food[0].pctable = 0;

	food[1].num = 2;
	strcpy(food[1].name, "치킨마요덮밥");
	food[1].price = 5000;
	food[1].pctable = 0;
	
	food[2].num = 3;
	strcpy(food[2].name, "스팸마요덮밥");
	food[2].price = 5000;
	food[2].pctable = 0;

	food[3].num = 4;
	strcpy(food[3].name, "라면&밥");
	food[3].price = 4000;
	food[3].pctable = 0;

	food[4].num = 5;
	strcpy(food[4].name, "김치볶음밥");
	food[4].price = 4500;
	food[4].pctable = 0;

	food[5].num = 6;
	strcpy(food[5].name, "콜라");
	food[5].price = 1000;
	food[5].pctable = 0;

	food[6].num = 7;
	strcpy(food[6].name, "사이다");
	food[6].price = 1000;
	food[6].pctable = 0;

	food[7].num = 8;
	strcpy(food[7].name, "아이스아메리카노");
	food[7].price = 1500;
	food[7].pctable = 0;

	food[8].num = 9;
	strcpy(food[8].name, "아이스티");
	food[8].price = 1500;
	food[8].pctable = 0;

	food[9].num = 10;
	strcpy(food[9].name, "과일주스");
	food[9].price = 2000;
	food[9].pctable = 0;

	food[10].num = 11;
	strcpy(food[10].name, "감자튀김");
	food[10].price = 2000;
	food[10].pctable = 0;

	food[11].num = 12;
	strcpy(food[11].name, "치즈볼");
	food[11].price = 2500;
	food[11].pctable = 0;

	food[12].num = 13;
	strcpy(food[12].name, "치즈스틱");
	food[12].price = 2000;
	food[12].pctable = 0;

	food[13].num = 14;
	strcpy(food[13].name, "구운 계란");
	food[13].price = 2000;
	food[13].pctable = 0;

	food[14].num = 15;
	strcpy(food[14].name, "닭 꼬치");
	food[14].price = 2000;
	food[14].pctable = 0;
}

void customer(food* f) //손님 메뉴
{
	int input_ct;
	while (1)
	{
		printfline;
		printf("****음식주문화면 입니다****\n");
		printfline;
		printf("1. 음식메뉴보기  2. 음식 주문  3. 이전화면으로\n");
		printfline;
		printf("메뉴를 선택해주세요 : ");
		scanf("%d", &input_ct);
		switch (input_ct)
		{
		case 1:
			showfood(f);
			break;
		case 2:
			money(f);
			break;
		case 3:
			return;
		default:
			printf("입력이 잘못 되었습니다!");
		}
	}
}

void worker(food* f)// 종업원 직원 메뉴
{
	int input_wo;
	while (1)
	{
		printfline;
		printf("*****직원 메뉴*****");
		printfline;
		printf("1. 주문 현황  2. 계산  3. 이전화면으로");
		printfline;
		printf("메뉴선택");
		scanf("%d", &input_wo);
		switch (input_wo)
		{
		case 1: 
			showorder(f);
			break;
		case 2:
			money(f);
			break;
		case 3:
			return;
			default:
			printf("입력이 잘못되었습니다!");
		}
	}
}
void showfood(food* food)//음식보여주기
{
	int i = 0;
	printfline;
	printf("----음식을 확인합니다----");
	printfline;
	for (i = 0; i < num_food; i++)
	{
		if (food[i].pctable == 0)
		{
			printf("번호 :%d\n", food[i].num);
			printf("음식 이름 :%s\n", food[i].name);
			printf("가격 :%d\n", food[i].price);
		}
	}
}

void orderfood(food* food)
{
	int i = 0;
	printfline;
	printf("*****음식 주문 현황*****");
	printfline;
	for (i = 0; i < num_food; i++)
	{
		if (food[i].pctable != 0)
		{
			printf("번호: %d\n", food[i].num);
			printf("음식 이름 : %s\n", food[i].name);
			printf("가격 : %d\n", food[i].price);
			printf("테이블 번호 :%d", food[i].pctable);
	 }
	}
}
void money(food* food) {
 
	int pctable_num = 0;
	int	total_money = 0;
	int	money = 0;
	int balance = 0; //balance 잔액 //money 받은금액

	int i = 0; 
	FILE* file;
	file = fopen("receipt.txt", "w");
	fputs("영수증" , file);
	fclose(file);


}