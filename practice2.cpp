////#define _CRT_SECURE_NO_WARNINGS
////#pragma warning(dosable : 4996)
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//void swap(char* pcValue1, char* pcValue2);
//
//int main() {
//
//	char strInput[10];
//	char* pcFirstChar, * pcLastChar;
//	int iLength;
//
//	strcpy(strInput, "hello");
//
//	printf("처음 문자 : %s\n", strInput);
//
//	iLength = strlen(strInput);
//
//	pcLastChar = strInput + iLength - 1;
//
//	for (pcFirstChar = strInput; pcFirstChar < pcLastChar; pcFirstChar++, pcLastChar--) {
//		swap(pcFirstChar, pcLastChar);
//	}
//
//	printf("바뀐 문자 : %s\n", strInput);
//	return 0;
//}
//	void swap(char* pcValue1, char* pcValue2)
//	{
//		char cTemp;
//
//		cTemp = *pcValue1;
//		*pcValue1 = *pcValue2;
//		*pcValue2 = cTemp;
//	}