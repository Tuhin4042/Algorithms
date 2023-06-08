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
    printf("Before Bubble sort:");
    for(i=0; i<size; i++)
    {
        printf(" %d",value[i]);
    }
    printf("\nAfter Bubble sort:");
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(value[j]>value[j+1])
            {
                temp = value[j];
                value[j] = value[j+1];
                value[j+1] = temp;
            }
        }
    }
    for(j=0; j<size; j++)
    {
        printf(" %d",value[j]);
    }


    return 0;
}
