#include <stdio.h>

int main()
{
    int marks;
    char grade;
    printf("Enter Marks between(0-100)\n");
    scanf("%d" , &marks);

    if(marks<0 || marks>100)
    {
        printf("Invalid Marks.");
        printf("please enter valid marks\n");
        printf("Enter Marks between(0-100)\n");
        scanf("%d" , &marks);
    }
    switch(marks/10)
    {
        case 10:
        case 9:
        grade = 'A';
        break;
        case 8:
        grade = 'B';
        break;
        case 7:
        grade = 'C';
        break;
        case 6:
        grade = 'D';
        break;
        case 5:
        grade = 'E';
        break;
        default:
        grade = 'F';

    }
    printf("%c",grade);
}