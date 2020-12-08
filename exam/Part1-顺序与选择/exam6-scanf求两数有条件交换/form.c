/*6.	键盘输入两个整数和一个字符，如果该字符为Y(y)则将两个整数互换，否则输出字符串"No Swap !"。 
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int number1,number2,swap_number;    /*对所用变量初步定义*/
    char ch;
    printf("Please type first number:");    /*请求输入*/
    scanf("%d",&number1);
    printf("Please type second number:");
    scanf("%d",&number2);
    printf("Please type ch:");
    scanf("%d",&ch);
    if((ch='Y') || (ch='y'))    /*逻辑判断*/    /*这里的编译器似乎有问题，导致ch='y'被识别为赋值语句,条件打括号即可修复*/
    {
        swap_number=number2;
        number2=number1;
        number1=swap_number;
        printf("The result is:%d %d",number1,number2);
    }   
    else printf("No Swap!");
}