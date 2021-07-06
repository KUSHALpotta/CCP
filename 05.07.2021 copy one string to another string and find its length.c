#include<stdio.h>

int main()
{
    int length,i,j;
    char str1[20],str2[20];

    printf("Enter the value of the string 1 : \n");
    gets(str1);

    printf("Enter the value of the string 2 : \n");
    gets(str2);

    i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    length=i;

    i=0;
    j=0;
    while(str1[i]!='\0')
    {
        str2[j]=str1[i];
        j++;
        i++;
    }
    str2[j]='\0';

    printf("The new string of string length %d is : ",length);
    puts(str2);

    return 0;

}
