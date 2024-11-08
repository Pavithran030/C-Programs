// Perfect Number

#include<stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter the number to find its perfect numbers: ");
    scanf("%d",&n);
    printf("The perfect numbers of %d are \n",n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            printf(" %d",i);  
        }
    }
    printf("\nThe sum of the divisor of a number is equal to the given number is called Perfect Number ");
    if(sum==n)
    { 
        printf("\n%d is a Perfect Number ",n); 
    } 
    else 
    { 
        printf("\n%d is Not a Perfect Number ",n);
    }
    return 0;
}

*******************************************************
Simple Input 1
6

Sample Output 1

Enter the number to find its perfect numbers: 6
The perfect numbers of 6 are
 1 2 3
The sum of the divisor of a number is equal to the given number is called Perfect Number
6 is a Perfect Number
