#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct STUDENT
{
    char name[20];
    char sex;
    int num;
    char add[100];
    float grades[5];
};

struct STUDENT *find_by_name(struct STUDENT *pstu, char *name )
{
    int i;
    for(i=0;i<5;i++)
    {
        if( ! strcmp(name,(pstu+i)->name) ) return (pstu+i);
    //    if( ! strcmp(name,pstu[i]->name) ) return (pstu+i);
    }
}

int main()
{
    char Inputname[20];
    struct STUDENT a[5]=
    {
        {"cc" ,'m',9027,"14",95,98,97,96,59},
        {"cc1",'m',9027,"14",95,98,97,96,59},
        {"cc2",'m',9027,"14",95,98,97,96,59},
        {"cc3",'m',9027,"14",95,98,97,96,59},
        {"zcc",'f',9000,"13",65,78,97,86,79}
    };
    struct STUDENT * ans;
    printf("Input a name:\n");
    gets(Inputname);
    ans = find_by_name(a,Inputname);
    printf("Name: %s\nSex: %c\nNum: %d\nAdd: %s\nGrades: %3.1f, %3.1f, %3.1f, %3.1f, %3.1f\n",ans->name,ans->sex,ans->num,ans->add,ans->grades[0],ans->grades[1],ans->grades[2],ans->grades[3],ans->grades[4]);
    return 0;
}
