#include <stdio.h>
void main()
{
    int length;
    char num[4];
    printf("Please type a number:");
    scanf("%s",&num);
    if(num>0)
    {
        printf("������Ϊ������!��������һ������!\n");
        goto method1;    /*��ת������1-������λ��*/
        goto method2;    /*��ת������2-�ֱ����ÿһλ����*/
        goto method3;    /*��ת������3-���������λ����*/
    }
    else printf("����������Ч!\n"); goto bye;    /*��ת������bye-��������*/

    method1:    /*����1:-������λ��*/
    {
        length=strlen(num);
        printf("�����ֵĳ���Ϊ��%d λ\n",length);
    }
    method2:    /*����2:-�ֱ����ÿһλ����*/
    {
        printf("�������:%c %c %c %c\n",num[0],num[1],num[2],num[3]);
    }
    method3:    /*����3:-���������λ����*/
    {
        printf("�������:%c %c %c %c\n",num[3],num[2],num[1],num[0]);
    }
    bye:
    {
        printf("���򼴽�����\n");
        system("pause");
    }
    /*coder:�����-2031030054*/
}