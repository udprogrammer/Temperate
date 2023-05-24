#include<stdio.h>

main()
{
    int i, num, prime_number;
    prime_number = 1; 

    printf("Enter your number = ");
    scanf("%d", &num);

    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
           prime_number = 0;
            break;
        }
    }

    if(prime_number == 1 && num > 1)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is not prime number", num);
    }
}
