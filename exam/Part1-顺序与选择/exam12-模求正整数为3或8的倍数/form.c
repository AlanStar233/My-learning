/*12.	键盘输入一个正整数，编程判断该数是否既是3或8 的整倍数；若是，输出"Yes"，否则输出"No"；若输入的不是正整数，则输出 "Error"。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int number;
    printf("Please type your number:");
    scanf("%d",&number);
    if(number<=0) printf("Error");
    else if(number%3==0 || number%8==0) printf("Yes");
    else printf("No");
}