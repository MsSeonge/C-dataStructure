#include <stdio.h>

void main()
{
	char str[20] = "Data Structure!";
	int i;
	printf("\n���� �迭 str[]: ");
	for (i = 0; str[i]!='\0'; i++) {
		printf("%c", str[i]);
	}
	getchar(); // ���� ���� 
	return 0;
}