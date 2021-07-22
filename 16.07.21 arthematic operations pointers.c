#include<stdio.h>
#include<math.h>

int operations(int *, int *, int *, int *, int*, float*, int *);
int main()
{
    int a,b;
    int addition,subtraction,multiplication,remainder;
    float division;
    printf("Enter any two numbers that you want arethematic operation of :  ");
    scanf("%d %d",&a,&b);
    operations(&a, &b, &addition, &subtraction, &multiplication,&division, &remainder);
    printf("Addition :%d\n",addition);
    printf("Subtraction :%d\n",subtraction);
    printf("Division :%0.2f\n",division);
    printf("Multiplication :%d\n",multiplication);
    printf("Remainder :%d\n",remainder);
    return 0;
}
    int operations(int *a, int *b, int *addition, int *subtraction, int
    *multiplication, float *division, int *remainder)
{
    *addition=*a+*b;
    *subtraction=*a-*b;
    *multiplication=*a**b;
    *division=(float)(*a)/(*b);
    *remainder=(*a)%(*b);
    return 0;
}
