#include <stdio.h>
struct student
{
    char name[20];
    int subject[5];
    float percentage;
    char grade;
    int roll_no;
};
void read(struct student s[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        scanf("name of student is : %s \n",s[i].name);
        scanf("roll number  of student is : %d \n",&s[i].roll_no);
        for(int j=0;j<5;j++)
        {
            scanf("marks obtained in subject %d is : %d \n",j+1,&s[i].subject[j]);
        }
    }
}
void add_students(struct student s[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        printf("name of student is : %s \n",s[i].name);
        printf("roll number  of student is : %d \n",s[i].roll_no);
        for(int j=0;j<5;j++)
        {
            printf("marks obtained in subject %d is : %d \n",j+1,s[i].subject[j]);
        }
    }
}
int main()
{
    int n;
    printf("enter the number of students : ");
    scanf("%d",&n);
    struct student s[n];
    read(s,n);
    add_students(s,n);

}
