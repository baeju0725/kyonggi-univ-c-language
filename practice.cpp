//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int strCheck(char* strValue, char strValue2[]);
//
//int main()
//{
//
//	char strInput[20] = "My name is Amur";
//	char *pcFirstChar, *pcLastChar;
//	int iLength;
//	char strValue[20];
//
//	printf("���� : %s\n\n", strInput);
//	printf("ã�� �ܾ �Է��ϼ��� : ");
//	scanf("%s", strValue);
//
//	iLength = strlen(strInput);
//	pcLastChar = strInput + iLength;
//
//	for (pcFirstChar = strInput; pcFirstChar < pcLastChar; pcFirstChar++) {
//		;
//		if (strCheck(pcFirstChar, strValue)) {
//			printf("=====================\n");
//			printf("%s�� ���忡 ���ԵǾ� �ֽ��ϴ�\n\n.", strValue);
//			exit(0);
//		}
//	}
//	printf("%s �� ���忡 ���ԵǾ� ���� �ʽ��ϴ� \n", strValue);
//	
//	return 0;
//}
//
//int strCheck(char *strValue1, char strValue2[])
//{
//	char* pFirstChar1;
//	char* pFirstChar2;
//
//	pFirstChar1 = strValue1; //����
//	pFirstChar2 = strValue2;//ã�� �ܾ�
//
//	while ((*pFirstChar1 != '0') && (pFirstChar2 != 0)) {
//
//		if (*pFirstChar1 != *pFirstChar2) {
//			return 0;
//		}
//
//
//		printf("���� ���� : %c\t %c\t %d\n", *pFirstChar1, *pFirstChar2, *pFirstChar1 == *pFirstChar2);
//
//		if (*pFirstChar1 == *pFirstChar2) {
//
//			pFirstChar1++;
//			pFirstChar2++;
//
//		}
//		else
//			return 0;
//
//
//		if (*pFirstChar2 == 0) {
//			return 1;
//		}
//		
//	}
//	return 0;
//}