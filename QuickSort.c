#include<stdio.h>
void QuickSort(int value[],int left,int right)
{
    if(left<right)
    {
        int pivot = partition(value,left,right);
        QuickSort(value,left,pivot-1);
        QuickSort(value,pivot+1,right);
    }
}
int partition(int value[],int left,int right)
{
    int pivot = value[left];
    while(left!=right)
    {
        if(pivot==value[left])
        {
            if(pivot<value[right])
            {
                right--;
            }
            else if(pivot>=value[right])
            {
                swap(&value[left],&value[right]);
                pivot = value[right];
                left++;
            }
        }
        else if(pivot ==value[right])
        {
            if(pivot<=value[left])
            {
                swap(&value[right],&value[left]);
                pivot = value[left];
                right--;
            }
            else if(pivot>value[left])
            {
                left++;
            }
        }

    }
    return left;
}
void swap(int *pivot,int *MinValue)
{
    int temp = *pivot;
    *pivot = *MinValue;
    *MinValue = temp;
}
int main()
{
    int size,i,j;
    printf("How many number do you want to take?\n");
    scanf("%d",&size);
    int value[size];
    printf("Input value here: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&value[i]);
    }
    printf("Before Quick sort: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",value[i]);
    }
    int left = 0,right = size-1;
    QuickSort(value,left,right);
    printf("\nAfter Quick sort: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",value[i]);
    }

    return 0;
}
