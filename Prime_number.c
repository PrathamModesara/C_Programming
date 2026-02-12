#include<stdio.h>
void main()
{
    int i, n, k = 0;
    printf("Enter the number :");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            k = k + 1;
        }
    }

    if(k == 2)
    {
        printf("Prime number ");
    }
    else
    {
        printf("Not prime number ");
    }
}