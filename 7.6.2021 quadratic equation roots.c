#include<stdio.h>
#include<math.h>
float quad_eq(int,int,int);
int main()
{
    float D;
    int a,b,c;

    printf("Enter the values of a,b,c which represant the coeff of the eqn");
    scanf("%d%d%d",&a,&b,&c);

    quad_eq(a,b,c);

    return 0;

}
float quad_eq(int a,int b,int c)
{
    float root1,root2,i,D,realPart,imagPart;
    D=((b*b)-(4*a*c));

    if(D>0)
    {
        root1=(((-b)+D)/(2*a));
        root2=(((-b)-D)/(2*a));
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);

    }
    else if(D==0)
    {
        root1=root2=((-b)/(2*a));
        printf("root1 = root2 = %.2lf;", root1);


    }
    else if(D<0)
    {
        root1=((-b)/(2*a))+((i*sqrt(D))/(2*a));
        root2=((-b)/(2*a))-((i*sqrt(D))/(2*a));
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);


    }

}
