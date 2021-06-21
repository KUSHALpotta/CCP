#include<stdio.h>
#include<math.h>

float area(int a,int b,int c);
int main()
{
   int a,b,c;

   printf("enter the values of the 3 sides : /n");
   scanf("%d%d%d",&a,&b,&c);

   printf("the area is : %.2f",area(a,b,c));

   return 0;
}

float area(int a,int b,int c)
{
    int s=(a+b+c)/2;
    float area_temp=(sqrt,((s-a)*(s-b)*(s-b)));
    return area_temp;
}
