#include<stdio.h>

int main()
{   
    int sum; /*define a int variableecho*/
    for(int i=1; i<=100;i++)
    {
        if (i%2 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n",sum);
    return 1;
}
    
