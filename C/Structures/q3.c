#include <stdio.h>

struct date
{
    int day;
    char month[12];
    int year;
};

struct employee
{
    char id[10];
    char name[30];
    struct date d1;
};

int main() {
    
    struct employee e1;

    scanf("%s",e1.id);
    scanf("%s",e1.name);
    scanf("%d",&e1.d1.day);
    scanf("%s",e1.d1.month);
    scanf("%d",&e1.d1.year);

    printf("Employee ID is %s\n",e1.id);
    printf("Name of the employee is %s\n",e1.name);
    printf("Joining date of the employee is %d %s %d\n", e1.d1.day, e1.d1.month, e1.d1.year);

    return 0;
}