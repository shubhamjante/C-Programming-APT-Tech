#include <stdio.h>

int main()
{
    int n, rev = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == rev)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}