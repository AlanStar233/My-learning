/*4.用间接引用求出两个数中的最大数。（要求运用指针）*/
#include <stdio.h>
void main()
{
    int a,b;    /*定义a,b*/
    int *pointer_a,*pointer_b;    /*定义pointer_a,pointer_b指针*/
    //获取a和b的值
    printf("Please type number of a & b:");
    scanf("%d %d",&a,&b);
    //将pointer_a 和 pointer_b 指向a 和 b 的地址
    pointer_a=&a;
    pointer_b=&b;
    //执行判断
    if(*pointer_a>*pointer_b) printf("The max one is:%d",*pointer_a);
    else if(*pointer_a<*pointer_b) printf("The max one is:%d",*pointer_b);
    else printf("They are balanced! No max number!");
}