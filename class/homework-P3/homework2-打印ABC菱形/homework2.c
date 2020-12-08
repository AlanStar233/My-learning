#include<stdio.h>                 
void main()                       
{
    int i,space,letter_mount,line;    /*i为三角形行数，j为空格数量，k为输出字母个数量，n为输入行数*/
    printf("Please type Line:");
    scanf("%d",&line);
    for(i=1;i<=line;i++)
    {
        for(space=1;space<=line-i;space++) printf(" ");
        for(letter_mount=1;letter_mount<=2*i-1;letter_mount++) printf("%c",64+i);
        printf("\n");
    }
    for(i=1;i<=line-1;i++)
    {
        for(space=1;space<=i;space++) printf(" ");
        for(letter_mount=1;letter_mount<=2*(line-i)-1;letter_mount++) printf("%c",64+line-i);
        printf("\n");
    }
    /*coder:杨佳林-2031030054*/
}

