#include<stdio.h>

int main(void)
{
    int fahr,lower,upper;
    double celsius;
    printf("Enter lower:");
    scanf("%d",&lower);
    printf("Enter upper:");
    scanf("%d",&upper);
    printf("fahr  celsius\n");
    printf("---------------\n");
    for(fahr=lower; fahr<=upper; fahr++)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%d%8.1f\n",fahr,celsius);

    } 
    return 0;

}
