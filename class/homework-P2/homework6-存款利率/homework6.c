#include <stdio.h>    
void main()    /*�����û�������������ޣ����ݽ������ʼ��㱾Ϣ�ϼƽ��*/
{
    int money,years,result;    /*����3���������������ݽ�������*/
    printf("���������\n");
    scanf("%d",&money);
    printf("�����������ޣ�\n");
    scanf("%d",&years);
    printf("���ı���Ϊ %d Ԫ���������Ϊ %d ��\n",money,years);
    system("pause");

    if(years>=1 && years<2) goto years_1;
    if(years>=2 && years<3) goto years_2;
    if(years>=3 && years<5) goto years_3;
    if(years>=5) goto years_5;
    
    /*��ʼ���㣬years��������Ԥ��������3-5������ֱ��������������*/
    years_1:
    {
        result=money*1.75*0.01*years+money;
        printf("�����������Ϊ %d �꣬Ԥ������Ϊ %d Ԫ",years,result);
        system("pause");    /*����system����*/
        goto paper;
    }
    years_2:
    {
        result=money*2.25*0.01*years+money;
        printf("�����������Ϊ %d �꣬Ԥ������Ϊ %d Ԫ",years,result);
        system("pause");
        goto paper;
    }
    years_3:
    {
        result=money*2.75*0.01*years+money;
        printf("�����������Ϊ %d �꣬Ԥ������Ϊ %d Ԫ",years,result);
        system("pause");
        goto paper;
    }
    years_5:
    {
        result=money*2.75*0.01*years+money;
        printf("�����������Ϊ %d �꣬Ԥ������Ϊ %d Ԫ\n",years,result);
        system("pause");
        goto paper;
    }
    paper:    /*��ӡƾ��*/
    {
        printf("****************************************\n");
        printf("����ƾ��\n");
        printf("�����%d\n",money);
        printf("�������ޣ�%d\n",years);
        printf("Ԥ�����棺%d\n",result);
        printf("XX����\n");
        printf("****************************************\n");
    }
    /*coder:�����-2031030054*/
}