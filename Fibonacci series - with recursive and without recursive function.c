// Fibonacci series without recursive

#include <stdio.h>

int main()
{
    int r,i=0,j=1,k;
    printf("Enter the limit : ");
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        if(i<=1)
        {
            printf("%d ",i);
        }
        else
        {

         k=i+j;
         i=j;
         j=k;
        printf("%d ",k);  
        }
    }
}

.......................................................

Enter the limit : 5
0 1 3 5 9 

........................................................
// Fibonacci series with recursively function 

#include <stdio.h>
int fibo(int y)
{
    if(y<=1)
    {
        return y;
    }
    else
    {
        return fibo(y-1)+fibo(y-2);
    }
}
int main()
{
    int r,i=0,j=1,k;
    printf("Enter the limit : ");
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        printf("%d ",fibo(i));
    }
}

......,.................................................


Enter the limit : 5
0 1 1 2 3 
.........................................................
