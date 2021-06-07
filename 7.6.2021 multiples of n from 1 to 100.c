#include<stdio.h>
int multiples(int);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    multiples(n);

    return 0;
}
int multiples(int n)
{
    int i=1;
    while(i!=101)
    {

        if(i%n==0)
        {
            printf("%d\n",i);

        }
        i++;
    }
}
