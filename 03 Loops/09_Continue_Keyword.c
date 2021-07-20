/*
Display values from 0 to 10 except 4 and 6
*/

#include<stdio.h>

int main()
{
	int i = 0;

	while(i <= 10)
	{
		if(i == 4 || i == 6)
		{
			i += 1;
			continue;
		}

		printf("%d\n", i);
		i += 1;
	}
	return 0;
}