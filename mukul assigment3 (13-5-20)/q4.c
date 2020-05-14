#include <stdio.h>
void main()
{
    int n, i,r, c= 0;
    printf("Enter an integer \n");
    scanf("%d", &n);
    i = n;
    while (n > 0)
    {
        r = n % 10;
        c = c * 10 + r;
        n /= 10;
    }
    printf("Given number is = %d\n", i);
    printf("Its reverse is  = %d\n", c);
    if (i == c)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
}
