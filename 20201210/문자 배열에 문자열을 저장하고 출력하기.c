#include <stdio.h>

void main()
{
	char str[20] = "Data Structure!";
	int i;
	printf("\n문자 배열 str[]: ");
	for (i = 0; str[i]!='\0'; i++) {
		printf("%c", str[i]);
	}
	getchar(); // 버퍼 비우기 
	return 0;
}