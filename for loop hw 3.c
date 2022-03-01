///3. Print the average of sum of 1 to n

#include<stdio.h>

int main()
{
    double i, n, sum=0;

    scanf("%lf", &n);

    for(i=1; i<=n; i=i+1)

    {

        sum=sum+i;
    }

    printf("The average of the sum of 1 to n is %.1lf\n", sum/n);

    return 0;
}

