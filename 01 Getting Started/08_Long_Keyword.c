/*
Author   : Shubham Jante
Github   : https://github.com/shubhamjante
LinkedIn : https://www.linkedin.com/in/shubhamjante/
Blog:    : https://cpythonian.wordpress.com/
*/

#include <stdio.h>

int main()
{
    int a;
    long int b;
    long long c;  // equivalent to long long int c;
    double e;
    long double f;

    printf("Size of int = %zu bytes \n", sizeof(a));
    printf("Size of long int = %zu bytes\n", sizeof(b));
    printf("Size of long long int = %zu bytes\n", sizeof(c));
    printf("Size of double = %zu bytes\n", sizeof(e));
    printf("Size of long double = %zu bytes\n", sizeof(f));
    
    return 0;
}
