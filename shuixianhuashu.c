#include<stdio.h>
int main()
{
    for(int num=100;num<=999;num++)
    {
        int temp=0;
        int original_num=num;
        while(original_num!=0)
        {
            int yu=original_num%10;
            original_num/=10;
            temp=temp+yu*yu*yu;
        }
        if(temp==num)
        {
            printf("%d是水仙数\n",num);
        }
    }
    return 0;
}