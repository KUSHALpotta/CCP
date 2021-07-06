#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    char section;
    char department[20];
    int fees;
    float totalmarks;
};
int main()
{
    struct student stud1;
    struct student stud2;

    printf("Enter the roll no's of student 1 and 2 : \n");
    scanf("%d%d",&stud1.rollno,&stud2.rollno);

    printf("Enter the name's of student 1 : \n");
    gets(stud1.name);

    printf("Enter the name's of student 2 : \n");
    gets(stud2.name);

    printf("Enter the section's of student 1 and student 2 : \n");
    scanf("%c%c",&stud1.section,&stud2.section);

    printf("Enter the department of student 1 : \n");
    gets(stud1.department);

    printf("Enter the department of student 2 : \n");
    gets(stud2.department);

    printf("Enter the fees of both the students : \n");
    scanf("%d%d",&stud1.fees,&stud2.fees);

    printf("Enter the total marks of student 1 : \n");
    scanf("%f",&stud1.totalmarks);

    printf("Enter the total marks of student 2 : \n");
    scanf("%f",&stud2.totalmarks);

    if(stud1.totalmarks>stud2.totalmarks)
    {
        printf("Student 1's marks are higher : \n");
    }
    else if(stud1.totalmarks==stud2.totalmarks)
    {
        printf("Both are equal\n");
    }
    else if(stud1.totalmarks>stud2.totalmarks)
    {
        printf("Student 2's marks are higher\n");
    }

    return 0;
}
