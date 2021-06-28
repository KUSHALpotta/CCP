#include<stdio.h>
int main()
{
    int i,j,m,n,k,l,a[10][10],b[10][10],c[10][10];

    printf("Enter the no of rows and coloumns in matrix 1 : \n");
    scanf("%d%d",&m,&n);

    //in this loop we are taking the element of the first matrix
    printf("Enter the elements of the first matrix row wise : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the no of rows and coloumns in matrix 2 : \n");
    scanf("%d%d",&k,&l);

    //in this loop we are taking the element of the second matrix
    printf("Enter the elements of the second matrix row wise");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //addition of the two matrices
    if(m==k && n==l)
    {
    for(i=0;i<k;i++)
    {
        for(j=0;i<l;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    }
    else
    {
        printf("The two matrix are not equal hence the addition is not possible");
    }

    // The resultant matrix
    printf("%d is the resultant matrix : \n");
    for(i=0;i<k;i++)
    {
        for(j=0;i<l;j++)
        {
            printf("%d",c[i][j]);
        }
    }
    return 0;
}
