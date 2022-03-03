///Print the sum of all number from 1 to n that are dividable, by 2 and 3 both.

#include<stdio.h>
int main()
{

    int i, n, sum=0;
    scanf("%d", &n);

    for(i=1;i<=n;i++){
            if(i%2==0&&i%3==0){

        sum=sum+i;
    }
    }

    printf("%d\n ", sum);
    return 0;
}
