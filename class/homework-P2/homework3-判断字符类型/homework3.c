#include<stdio.h>
void main()
{
    char ch;
    printf("inputch:");
    scanf("%c",&ch);
    if(ch>=48&ch<=57)
    {
        printf("ch�������ַ�\n");
    }
    else if(ch>=65&&ch<=90)

    {
        printf("ch�Ǵ�д��ĸ\n");
    }
    else if(ch>=97&&ch<=122)
    {
      printf("ch��Сд��ĸ\n");
    }
    else if(ch==32)
    {
        printf("ch�ǿո�\n");
    }
    else
    {
        printf("ch�������ַ�\n");

    }
    /*coder:�����-2031030054*/
}