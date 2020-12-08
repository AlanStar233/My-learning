#include <stdio.h>    
void main()    /*需求：用户输入存款金额和期限，根据金额和利率计算本息合计金额*/
{
    int money,years,result;    /*引入3个参数对整体数据进行连接*/
    printf("请输入存款金额：\n");
    scanf("%d",&money);
    printf("请输入存款年限：\n");
    scanf("%d",&years);
    printf("您的本金为 %d 元，存款年限为 %d 年\n",money,years);
    system("pause");

    if(years>=1 && years<2) goto years_1;
    if(years>=2 && years<3) goto years_2;
    if(years>=3 && years<5) goto years_3;
    if(years>=5) goto years_5;
    
    /*开始运算，years参数可做预分析，如3-5年则不能直接引入数字年限*/
    years_1:
    {
        result=money*1.75*0.01*years+money;
        printf("您存入的年限为 %d 年，预期收益为 %d 元",years,result);
        system("pause");    /*引入system命令*/
        goto paper;
    }
    years_2:
    {
        result=money*2.25*0.01*years+money;
        printf("您存入的年限为 %d 年，预期收益为 %d 元",years,result);
        system("pause");
        goto paper;
    }
    years_3:
    {
        result=money*2.75*0.01*years+money;
        printf("您存入的年限为 %d 年，预期收益为 %d 元",years,result);
        system("pause");
        goto paper;
    }
    years_5:
    {
        result=money*2.75*0.01*years+money;
        printf("您存入的年限为 %d 年，预期收益为 %d 元\n",years,result);
        system("pause");
        goto paper;
    }
    paper:    /*打印凭据*/
    {
        printf("****************************************\n");
        printf("储蓄凭据\n");
        printf("存入金额：%d\n",money);
        printf("存入年限：%d\n",years);
        printf("预期收益：%d\n",result);
        printf("XX银行\n");
        printf("****************************************\n");
    }
    /*coder:杨佳林-2031030054*/
}