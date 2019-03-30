#include<stdio.h>

int main(void)
{
    double x,y;
    printf("Enter x(x>0):\n");
    /*调用scanf()函数输入数据,变量名x前面要加&，%lf的l是龙的首字母;*/
    scanf("%lf",&x);
    if (x <= 15)
    {
        y = 4 * x + 3;
    }
    else
    {
        y = 2.5 * x - 10.5;
    }
    printf("y=f(%f)=%.2f\n",x,y); /*调用printf()函数输出结果*/
    return 0 ;
}
