#include<stdio.h>

int main(void)
{
    int n;
    long sum;
    printf("Enter n:");
    scanf("%d", &n);
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of numbers from 1 to %d is %ld.\n",n, sum);
}
