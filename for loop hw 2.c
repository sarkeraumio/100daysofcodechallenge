///2. Print the sum of the all odd numbers from 1 to n

#include<stdio.h>

int main()
{

    int i, n, sum=0;
    scanf("%d", &n);

    for(i=1;i<=n; i=i+2)
    {

        sum=sum+i;
    }

    printf("The sum of odd numbers from 0 to n is %d ", sum);
    return 0;
}
