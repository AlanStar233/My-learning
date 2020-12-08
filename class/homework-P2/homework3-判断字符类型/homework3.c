#include<stdio.h>
void main()
{
    char ch;
    printf("inputch:");
    scanf("%c",&ch);
    if(ch>=48&ch<=57)
    {
        printf("ch是数字字符\n");
    }
    else if(ch>=65&&ch<=90)

    {
        printf("ch是大写字母\n");
    }
    else if(ch>=97&&ch<=122)
    {
      printf("ch是小写字母\n");
    }
    else if(ch==32)
    {
        printf("ch是空格\n");
    }
    else
    {
        printf("ch是其他字符\n");

    }
    /*coder:杨佳林-2031030054*/
}