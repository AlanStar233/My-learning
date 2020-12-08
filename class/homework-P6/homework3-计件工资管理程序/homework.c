#include <stdio.h>
#define N 10
int total[11];    /*存放10名员工一天制作的产品数量，从total[1]开始存放*/

//void int input(int *w);
//输入员工一天制作的产品数量
void input(int *w)    /*输入员工一天制作的产品数量，w指向存放10名员工一天制作的产品数量的数组*/
{
    int i;
    printf("Please type '%d' worker's working data:\n",N);    /*输入10名员工的工作量数据*/
    for(i=0;i<N;i++)
        scanf("%d",w+i);
}

//显示员工一天制作的产品数量
void output(int *w)
{
    int i;
    printf("'%d''s worker's working data is:\n",N);
    for(i=0;i<N;i++)
        printf("%5d",*(w+i));
}

//统计一天中制作产品的总量&平均量
int sum(int *w)
{
    int i,s=0;
    for(i=0;i<N;i++)
        s+=*(w+i);
    return s;
}

float average(int *w)
{
    int i,s=0;
    for(i=0;i<N;i++)
        s+=*(w+i);
    return ((float)s/N);
}

//显示一天中员工制作产品数量排序的结果(由多到少)
void sort(int *w)
{
    int temp,i,j,k;
    for(i=0;i<N-1;i++)
    {
        k=i;
        for(j=i+1;j<N;j++)
            if(*(w+k)<*(w+j))
                k=j;
            if(i!=k)
            {
                temp=*(w+i);
                *(w+i)=*(w+k);
                *(w+k)=temp;
            }
    }
    printf("Print worked worker's data:\n");    /*排序后的员工工作量数据*/
    for(i=0;i<N;i++)
        printf("%5d",*(w+i));
}

//统计一天中制作产品最多的员工序号和产品数量
//*w指向存放10名员工一天制作的产品数量的数组，数组下标号与员工号一致。
void max(int *w)
{
    int i,m=0,maxi=*w;
    for(i=1;i<N;i++)
        if(*(w+i)>maxi)
        {
            m=i;
            maxi=*(w+i);
        }
        printf("\n The max works worker is No.%d:%d\n",m,maxi);
}

//统计低于平均量的员工个数及员工序号，并提醒他们要加快速度
void low_ave(int *w)
{
    int i,k=0;
    float v;
    v=average(w);
    printf("The number of worker whose works below average is:");    /*低于员工工作量的员工序号*/
    for(i=0;i<N;i++)
        if(*(w+i)<v)
        {
            k++;
            printf("%5d",i);
        }
        printf("\nThe number of workers whose works below average is:");    /*低于员工工作量的员工总数*/
        printf("%d\n",k);
}

//主函数
void main()
{
    int total[N];
    input(total);
    output(total);
    max(total);
    sort(total);
    printf("\nWorker's sum of works:%d\n Worker's average of works:%.2f\n",sum(total),average(total));
    low_ave(total);
}