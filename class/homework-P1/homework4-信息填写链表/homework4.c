/*
变量数据类型分析:
编号 ID：int
姓名 Name：string
性别 Sex：string
年龄 Age：int
电话号码 Tel_Num：string
QQ号码 QQ_Num：string
微信号码 Wechat_Num：string
电子邮箱 Email：string
城市 City：string
职业 Profession：string
通讯地址 Address：string
PS:其实可以通过正则表达式对特定字符的出现进行限制，但由于课上没有学，就暂时不码了，只使用字符串变量长度作为数据长度限制
*/
#include <stdio.h>
void main()
{
    int ID,Age;
    char Name[20],Sex[20],Tel_Num[20],QQ_Num[20],Wechat_Num[20],Email[20],City[20],Profession[20],Address[20];  /*限制长度为20，懒得统一*/
    printf("Type your ID:\n");
    scanf("%d",&ID);
    printf("Type your Name:\n");
    scanf("%s",&Name);
    printf("Type your Sex:\n");
    scanf("%s",&Sex);
    printf("Type your Age:\n");
    scanf("%d",&Age);
    printf("Type your Telephone Number:\n");
    scanf("%s",&Tel_Num);
    printf("Type your QQ Number:\n");
    scanf("%s",&QQ_Num);
    printf("Type your Wechat Number:\n");
    scanf("%s",&Wechat_Num);
    printf("Type your Email:\n");
    scanf("%s",&Email);
    printf("Type your City:\n");
    scanf("%s",&City);
    printf("Type your Profession:\n");
    scanf("%s",&Profession);
    printf("Type your Address:\n");
    scanf("%s",&Address);
    printf("Your information is as follows:\n");
    printf("****************************************\n");
    printf("ID              %d\n",ID);
    printf("Name            %s\n",Name);
    printf("Sex             %s\n",Sex);
    printf("Age             %d\n",Age);
    printf("Tel_Num         %s\n",Tel_Num);
    printf("QQ_Num          %s\n",QQ_Num);
    printf("Wechat_Num      %s\n",Wechat_Num);
    printf("Email           %s\n",Email);
    printf("City            %s\n",City);
    printf("Profession      %s\n",Profession);
    printf("Address         %s\n",Address);
    printf("****************************************\n");
    /*coder：杨佳林-2031030054*/
}