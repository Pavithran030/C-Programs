#include<stdio.h>
int main()
{
    int ar1[5]={2,3,4,4},ar2[5]={4,5,6,7};
    //scanf("%d %d",&ar1,&ar2);
    for(int it=0;it<=5;it++)
    {
        for(int ti=0;ti<=it;ti++) 
        {     
            printf("%d",ar1[ti] );  
        }
        printf("\n"); 
    }
    return 0;
}
