/*
Author   : Shubham Jante
Github   : https://github.com/shubhamjante
LinkedIn : https://www.linkedin.com/in/shubhamjante/
Blog:    : https://cpythonian.wordpress.com/
*/

#include<stdio.h>

int main()

{
    int i;
    float f;
    double d;
    char c;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(i));
    printf("Size of float: %zu bytes\n", sizeof(f));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of char: %zu byte\n", sizeof(c));
    
    return 0;
}
