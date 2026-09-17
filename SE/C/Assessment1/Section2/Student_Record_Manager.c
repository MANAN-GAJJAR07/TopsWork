#include <stdio.h>

struct Student
{
    char name[50];
    int rollno;
    float marks;
    char grade;
};

void assignGrade(struct Student *s)
{
    if (s->marks >= 90)
    {
        s->grade = 'A';
    }
    else if (s->marks >= 75)
    {
        s->grade = 'B';
    }
    else if (s->marks >= 60)
    {
        s->grade = 'C';
    }
    else if (s->marks >= 45)
    {
        s->grade = 'D';
    }
    else
    {
        s->grade = 'F';
    }
}

void printTopper(struct Student students[], int n)
{
    int i;
    int topper = 0;

    for (i = 1; i < n; i++)
    {
        if (students[i].marks > students[topper].marks)
        {
            topper = i;
        }
    }

    printf("\nTop Performer:\n");
    printf("Name: %s\n", students[topper].name);
    printf("Marks: %.2f\n", students[topper].marks);
}

int main()
{
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].rollno);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        assignGrade(&students[i]);
    }

    printf("\nStudent Records\n");
    printf("---------------------------------------------\n");
    printf("Name\t\tRoll No\tMarks\tGrade\n");
    printf("---------------------------------------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("%-15s\t%d\t%.2f\t%c\n",
               students[i].name,
               students[i].rollno,
               students[i].marks,
               students[i].grade);
    }

    printTopper(students, 3);

    return 0;
}
