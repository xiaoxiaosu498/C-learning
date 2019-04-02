#include<stdio.h>

int main()
{
    int i,max,a[10];
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=1;i<=10;i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    printf("The max number is %d.\n", max);
}
