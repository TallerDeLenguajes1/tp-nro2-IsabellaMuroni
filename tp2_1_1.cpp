
#define N  4
#define M  5


	int f,c;
	double mt [N] [M];

	for (f = 0; f < N; ++f)
	{
		for (c = 0; c < M; ++c)
		{
			cprintf("%lf  ", mt [f] [c]);
		}
		cprintf("\n");
	}
