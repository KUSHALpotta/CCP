#include<stdio.h>
#include<math.h>
int main()
{

    float x1,x2,y1,y2;
    float distance;

    printf("enter all 4 coordinates : ");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);

    distance=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("distance is : %.2f",sqrt(distance));

    return 0;


}
