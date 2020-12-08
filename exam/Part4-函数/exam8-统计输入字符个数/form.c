/*8．编写函数统计输入字符的个数，用@字符结束输入。在主函数中调用此函数，输出统计结果。*/
#include <stdio.h>
int mount()
{
    int count=0;
    char input;
    while(input=getchar()!='@')    /*当输入检测到@时，count自增*/
    {
        count++;
    }
    return(count);
}
void main()
{
    printf("Please type char:");
    printf("The mount of your input is:%d",mount());
}