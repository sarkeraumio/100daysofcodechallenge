#include<stdio.h>

int main()
{
    int n, i, sum=0;

    scanf("%d",&n);

    i=1;

    while(i<=n){
        if(i%2==0){
            printf("%d = Even\n",i);
        }
        else
            printf("%d = Odd\n",i);
        i++;
    }

    return 0;
}
