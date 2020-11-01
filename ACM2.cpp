#include<stdio.h>
int main()
{
    int n,i,sum;
    scanf("%d",&n);
    {
            for(sum=0,i=1;i<=n;i++)
            sum+=i;
            printf("%d\n",sum);
    }
    return 0;
}
