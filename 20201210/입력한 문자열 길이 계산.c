
#include <stdio.h>

void main()
{
	int i, lenghth = 0;
	char str[50];
	printf("\n���ڿ��� �Է��ϼ���: ");
	fgets(str,sizeof(str),stdin);
	printf("\n�Էµ� ���ڿ��� \n");
	for (i = 0; str[i]; i++) {
		printf("%c", str[i]);
		lenghth += 1;
		}
	printf("\n�Դϴ�.");
	printf("\n\n �Էµ� ���ڿ��� ���̴� %d�Դϴ�", lenghth);
	getchar();
	return 0;
}