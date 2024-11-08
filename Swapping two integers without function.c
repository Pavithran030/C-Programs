#include<stdio.h>
int main()
{
    int no1,no2,no3=0;
    
    printf("Enter two numbers to Swap:");
    scanf("%d%d",&no1,&no2);
    no3=no1;
    no1=no2;
    no2=no3;
    printf("Afternoon swapping two integer no1=%d and no2=%d ",no1,no2);
    return 0;
}
