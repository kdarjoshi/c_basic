#include <stdio.h>

struct employee
{
    char name[20];
    int empid[5];
    int exp[2];
    int salary[5];

};

int main()
{
    int i=1;
    for(i=1;i<=5;i++)
    {
        struct employee s[i];
        printf("Enter your Name: ");
        gets(s[i].name);
        printf("Enter your Employee ID: ");
        gets(s[i].empid);
        printf("Enter Your experience in this Company: ");
        gets(s[i].exp);
        printf("Enter your Salary in Rupees: ");
        gets(s[i].salary);
    }
    for (i=1;i<=5;i++)
    {
        printf("\nEmployee Details of Employee: %d\n",i);
        printf("\nName: %s",s[i].name);
        printf("\nEmployee ID: %d",s[i].empid);
        printf("\nExperience: %d",s[i].exp);
        printf("Salary: %d",s[i].salary);

    }
    return 0;
}
