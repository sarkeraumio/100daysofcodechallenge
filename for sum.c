#include<stdio.h>
int main()
{

    int i, u, sum=0;

    scanf("%d", &u);

    for(i=1; i<=u; i=i+1)
    {
        sum=sum+i;
    }

        printf("sum is %d\n", sum);


    return 0;
}
