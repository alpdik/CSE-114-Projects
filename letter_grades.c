//
// Created by alpdi on 3/17/2025.
//
#include <stdio.h>

char letter_grade(int int_grade)
{
    if (int_grade<=100 && int_grade>=0)
    {
        if (int_grade>=90)
        {
            return 'A';
        }
        else if (int_grade>=80)
        {
            return 'B';
        }
        else if (int_grade>=70)
        {
            return 'C';
        }
        else if (int_grade>=60)
        {
            return 'D';
        }
        else
        {
            return 'F';
        }
    }
    else
    {
        return 'X';
    }
}

void print_grade(char char_grade)
{
    if (char_grade!='X')
    {
        printf("Your letter grade is %c\n", char_grade);
    }
    else
    {
        printf("Invalid grade\n");
    }
}

int main()
{
    int int_grade;
    char char_grade;
    printf("Enter the integer grade: ");
    scanf("%d", &int_grade);
    char_grade = letter_grade(int_grade);
    print_grade(char_grade);
    return 0;
}