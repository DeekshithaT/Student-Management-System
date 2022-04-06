#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void add_student();
void find_fn();
void find_rl();
void find_c();
int i = 0;
struct student_info {
    char name[50];
    int roll;
    float cgpa;
    char branch[10];
} st[55];
void add_student()
{
  
    printf("Add the Students Details\n");
    printf("--------********--------\n");
    printf("Enter the name of student\n");
    scanf("%s", st[i].name);
    printf("Enter the Roll Number\n");
    scanf("%d", &st[i].roll);
    printf("Enter the CGPA\n");
    scanf("%f", &st[i].cgpa);
    printf("Enter the course ID"
           " of each course\n");
    scanf("%s",st[i].branch);
}
void find_rl()
{
    int x;
    printf("Enter the Roll Number"
           " of the student\n");
    scanf("%d", &x);
    for (int j = 1; j <= i; j++) {
        if (x == st[i].roll) {
            printf("The Students Details are\n");
            printf("The name is %s\n",st[i].name);
            printf("The CGPA is %f\n",st[i].cgpa);
            printf("The branch is %s\n",st[i].branch);
        }
    }
}
  
void find_fn()
{
    char a[50];
    printf("Enter the Name of the student\n");
    scanf("%s", a);
    int c = 0;
  
    for (int j = 1; j <= i; j++) {
        if (!strcmp(st[j].name, a)) {
  
            printf(
                "The Students Details are\n");
            printf(
                "The name is %s\n",
                st[i].name);
            printf(
                "The Roll Number is %d\n ",
                st[i].roll);
            printf(
                "The CGPA is %f\n",
                st[i].cgpa);
            printf("The branch is %s\n",st[i].branch);
        }
        else
            printf(
                "The Name not Found\n");
    }
}
void find_c()
{
    char b[10];
    printf("Enter the course \n");
    scanf("%s",b);
    int c = 0;
    for (int j = 1; j <= i; j++) {
        if (!strcmp(st[j].branch, b)) {
  
                printf(
                    "The Students Details are\n");
                printf(
                    "The name is %s\n",
                    st[i].name);
                printf(
                    "The Roll Number is %d\n ",
                    st[i].roll);
                printf(
                    "The CGPA is %f\n",
                    st[i].cgpa);
  
                c = 1;
  
                break;
            }
            else
                printf(
                    "The Name not Found\n");
        }
    }

void main()
  
{
    int choice, count;
    while (i = 1) {
        printf("The Task that you want to perform\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the Student Details by Roll Number\n");
        printf("3. Find the Student Details by Name\n");
        printf("4. Find the Student Details by Course\n");
        printf("5. To Exit\n");
        printf("Enter your choice to find the task\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            add_student();
            break;
        case 2:
            find_rl();
            break;
        case 3:
            find_fn();
            break;
        case 4:
            find_c();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}



