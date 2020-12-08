/*11.	从键盘输入圆的半径，判断圆的半径是否是2或者3的整倍数。若是，则计算圆的周长并输出，否则计算圆的面积并输出。
要求：圆周率用符号常量定义，有输入提示，输出结果保留两位小数。*/
#include <stdio.h>
void main()
{
    int r;
    float pi=3.14,c,s;
    printf("Please type the Circle's Round:");
    scanf("%d",&r);
    if(r%2==0 || r%3==0)
    {
        c=2*pi*r;
        printf("The Round's C is:%6.2f",c);
    }
    else
    {
        s=pi*r*r;
        printf("The Round's S is:%6.2f",s);
    }
    
}