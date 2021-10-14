#include<stdio.h>
int xstrlen(char arr[]);

    int main()
    {
        char arr[9] = "Himanshu";
        printf("%d",xstrlen(arr));
    }

int xstrlen(char arr[])
{
   int len = 0;
   int i;
   for(i=0;arr[i]!='\0';i++)
   {
       len = len+1;
   }
   return len;
}