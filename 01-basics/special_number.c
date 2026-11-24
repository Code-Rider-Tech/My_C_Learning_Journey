#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个数字:\n");
    scanf("%d",&n);
    for(int num=1;num<=n;num++)
    {
        int num0=num;
        int sum=0;//每一位数字相加之后的总值
        while(num0!=0)
        {
            int num1=num0%10;//每次的余数
            num0/=10;
            sum+=num1;
        }
        if(sum==15)
        {
            printf("%d是符合条件的数\n",num);
        }
    }
    return 0;
}