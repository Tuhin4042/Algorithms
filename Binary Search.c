#include<stdio.h>
void display(int value[],int i,int size)
{
    for(i=0; i<size; i++)
    {
        printf("%d ",value[i]);
    }
}
void sorting(int value[],int i,int size)
{
    int j;
    for(i=0; i<size-1; i++)
    {
        int min = i;
        for(j=i+1; j<size; j++)
        {
            if(value[min]>value[j])
            {
                min = j;

            }
        }
        if(i!=min)
        {
            int temp = value[i];
            value[i] = value[min];
            value[min] = temp;
        }
    }
    printf("\n\nAfter sorting Value is: \n");
    display(value,i,size);
}
int BinarySearch(int value[],int left,int right,int number)
{
    while(left<=right)
    {
        int middle = (left+right)/2;
        if(number==value[middle])
        {
            return middle;
        }
        else if(number>value[middle])
        {
            left = middle + 1;
        }
        else if(number<value[middle])
        {
            right = middle - 1;
        }
    }
    return -1;

}
int main()
{
    int i,j,size,number,result;
    printf("How many value are you get input: ");
    scanf("%d",&size);
    int value[size];
    for(i=0; i<size; i++)
    {
        scanf("%d",&value[i]);
    }
    printf("Before sorting Value is: \n");
    display(value,i,size);
    sorting(value,i,size);
    printf("\n\nWhich Value you can search : ");
    scanf("%d",&number);
    int left = 0,right = size-1;
    result = BinarySearch(value,left,right,number);
    printf("\nValue is present at \"%d\" number index!!!",result);
    return 0;
}
