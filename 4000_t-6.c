#include<stdio.h>

main()
{

    int i=1,n,fact;
	printf("Enter value of n = ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);

         fact=fact*i;
		i++;
		
	}
	printf("factorial=%d",fact);
	
} 
