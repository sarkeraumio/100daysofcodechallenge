/// 1. Print n to 1,  not 1 to n using while loop


#include<stdio.h>
int main()
{

    int i, n;
    scanf("%d", &n);

    for(i=n; i>=1; i=i-1)
    printf("%d ", i);

    return 0;
}
