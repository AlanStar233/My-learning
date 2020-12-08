/*8.	任意输入一个正整数和一个字符。若输入的字符为字母O(o)，则将输入的整数按八进制格式输出；若输入的字符为字母H(h)，则将输入的整数按十六进制格式输出；若输入的字符为其他字符，则将输入的整数按十进制格式输出。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int number;
    char ch;
    printf("Please type the number & ch:");
    scanf("%d%c",&number,&ch);
    switch (ch)
    {
    case 'o':
    case 'O':printf("The result is:%o",number);break;
    case 'h':
    case 'H':printf("The result is:%x",number);break;
    default:printf("The result is:%d",number);
    }
}