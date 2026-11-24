#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个数：\n");
    scanf("%d",&n);
    int zhishu=0;
    for(int num=1;num>=1&&num<=n;num++)//被除数
    {
        int m=1;//除数
        int i=0;//余数为0的次数
        while(m<=num)
        {
            int num1=num%m;//余数的大小
            if(num1==0)
            {
                i++;
                m++;
            }
            else
            {
                m++;
            }
        }
        if(i==2)
        {
            zhishu++;
        }
    }
    printf("在1~%d之间共有%d个质数\n",n,zhishu);
    return 0;
}