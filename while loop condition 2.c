///Print the sum of all number from 1 to n that are dividable, by 2 and 3 both.

#include<stdio.h>

int main()
{
    int i, n, sum=0;
    scanf("%d", &n);
    i=1;
    while(i<=n){
        if(i%2==0&&i%3==0)
        {
        sum=sum+i;
        }
        i++;
    }

    printf(" %d\n ", sum);


    return 0;

}
