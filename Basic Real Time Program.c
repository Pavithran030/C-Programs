// 1.Addition Even numbers upto Range

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number range to add even numbers :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    if(i%2==0)
    { 
      sum=sum+i;   
    }
    }
    printf("The Sum is %d",sum);
    return 0;
}

************************************************************************
Sample Input 1
23

sample Output 1

Enter the number range to add even numbers :23
The Sum is 132

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// 2.Even Numbers upto given range

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number range :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    if(i%2==0)
    { 
      printf("%d\t",i);   
    }
    }
    return 0;
}

******************************************************************************
Sample Input 1
23

Sample Output 1

0	2	4	6	8	10	12	14	16	18	20	22	


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//3.Average of Odd Numbers below the Range

#include<stdio.h>
int main()
{
    int n,i,total=0,sum=0;
    float all;
    //float sum=0;
    printf("Enter the number range to add Odd numbers :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
            total++;
        }
    }
    all=sum/total;
    printf("%d",sum);
    printf("\nAverage: %.2f",all);
    return 0;
}
***************************************************************************************

Sample Input 1

6

Sample Output 1

Enter the number range to add Odd numbers :5
Sum of the given Range Odd numbers :9
Average: 3.00

Sample Input 2

15

Sample output 2

Enter the number range to add Odd numbers :15
Sum of the given Range Odd numbers :64
Average: 8.00


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// 4.Multiplication Table

#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter the table number:");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    { 
         printf("%d * %d =%d",i,a,i*a);
         printf("\n");
    }
return 0;
}

**************************************************************************************
Sample Input 1

5

Sample output 1

Enter the table number:5

1 * 5 =5
2 * 5 =10
3 * 5 =15
4 * 5 =20
5 * 5 =25
6 * 5 =30
7 * 5 =35
8 * 5 =40
9 * 5 =45
10 * 5 =50

Sample Input 2

18

Sample Output 2

Enter the table number:18

1 * 18 =18
2 * 18 =36
3 * 18 =54
4 * 18 =72
5 * 18 =90
6 * 18 =108
7 * 18 =126
8 * 18 =144
9 * 18 =162
10 * 18 =180

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//5.Area and Perimeter of Square and Rectangle

#include<stdio.h>

int main()
{
    float a,x,y,z;
    printf("Enter the side of square: ");
    scanf("%f",&a);
    printf("\nArea of Square:%.2f sq.cm",a*a);
    printf("\nPerimeter of Rectangle: %.1f cm",4*a);
    printf("\nEnter the length and breadth of Rectangle: ");
    scanf("%f%f",&x,&y);
    printf("\nArea of Rectangle: %.2f sq.cm",x*y);
    printf("\nPerimeter of Rectangle: %.2f cm",2*(x+y));
    return 0;
}

*************************************************************************************
Sample Input 1

4
9 15

Sample output 1

Enter the side of square: 4
Area of Square:16.00 sq.cm
Perimeter of Rectangle: 16.0 cm
Enter the length and breadth of Rectangle: 9 15
Area of Rectangle: 135.00 sq.cm
Perimeter of Rectangle: 48.00 cm

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

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

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
