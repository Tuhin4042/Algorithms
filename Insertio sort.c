#include<stdio.h>
int main()
{
    int size,i,j,temp=0;
    printf("How many value are  you need?\n");
    scanf("%d",&size);
    int value[size];
    printf("Value input here:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&value[i]);
    }
    printf("Before Insertion sort:");
    for(i=0; i<size; i++)
    {
        printf(" %d",value[i]);
    }
    for(i=1;i<size;i++)
    {
        j = i-1;
        temp = value[i];
        while(j>=0 && value[j]>temp)
        {
            value[j+1] = value[j];
            j = j-1;
        }

       value[j+1] = temp;
    }
    printf("\nAfter Insertion sort:");
    for(j=0; j<size; j++)
    {
        printf(" %d",value[j]);
    }

    return 0;
}



   /*for(j=p;j>=0;j--)
       {
          if(value[j]>temp)
          {
              value[j+1] = value[j];
          }
       }*/
