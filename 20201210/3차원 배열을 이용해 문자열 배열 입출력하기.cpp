#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void main()
{
	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i ++) {
		printf("\n �л� %d�� �̸�: ", i + 1);   // 20 �� ���� �Ǿ�� ���ڿ��� �Է����� ����. 
		fgets(student[i][0], sizeof(student[i][0]), stdin);
		printf("�л� %d�� �̸�: ", i + 1);
		fgets(student[i][1], sizeof(student[i][1]), stdin);
		printf("�л� %d�� �̸�: ", i + 1);
		fgets(student[i][2], sizeof(student[i][2]), stdin);
	}
	for (i = 0; i < 2; i++) {
		printf("\n\n�л� %d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0'; k++)
				printf("%c", student[i][j][k]);
		}
	}
	getchar();
}