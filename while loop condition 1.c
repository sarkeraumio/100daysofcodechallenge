//while loop and condition
///1. Print the number from 1 to n, that are divisable than 3 and 5.
#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    i=0;

    while(i<=n)
    {
        if(i%3==0 && i%5==0)
        {
        printf("%d ", i);
        }
        i++;
    }
    return 0;

}
