#include <stdio.h>

struct date
{
    int day;
    char* month;
    int year;
};

struct employee
{
    char* id;
    char* name;
    struct date d1;
};

int main() {
    
    struct employee e1;

    e1.id = "VET008";
    e1.name = "Knox Overstreet" ;
    e1.d1.day = 23;
    e1.d1.month = "June" ;
    e1.d1.year = 2018 ;

    printf("Employee ID is %s\n",e1.id);
    printf("Name of the employee is %s\n",e1.name);
    printf("Joining date of the employee is %d %s %d\n", e1.d1.day, e1.d1.month, e1.d1.year);

    return 0;
}