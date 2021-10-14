#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,num,n,i,new_size;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    ptr = (int*)malloc(num*sizeof(int));
    if(ptr == NULL)
     {
         printf("Out of memory");
         exit(0);
     }
      printf("Address of memory old memory: \n%u",ptr);
      printf("\nEnter the numbers:\n");
      for(i=0;i<num;i++)
       {
           scanf("%d",(ptr+i));
       }
      for(i=0;i<num;i++)
       {
           printf("%d ",*(ptr+i));
       }
    printf("\nEnter number 1 if you want to reallocte the memory:\n");
    printf("\nEnter number 2 to exit the program:\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\nEnter the new size:\n");
        scanf("%d",&new_size);
        ptr = (int*)realloc(ptr,new_size*sizeof(int));
         if(ptr == NULL)
            {
                printf("Out of memory:\n");
                exit(0);
            }

         else
            {
                printf("Address of memory reallocted memory:%u",ptr);
                printf("Enter the %d elemets:\n",new_size);
                for(i=0;i<new_size;i++)
                {
                    scanf("%d",(ptr+i));
                }
                for(i=0;i<new_size;i++)
                {
                    printf("%d ",*(ptr+i));
                }


            }


    }
    else
    {
       printf("You exit the program:\n");
       exit(0);
    }
    

}