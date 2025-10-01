#include <stdio.h>

struct student
{
    int rollno;
    char* name;
    float marks;
};

int main() {

    struct student s1[5];

    s1[0].rollno = 1;
    s1[0].name = "Chris" ;
    s1[0].marks = 87.5;

    s1[1].rollno = 2;
    s1[1].name = "Knox" ;
    s1[1].marks = 63.5;

    s1[2].rollno = 3;
    s1[2].name = "Charlie" ;
    s1[2].marks = 97.9;

    s1[3].rollno = 4;
    s1[3].name = "Meeks" ;
    s1[3].marks = 100;

    s1[4].rollno = 5;
    s1[4].name = "Todd" ;
    s1[4].marks = 95.3;

    for(int i=0 ;i<5 ; i++){
        printf("Roll no of the student is %d\n",s1[i].rollno);
        printf("The name of the student is %s\n",s1[i].name);
        printf("The marks obtained are %f\n\n",s1[i].marks);
    }


    return 0;
}