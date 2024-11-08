//Factorial with recursive function 

#include <stdio.h>
int fact(int a)
{
    if(a<=1)
    {
        return a;
    }
    else
    {
         return a*fact(a-1);
    }

}
void main() {
    int a;
    printf("Enter a number to find its factorial : ");
    scanf("%d",&a);
    printf("%d",fact(a));
}

......................................................
Enter a number to find its factorial : 5
120

......................................................

//Factorial without recursive function 


#include <stdio.h>

int main()
{
    int num,l=1;
    printf("Enter a number to find its factorial : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        l=l*i;
    }
    printf("%d\n",l);
}

........................................................


Enter a number to find its factorial : 5
120

.........................................................
