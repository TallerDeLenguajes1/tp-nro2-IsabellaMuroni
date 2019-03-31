#include <stdio.h>
#include <stdlib.h>
#define F  15
//#define M  5

int main()
{
	int i, j; 
	int M = rand() % (15-5+1) + 5;
	double mt [F] [M], *P;
	
	P = &mt[0][0]; //Puntero


	for (i = 0; i < F; ++i)
	{
		for (j = 0; j < M; ++j)
		{
			*(P + (i * M + j))  = rand() % (999-100+1) + 100;
		}
		printf("\n");
	}


	for (i = 0; i < F; ++i)
	{
		for (j = 0; j < M; ++j)
		{
			printf("%.2lf  ", *(P + (i * M + j)));
		}
		printf("\n");
	}

	int cont_pares;
	cont_pares = 0;
	double vector_dim[15];

	for (int k = 0; k < F; ++k)
	{
		for (int l = 0; l < M; ++l)
		{
			if( *(P + (k * M + l)) % 2 == 0){
				vector_dim[k] = *(P + (k * M + l));
				cont_pares++;
			}
		}
		
	}
	for (int g = 0; g < 15; ++g)
	{
		printf("%.2lf\n", vector_dim[g]);
	}

	printf("%d\n",cont_pares);



	return 0;
}
	