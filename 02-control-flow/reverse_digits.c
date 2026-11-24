#include<stdio.h>
int main()
{
    int number;
    printf("请输入一个不多于5位的正整数：\n");
    scanf("%d",&number);
    int num=number;
    int num0=0; 
    int i=0;
    while(number!=0)
    {
        int num1=number%10;
        number/=10;
        i++;
        printf("从右往左第%d位数字是：%d\n",i,num1);
        num0=num0*10+num1;
    }
    printf("%d是%d位数\n",num,i);
    printf("%d的逆序数是:%d\n",num,num0);
    return 0;
}