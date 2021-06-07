#include<stdio.h>
int smallest(int,int,int);

int main()
{
    int a,b,c;
    printf("Enter the three nos : \n");
    scanf("%d%d%d",&a,&b,&c);

    //smallest(a,b,c);
    printf("%d",smallest(a,b,c));

    return 0;

}

int smallest(int a,int b,int c)
{
    int temp;
    while(a!=b!=c)
    {
        temp=((a<b && a<c)?a:(b>c?b:c));
        return temp;
    }
}
