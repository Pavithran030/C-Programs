// C Programto find the cube if a number using function (no argument and no return type)

#include<stdio.h>
#include<math.h>
void high()
{
	double a;
	printf("Enter a nunber to find cube: ");
	scanf("%lf",&a);
	printf("The cube of given number : %.lf",pow(a,3));
}
void main()
{
	high(); 
}

....................................................................................................................................
Input -1
      Enter a nunber to find cube: 2
      The cube of given number : 8

Input -2
      Enter a nunber to find cube: 5
      The cube of given number : 125

....................................................................................................................................

//C Program with function using Call by value

#include<stdio.h>
void pattern(int t) //Formal parameter
{
	t=10+1;
	printf("Total value of three number: %d\n",t);
}
void main()
{
	int a=30,b=40,c=50,t;
	t=a+b+c;
	pattern(t); //Actual parameter
	printf("Total of three numbers : %d",t);
}

.......................................................................................................................................

Input -1

	Total value of three number: 11
	Total of nthree numbers : 120
.........................................................................................................................................
// C Program with function using Call by reference

#include<stdio.h>
void pattern(int *t) //Formal Parameter
{
	*t=10+1;
	printf("Total value of three number: %d\n",*t);
}
void main()
{
	int a=30,b=40,c=50,t;
	t=a+b+c;
	pattern(&t);// Actual Parameter
	printf("Total of three numbers : %d",t);
}

...........................................................................................................................................

Input -1

        Total value of three number: 11
	Total of nthree numbers : 11

............................................................................................................................................

