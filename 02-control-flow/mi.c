#include<stdio.h>
int main()
{
    long long sum=0;
    for(long long num=1;num<=10;num++)
    {
        long long num1=1;
        for(int i=1;i<=num;i++)
        {
            num1*=num;
        }
        sum+=num1;
    }
    printf("结果是：%lld\n",sum);
    return 0;

}