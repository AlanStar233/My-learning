/*9.有一个3×4的矩阵，要求编程序求出其中值最大的那个元素的值，以及所在的行号和列号。
  1    2    5    9
a=2    6    8    14
  10   45   8    18
*/
#include <stdio.h>
void main()
{
    int base[3][4]={{1,2,5,9},{2,6,8,14},{10,45,8,18}},i,j,max,number_x=0,number_y=0;
    max=base[0][0];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(base[i][j]>max)
            {
                max=base[i][j];
                number_x=i;
                number_y=j;
            }
        }
    }
    printf("The max number is:%d\nIt's location is:%d %d",max,number_x+1,number_y+1);
}