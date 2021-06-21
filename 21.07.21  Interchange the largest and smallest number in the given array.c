#include<stdio.h>
int main()
{
    int i,n,maxpos,minpos,minval=0,maxval=0,a[5],temp;

    printf("Enter the number of array elements : ");
    scanf("%d",&n);

    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>maxval)
        {
            maxval=a[i];
        }
        else if(minval<a[i])
        {
            minval=a[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if(maxval=a[i])
        {
            maxpos=i;
        }
        else if(minval=a[i])
        {
            minpos=i;
        }
    }

    //for interchanging the array elements
    for(i=0;i<n;i++)
    {
        temp=a[maxpos];
        a[maxpos]=a[minpos];
        a[minpos]=temp;
    }
    printf("The new array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
