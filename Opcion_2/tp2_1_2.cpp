#include <stdio.h>
#include <stdlib.h>
#define N  4
#define M  5

int main()
{
	int f,c; 
	double mt [N] [M], *P;
	//double num;
	//num = rand() % (15-5+1);
	P = &mt[0][0];

	for (f = 0; f < N; ++f)
	{
		for (c = 0; c < M; ++c)
		{
			mt [f] [c]  = rand() % (15-5+1);
		}
		printf("\n");
	}


	for (f = 0; f < N; ++f)
	{
		for (c = 0; c < M; ++c)
		{
			printf("%lf  ", mt [f] [c]);
		}
		printf("\n");
	}

	return 0;
}
	