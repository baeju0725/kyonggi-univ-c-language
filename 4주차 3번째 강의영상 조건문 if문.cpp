#include <stdio.h>
#include <string.h>
#define num_food 20
void printfline(){
	printf("==================================\n");
}
typedef struct //���� ����ü ����
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
		printfline();
		printf("�ȳ��ϼ��� ���pc�� �ֹ�ȭ�� �Դϴ�\n");
		printfline();
		printf("1. ����  2. ����  3. ���̵�");
		printfline();
		printf("�޴��� �������ּ���: ");
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
			printf("�Է��� �߸��Ǿ����ϴ�!");
		}
		break;
	}

}
void setfood(food* food) {

	food[0].num = 1; //���Ĺ�ȣ
	strcpy(food[0].name, "��������");
	food[0].price = 5500;
	food[0].pctable = 0;

	food[1].num = 2;
	strcpy(food[1].name, "ġŲ���䵤��");
	food[1].price = 5000;
	food[1].pctable = 0;

	food[2].num = 3;
	strcpy(food[2].name, "���Ը��䵤��");
	food[2].price = 5000;
	food[2].pctable = 0;

	food[3].num = 4;
	strcpy(food[3].name, "���&��");
	food[3].price = 4000;
	food[3].pctable = 0;

	food[4].num = 5;
	strcpy(food[4].name, "��ġ������");
	food[4].price = 4500;
	food[4].pctable = 0;

	food[5].num = 6;
	strcpy(food[5].name, "�ݶ�");
	food[5].price = 1000;
	food[5].pctable = 0;

	food[6].num = 7;
	strcpy(food[6].name, "���̴�");
	food[6].price = 1000;
	food[6].pctable = 0;

	food[7].num = 8;
	strcpy(food[7].name, "���̽��Ƹ޸�ī��");
	food[7].price = 1500;
	food[7].pctable = 0;

	food[8].num = 9;
	strcpy(food[8].name, "���̽�Ƽ");
	food[8].price = 1500;
	food[8].pctable = 0;

	food[9].num = 10;
	strcpy(food[9].name, "�����ֽ�");
	food[9].price = 2000;
	food[9].pctable = 0;

	food[10].num = 11;
	strcpy(food[10].name, "����Ƣ��");
	food[10].price = 2000;
	food[10].pctable = 0;

	food[11].num = 12;
	strcpy(food[11].name, "ġ�");
	food[11].price = 2500;
	food[11].pctable = 0;

	food[12].num = 13;
	strcpy(food[12].name, "ġ�ƽ");
	food[12].price = 2000;
	food[12].pctable = 0;

	food[13].num = 14;
	strcpy(food[13].name, "���� ���");
	food[13].price = 2000;
	food[13].pctable = 0;

	food[14].num = 15;
	strcpy(food[14].name, "�� ��ġ");
	food[14].price = 2000;
	food[14].pctable = 0;
}

void customer(food* f) //�մ� �޴�
{
	int input_ct;
	while (1)
	{
		printfline();
		printf("****�����ֹ�ȭ�� �Դϴ�****\n");
		printfline();
		printf("1. ���ĸ޴�����  2. ���� �ֹ�  3. ����ȭ������\n");
		printfline();
		printf("�޴��� �������ּ��� : ");
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
			printf("�Է��� �߸� �Ǿ����ϴ�!");
		}
	}
}

void worker(food* f)// ������ ���� �޴�
{
	int input_wo;
	while (1)
	{
		printfline();
		printf("*****���� �޴�*****");
		printfline();
		printf("1. �ֹ� ��Ȳ  2. ���  3. ����ȭ������");
		printfline();
		printf("�޴�����");
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
			printf("�Է��� �߸��Ǿ����ϴ�!");
		}
	}
}
void showfood(food* food)//���ĺ����ֱ�
{
	int i = 0;
	printfline();
	printf("----������ Ȯ���մϴ�----");
	printfline();
	for (i = 0; i < num_food; i++)
	{
		if (food[i].pctable == 0)
		{
			printf("��ȣ :%d\n", food[i].num);
			printf("���� �̸� :%s\n", food[i].name);
			printf("���� :%d\n", food[i].price);
		}
	}
}

void orderfood(food* food)
{
	int i = 0;
	printfline();
	printf("*****���� �ֹ� ��Ȳ*****");
	printfline();
	for (i = 0; i < num_food; i++)
	{
		if (food[i].pctable != 0)
		{
			printf("��ȣ: %d\n", food[i].num);
			printf("���� �̸� : %s\n", food[i].name);
			printf("���� : %d\n", food[i].price);
			printf("���̺� ��ȣ :%d", food[i].pctable);
	 }
	}
}
void money(food* food) {

	int pctable_num = 0;
	int	total_money = 0;
	int	money = 0;
	int balance = 0; //balance �ܾ� //money �����ݾ�

	int i = 0;
	FILE* file;
	file = fopen("receipt.txt", "w");
	fputs("������" , file);
	fclose(file);


}