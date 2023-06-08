#include<stdio.h>
void swap(int *min,int *com)
{
    int temp = *com;
    *com = *min;
    *min = temp;
}
int main()
{
    int size,i,j;
    printf("How many number do you want to take?\n");
    scanf("%d",&size);
    int value[size];
    printf("Input value here: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&value[i]);
    }
    printf("Before selection sort: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",value[i]);
    }

    for(i=0;i<size-1;i++)
    {
        int min = i;
        for(j=i+1;j<size;j++)
        {
            if(value[min]>value[j])
            {
                min = j;
            }
        }
        if(i!= min)
        {
        swap(&value[min],&value[i]);
        }
    }
    printf("\n\nAfter Selection sort: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",value[i]);
    }

    return 0;
}
