#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

const int N = 3;
int main()
{
	int** A = (int**)malloc(N * sizeof(int*));
	int** B = (int**)malloc(N * sizeof(int*));
	int** C = (int**)malloc(N * sizeof(int*));
	int** D = (int**)malloc(N * sizeof(int*));
	int** E = (int**)malloc(N * sizeof(int*));

	for (int i = 0; i < N; i++)
	{
		A[i] = (int*)malloc(N * sizeof(int));
		B[i] = (int*)malloc(N * sizeof(int));
		C[i] = (int*)malloc(N * sizeof(int));
		D[i] = (int*)malloc(N * sizeof(int));
		E[i] = (int*)malloc(N * sizeof(int));
	}

	srand(time(NULL));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
printf("A:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	printf("\nB:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", B[i][j]);
		printf("\n");
	}
	
	printf("Choose operation:\n");
	char x;
	scanf_s("%c", &x);
	switch (x) {
	case '+':
		for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			D[i][j] = 0;
			D[i][j] += A[i][j] + B[i][j];
		}
printf("\nA+B:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", D[i][j]);
		printf("\n");
	}
		break;
	case '-':
		for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			E[i][j] = 0;
			E[i][j] += A[i][j] - B[i][j];
		}
printf("\nA-B:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", E[i][j]);
		printf("\n");
	}
		break;
	case '*':
		for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < N; k++)
				C[i][j] += A[i][k] * B[k][j];
		}
printf("\nAxB:\n");
	for (int i = 0; i < N; i++)
	  {
		for (int j = 0; j < N; j++)
			printf("%d ", C[i][j]);
		printf("\n");
	  }
		break;
	    case 'D':
		 printf("\nDet A:\n");
	     int det = A[0][0] * A[1][1] * A[2][2] - A[0][0] * A[1][2] * A[2][1] - A[0][1] * A[1][0] * A[2][2] + A[0][1] * A[2][0] * A[1][2] + A[0][2] * A[1][0] * A[2][1] - A[0][2] * A[1][1] * A[2][0];
	     printf("%d", det);
	     printf("\n");
		break;
	}

	for (int i = 0; i < N; i++)
	{
		free(A[i]);
		free(B[i]);
		free(C[i]);
		free(D[i]);
		free(E[i]);
	}
	free(A);
	free(B);
	free(C);
	free(D);
	free(E);
	return 0;

}
