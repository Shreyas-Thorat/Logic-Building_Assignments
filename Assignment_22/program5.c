#include<stdio.h>

void DisplaySchedule(char ch)
{
    switch(ch)
    {
        case 'A' :
            printf("Your Exam is Scheduled at 7 Am\n");
            break;

        case 'B':
            printf("Your Exam is Scheduled at 8:30 Am\n");
            break;

        case 'C':
            printf("Your Exam is Scheduled at 9:20 Am\n");
            break;

        case 'D':
            printf("Your Exam is Scheduled at 10:30 Am\n");
            break;

        case 'a' :
            printf("Your Exam is Scheduled at 7 Am\n");
            break;

        case 'b' :
            printf("Your Exam is Scheduled at 8:30 Am\n");
            break;

        case 'c' :
            printf("Your Exam is Scheduled at 9:20 Am\n");
            break;

        case 'd' :
            printf("Your Exam is Scheduled at 10:30 Am\n");
            break;

        default :
            printf("Enter correct Division\n");
    } 
  

}

int main()
{
    char cValue = '\0';

    printf("Enter Your Division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;


}