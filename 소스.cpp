//#include <stdio.h>
//
//
//int main(){
//
//int a[5] = { 10, 20, 30, 40, 50 };
//int* pInt;
//pInt = a;
//
//
//printf("a[0] = %d\n", a[0]); //10
//printf("&a[0] = %p\n", &a[0]); //�ּ� 1000
//printf("pInt = %p\n", pInt); // �ּ� 1000
//printf("a = %p\n\n", a); //�ּ� 1000
//
//
//printf("&a[1] = %p\n", &a[1]); //1004
//printf("pInt + 1 = %p\n", pInt + 1);//1004
//printf("a + 1 = %p\n\n", a + 1);//1004
//
//
////��
//
//printf("&a[1] = %p\n", &a[1]); //20
//printf("*(pInt + 1) = %d\n", *(pInt + 1));//20
//printf("*(a + 1) = %d\n\n", *(a + 1)); //20
//
//
//int a1[5] = { 10, 20, 30, 40, 50 };
//int* pInt3;
//pInt3 = a1;
//
//printf("���� pInt3�� �ּ� = %p \n", pInt3);
//printf("*pInt3++ = %d \n", *pInt3++);
//printf("pInt3++ ������ pInt3�� �ּ� = %p\n", pInt3++);
//printf("*++pInt3 = %d\n", *++pInt3);
//printf("++pInt3 ���� �� pInt3�� �ּ� = %p \n", pInt3);
//}