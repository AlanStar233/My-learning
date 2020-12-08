/*14.键盘输入一个字符，如果字符为小写字母字符，则输出"Ok！是小写字母字符， 如果字符为大写字母字符，则输出"Ok！是大写字母字符，否则输出"No！不是字母字符。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    char ch;
    printf("Please type your ch:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z') printf("The letter is 'LETTER'!");
    else if(ch>='a' && ch<='z') printf("The letter is 'letter'!");
    else printf("Your input is not letter character!");
}
