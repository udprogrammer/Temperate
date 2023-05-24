#include<stdio.h>

main()
{
	int first,last,number,sum;
	printf("Enter number = ");
	scanf("%d",&number);
	last = number % 10;
	while(number>=10){
	    number = number / 10;
	}
	first=number;
	sum=last+first;
	printf("%d",sum);
	
}
