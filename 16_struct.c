#include<stdio.h>
typedef struct student
{
    char name[8];
    int roll;
}stu;

stu record(int i)
{
    stu ns;
    printf("Enter the deteail of student number %d\n",i+1);
    scanf("%s",ns.name);
    scanf("%d",ns.roll);
    return ns;
}

void print(stu item)
{
    printf("Name=%s\n",item.name);
    printf("Roll number=%d",item.roll);
}

int main()
{
    int count=0,i;
    stu Hi[20];
    printf("Number of the students:\n");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        Hi[i]=record(i);
    }
    printf("Printing the data of class");
    for(i=0;i<count;i++)
    {
        print(Hi[i]);
    }
    

    return 0;

}