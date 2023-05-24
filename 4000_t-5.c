#include<stdio.h>

main()
{
	
    int n, num, temp = 0;
    printf("Enter number = ");
    scanf("%d", &n);
    num = n; 
               
    while(n > 0)
    {
        temp = (temp * 10) + (n % 10);
        n  = n / 10;
    }

    if(temp == num)
    {
        printf("%d is palindrome.", num);
    }
    else
    {
        printf("%d is not palindrome.", num);
    }

}
