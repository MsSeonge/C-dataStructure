
#include <stdio.h>

void main()
{
	int i, lenghth = 0;
	char str[50];
	printf("\n문자열을 입력하세요: ");
	fgets(str,sizeof(str),stdin);
	printf("\n입력된 문자열은 \n");
	for (i = 0; str[i]; i++) {
		printf("%c", str[i]);
		lenghth += 1;
		}
	printf("\n입니다.");
	printf("\n\n 입력된 문자열의 길이는 %d입니다", lenghth);
	getchar();
	return 0;
}