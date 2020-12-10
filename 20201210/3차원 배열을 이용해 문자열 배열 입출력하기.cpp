#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void main()
{
	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i ++) {
		printf("\n 학생 %d의 이름: ", i + 1);   // 20 은 생략 되었어도 문자열이 입력으로 들어간다. 
		fgets(student[i][0], sizeof(student[i][0]), stdin);
		printf("학생 %d의 이름: ", i + 1);
		fgets(student[i][1], sizeof(student[i][1]), stdin);
		printf("학생 %d의 이름: ", i + 1);
		fgets(student[i][2], sizeof(student[i][2]), stdin);
	}
	for (i = 0; i < 2; i++) {
		printf("\n\n학생 %d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0'; k++)
				printf("%c", student[i][j][k]);
		}
	}
	getchar();
}