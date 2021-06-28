#include<stdio.h>
int main()
{
    int i,j,m,n,a[10][10],highest;

    printf("Enter the no of students");
    scanf("%d",&m);

    printf("Enter the no of subjects");
    scanf("%d",&n);

    for(i=0;i<m;i++)
    {
        printf("Enter the marks of student %d : ",i);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //highest marks in each subject
    //highest[0][0];
    for(j=0;j<n;j++)
    {
        highest=a[0][j];
        for(i=0;i<m;i++)
        {
           if(a[i][j]>highest)
           {
               highest=a[i][j];
           }
        }
        printf("%d is the highest in sub %d : ",highest,j);
    }

    return 0;

}
