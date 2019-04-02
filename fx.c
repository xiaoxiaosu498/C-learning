#include<stdio.h>
#include<math.h>

int main(void)
{
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    if (x >= 0)
    {   
        printf("y=f(%d)=%.3f\n", x, sqrt(x));
    }
    else
    {
        printf("y=f(%d)=%.3f\n", x, pow(x,5)+2*x+1/x);
    }
    
}
