#include<stdio.h>
int main()
{
    int i,j=0,taka,count=0,note[]= {1000,500,200,100,50,20,10,5,2,1};
    int  size = sizeof(note)/sizeof(int);
    int New_array[size];
    printf("Taka: ");
    scanf("%d",&taka);
    printf("\n");
    for(i=0; i<size; i++)
    {
        if(taka>0)
        {
            if(taka>=note[i])
            {
                int note1 = taka/note[i];
                count+=note1;
                int remaining_taka = taka%note[i];
                taka = remaining_taka;
                printf("%d taka note %d ta\n",note[i],note1);
                New_array[j] = note[i];
                j++;
            }
        }
    }
    printf("\nNote use : ");
    for(i=0;i<j;i++)
    {
        printf("%d ",New_array[i]);
    }
    printf("\n\nTotal note use: %d",count);
    return 0;
}
