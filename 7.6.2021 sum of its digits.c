#include<stdio.h>
int sum(int);
int main()
{
    int no;
    printf("Enter the value of a no");
    scanf("%d",&no);

    sum(no);
    return 0;
}

int sum(int no)
{
    int lastdigit,sum_temp;
    while(no!=0)
    {
        lastdigit=no%10;
        sum_temp+=lastdigit;
        no=no/10;
    }
    printf("%d",sum_temp);
    return 0;
}
