#include <stdio.h>

struct student
{
    int rollno;
    char name[30];
    float marks;
};

int main() {

    struct student s1[5];

    for(int i=0 ; i<5 ; i++){
        scanf("%d",&s1[i].rollno);
        scanf("%s",s1[i].name);
        scanf("%f",&s1[i].marks);
    }

    for(int i=0 ;i<5 ; i++){
        printf("Roll no of the student is %d\n",s1[i].rollno);
        printf("The name of the student is %s\n",s1[i].name);
        printf("The marks obtained are %f\n\n",s1[i].marks);
    }


    return 0;
}