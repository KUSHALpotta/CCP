#include<stdio.h>
int main()
{
    int m,n,i;

    printf("Enter the values of m and n : ");
    scanf("%d%d",&m,&n);

    for(i=m;n>=i;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
