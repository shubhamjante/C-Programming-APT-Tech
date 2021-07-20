#include <stdio.h>
#include<limits.h>

int main()
{
    //int i = 30000;
    int i = INT_MAX - 50;
    printf("Max int range on this syste is: %d", INT_MAX);

    while(i <= INT_MAX)
    {
        printf("%d\t", i);
        i += 1;
    }
    return 0;
}