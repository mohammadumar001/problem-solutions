#include <stdio.h>
struct student
{
    char name[20];
    int subject[5];
    float percentage;
    char grade;
};
void input(int n, struct student s1[])
{
    for (int i = 0; i < n; i++)
    {
        printf("enter the name of student %d : ", i + 1);
        scanf("%s", s1[i].name);
      
        for (int j = 0; j < 5; j++)
        {
            printf("marks obtained in subject %d : ", j + 1);
            scanf("%d", &s1[i].subject[j]);
          
        }
    }
}
void percentage(int n, struct student s1[])
{

    for (int i = 0; i < n; i++)
    {
        int total = 0;
        for (int j = 0; j < 5; j++)
        {
            total = total + s1[i].subject[j];
        }
        s1[i].percentage = (total / 500.0) * 100;
        printf("percentage obtained by student %s is : %.2f \n", s1[i].name, s1[i].percentage);
    }
}
void grade(struct student s1[],int n)
{
    for (int i = 0; i < n; i++)
    {

        if (s1[i].percentage >= 90.0)
        s1[i].grade = 'A';
        else if (s1[i].percentage >= 80.0)
            s1[i].grade = 'B';
        else if (s1[i].percentage >= 70.0)
            s1[i].grade = 'C';
        else if (s1[i].percentage >= 60.0)
            s1[i].grade = 'd';
        else if (s1[i].percentage >= 50.0)
            s1[i].grade = 'E';
        else if (s1[i].percentage < 50.0)
            s1[i].grade = 'F';
        printf("grade of student %s is %c \n ", s1[i].name, s1[i].grade);
    }
}
int main()
{
    int n;
    printf("enter the number of students : ");
    scanf("%d", &n);
    struct student s1[n];
    input(n, s1);
   
    percentage(n, s1);
    
    grade(s1,n);
}
