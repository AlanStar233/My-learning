/*9.	从键盘上输入一个字符，如果是大写字母，则转换为小写字母输出。否则输出该字符与大写字母A在ASCII表中的位序差。
要求：有输入提示。*/
#include <stdio.h>
#include <math.h>
void main()
{
    char ch,result;
    printf("Please type the ch:");
    scanf("%c",&ch);
    if((ch>='A') && (ch<='Z'))
    {
        ch=ch+32;
        printf("The result is'%c",ch);
    }
    else
    {
        printf("The letter minus 'A' is:%d",ch-'A');
    }
}