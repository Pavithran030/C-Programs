1.Chef has started working at the candy store. The store has 100 chocolates in total. Chef’s daily goal is to sell X chocolates. For each chocolate sold, he will get 1 rupee. However, if the Chef exceeds his daily goal, he gets 2 rupees per chocolate for each extra chocolate. If the Chef sells Y chocolates in a day, find the total amount he made.

Program

#include<stdio.h>
int main()
{
    int total_choco=100,x,y,a,b;
    printf("Chocolate sale by the chief: ");
    scanf("%d",&x);
    if(x<=100)
    {
    a=x*1;
    printf("1 rupees for his normal goal:%d",a);
    printf("\nwhen exceed his goal:");
    scanf("%d",&y);
    b=2*y;
    printf("Total amount when goal exceed: %d",b);
    }
    else
    {
    printf("The Chocolate is out of stock in the shop");
    }
    return 0;
 }

**********************************************
Sample input

Chocolate sale by the chief: 78
1 rupees for his normal goal:78
when exceed his goal:97
Total amount when goal exceed: 194

**********************************************

2.There are N children and the Chef wants to give them 1 candy each. Chef already has x candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 4 candies are available. Determine the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the children.
Input Format
The first and only line of each test case contains two integers and — the number of
children and the number of candies Chef already has.
Output Format
The minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the children.

Program

#include<stdio.h>
int main()
{
    int N,X,diff,a,b;
    printf("Total number of childrens:");
    scanf("%d",&N);
    printf("Total number of Candies:");
    scanf("%d",&X);
    diff=N-X;
    a=diff/4;
    if(N>X)
    {
      if(diff%4==0)
      {
        printf("Buy %d packets of chocolate: ",a);
      }
      else if(diff>4)
      {
       a=a+1;
       printf("Buy %d packets of chocolate ",a);
      }
      else
      {
        printf("Buy 1 packet of chocolate ");
      }
    }
    else
    {
       printf("No need to go to candy shop");
    }
}

**********************************************
Sample input 1

Total number of childrens:68
Total number of Candies:40
Buy 7 packets of chocolate

sample input 2

Total number of childrens:50
Total number of Candies:50
No need to go to candy shop

**********************************************
3.	Chef started watching a movie that ran for a total of x minutes. Chef has decided to watch the first y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets interesting only after the first y minutes. How long will Chef spend watching the movie in total?
Note: It is guaranteed that y is even.

Program

#include<stdio.h>
int main()
{
  int x,y,speed,total;
  printf("Enter total time of the movie: "); 
  scanf("%d",&x);
  printf("Normal speed is 1x");
  printf("\nEnter minute to watch the movie faster:");
  scanf("%d",&y);
  if(y%2==0)
  {
  speed=y/2;
  total=x-speed;
  printf("Time to complete the movie: %d",total);
  }
  else
  {
  printf("Enter the even number for y");
  }
  return 0;
}

**********************************************
Sample input 1

Enter total time of the movie: 60
Normal speed is 1x
Enter minute to watch the movie faster:30
Time to complete the movie: 45

Sample input 2

Enter total time of the movie: 60
Normal speed is 1x
Enter minute to watch the movie faster:43
Enter the even number for Y

**********************************************

