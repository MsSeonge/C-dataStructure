#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void main()
{
	int i;
	const char *ptrArray[4] = { {"Korea"},{"Seoul"},{"Mapo"},{"152���� 2/3"} };
	for (i = 0; i < 4; i++)
		printf("\n %s", ptrArray[i]);

	ptrArray[2] = "Jongno";
	printf("\n\n");
	for (i = 0; i < 4; i++)
		printf("\n %s", ptrArray[i]);

	getchar();
	
}