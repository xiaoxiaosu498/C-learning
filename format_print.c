#include<stdio.h>

int main(void)
{
    int x=10;
    float y=-12.3;
    char str="I love you!";
    printf("x的十进制输出:%d\n",x);
    printf("x的八进制输出:%o\n",x);
    printf("x的十六进制输出:%x\n",x);
    printf("x的十六进制输出:%X\n",x);
    printf("y的无符号输出:%.f\n",y);
    printf("y保留两位小数输出:%.2f\n",y);
    printf("x转化成单个字符:%c\n",x);

}
