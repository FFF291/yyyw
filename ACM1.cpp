#include<stdio.h>
 int main()
{
   int a,i,j,n,m,sum;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
 {
       scanf("%d",&m);
        sum=0;
         for(j=1;j<=m;j++)
		 {
              scanf("%d",&a);sum+=a;
		 } 
         printf("%d\n",sum);
 }
  return 0;
}