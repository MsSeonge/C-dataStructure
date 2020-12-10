#include <stdio.h>

void main()
{
	char c, c_array[100];
	int i, i_array[100];
	short s, s_array[100];
	float f, f_array[100];
	long l, l_array[100];
	double d;
	printf("\n char c 크기 = %d \t: char c_array의 크기=%4d", sizeof(c), sizeof(c_array));
	printf("\n int i 크기 = %d \t: int i_array의 크기=%4d", sizeof(i), sizeof(i_array));
	printf("\n short s 크기 = %d \t: short s_array의 크기=%4d", sizeof(s), sizeof(s_array));
	printf("\n float f 크기 = %d \t: float f_array의 크기=%4d", sizeof(f), sizeof(f_array));
	printf("\n long l 크기 = %d \t: long l_array의 크기=%4d", sizeof(l), sizeof(l_array));
	printf("\n double size:%d", sizeof(double));
	return 0;
}