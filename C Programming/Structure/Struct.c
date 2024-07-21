#include<stdio.h>
#include<math.h>
#include<ctype.h>
struct student{
    int rollNo;
    char sec;
    char name[50];
};

int main(){
    struct student s1;
    s1.sec ='A';
    s1.rollNo = 1;
    printf("Enter a name of the student\n");
    // scanf("%s",s1.name);
    // fgets(s1.name,sizeof(s1.name),stdin);
     strcpy(s1.name,"Surjeet singh");
    printf(" Name :%s\n Roll no.: %d\n Section: %c",s1.name,s1.rollNo,s1.sec);
}
