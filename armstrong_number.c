#include<stdio.h>
void main()
{
    int n, r, arm = 0, c;
    printf("Enter the number : ");
    scanf("%d", &n);
    c = n;
    while(n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }

    if(c == arm)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}