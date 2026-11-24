#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三个数值：\n");
    scanf("%d %d %d",&a,&b,&c);
    int num1=a>b?a:b;
    int num2=num1>c?num1:c;
    printf("%d,%d,%d中最大数是:%d\n",a,b,c,num2);
    return 0;
}