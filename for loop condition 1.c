///1. Print the number from 1 to n, that are divisable than 3 and 5.
///for loop condition

#include<stdio.h>

int main()
{

    int i, u;

    scanf("%d", &u);

    for(i=1; i<=u; i++)
    {
        if( i%3==0 && i%5==0)
        {

            printf( "%d ", i);
        }


    }


    return 0;
}
