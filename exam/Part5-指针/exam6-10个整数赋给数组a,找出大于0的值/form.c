/*6.用指针实现： 把10个整数赋值到数组a后，输出数组a中所有大于0的元素值。*/
#include <stdio.h>
void main()
{
    int i,*pointer;    /*定义循环变量i,指针pointer*/
    int a[10];    /*定义数组a*/
    pointer=a;    /*将pointer指向a*/
    //循环读取
    printf("Please type mounts:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    //循环比较
    for(i=0;i<=9;i++)
    {
        if(a[i]>0) printf("%d ",*(pointer+i));
    }
}