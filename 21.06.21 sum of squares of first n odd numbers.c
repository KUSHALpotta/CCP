#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the no upto which the sum needs to be calculated : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        sum=sum+(i*i);
        }
    }
    printf("The sum of squares is %d ",sum);
    return 0;
}
