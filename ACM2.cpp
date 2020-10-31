#include<stdio.h>
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m))
	{
		int sum;
		if(2*n<=m)
			sum=n;
		else if(2*m<=n)
			sum=m;
		else
			sum=(n+m)/3;
		printf("%d\n",sum);
	}
	return 0;
}