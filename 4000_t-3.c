#include<stdio.h>

main()
{
	int i=0,n;
	printf("Enter value n = ");
	scanf("%d",&n);
	
	 while(n>0){
        n = n / 10;
		i++;
    }
    printf("%d",i);
}
