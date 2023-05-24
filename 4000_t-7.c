#include<stdio.h>
main()
{
	int i,n,first=0,second=1,total;
	printf("Enter value n = ");
	scanf("%d",&n);
	total = first+second;
	printf("%d,%d",first,second);
	for(i=3;i<=n;i++){
		printf(",%d",total);
		first=second;
		second=total;
		total = first+second;
	}
	
	
}
