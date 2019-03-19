#include <stdio.h>
#include <stdlib.h>

void main()
{
	int Buff[5] = (5,15,30,10,35);
	int *p;
	int i;
	p = Buff;

	//Acceder a los elementos mediante notación subindexada

	for (i = 0; i < 5; ++i)
	{
		printf("%d\n", Buff[i]);
	}
	//Acceda a los elementos del array mediante el puntero p on aritmetica de punteros
	return 0;
}