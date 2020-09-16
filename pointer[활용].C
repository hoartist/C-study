#include<stdio.h>

int main(void) {

	int data[][4] = { {1,2,3,4}
	,{5,6,7,8},{9,10,11,12},{13,14,15,16}
	};
	int(*p)[4] = &data[0];
	int i, j, sum;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%2d ", p[i][j]);
		printf("|%d\n",sum);
	}
	printf("-----------\n");



	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 4; j++)
			printf("%2d ", (*(p +j))[i]);
		printf("| %d \n",(*(p + j))[i]);
	}
	printf("----------\n");
	for (i = 0; i < 4; i++)
	{

	}
	printf("\n");


	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++)
			printf("%2d ",(*(p-i))[3-j]);
		printf("|%d\n", sum);
		printf("\n");
	}
	return 0;
}