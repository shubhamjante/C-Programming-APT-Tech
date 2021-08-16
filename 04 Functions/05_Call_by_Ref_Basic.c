#include <stdio.h>

void calc_net_sal(int*, int*);
//void calc_net_sal(int *x, int *sal);

int main()
{
	int ctc=500, net_sal;

	calc_net_sal(&ctc, &net_sal);
	printf("\nAddress of net_sal: %u", &net_sal);

	printf("\nAfter Function call: %d", net_sal);

	return 0;
}

void calc_net_sal(int *x, int *sal)
{
	int pf=50, esic=50;
	printf("\nAddress of sal param: %u", &sal);

	*sal = *x - (pf + esic);
}
