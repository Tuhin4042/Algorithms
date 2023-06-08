#include<stdio.h>
int main()
{
    int a[] = {1,3,5,7,27,45,8},i,value,size,count =0;
    size = sizeof(a)/sizeof(int);
    printf("Take input,Which value you want to search: ");
    scanf("%d",&value);
    for(i=0;i<size;i++)
    {
      if(a[i]==value)
      {
          count++;
      }
    }
    if(count>0)
    {
        printf("Value is found %d times!!!",count);
    }
    else
    {
        printf("Value not found...");
    }
    return 0;
}
