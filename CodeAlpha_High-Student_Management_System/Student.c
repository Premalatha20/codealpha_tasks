#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int choice, searchId;
    int found;

    while(1)
    {
        printf("\n===== Student Management System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                fp = fopen("students.txt", "a");

                printf("Enter Student ID: ");
                scanf("%d", &s.id);

                printf("Enter Student Name: ");
                scanf("%s", s.name);

                printf("Enter Student Marks: ");
                scanf("%f", &s.marks);

                fprintf(fp, "%d %s %.2f\n",
                        s.id, s.name, s.marks);

                fclose(fp);

                printf("Student Added Successfully!");
                break;

            case 2:

                fp = fopen("students.txt", "r");

                printf("\nStudent Records:\n");

                while(fscanf(fp, "%d %s %f",
                             &s.id, s.name, &s.marks) != EOF)
                {
                    printf("\nID: %d", s.id);
                    printf("\nName: %s", s.name);
                    printf("\nMarks: %.2f\n", s.marks);
                }

                fclose(fp);
                break;

            case 3:

                fp = fopen("students.txt", "r");

                printf("Enter Student ID to Search: ");
                scanf("%d", &searchId);

                found = 0;

                while(fscanf(fp, "%d %s %f",
                             &s.id, s.name, &s.marks) != EOF)
                {
                    if(s.id == searchId)
                    {
                        printf("\nStudent Found!");
                        printf("\nID: %d", s.id);
                        printf("\nName: %s", s.name);
                        printf("\nMarks: %.2f\n", s.marks);

                        found = 1;
                    }
                }

                if(found == 0)
                {
                    printf("Student Not Found!");
                }

                fclose(fp);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid Choice");
        }
    }

    return 0;
}