#include<stdio.h>
int main()
{
    float ordinary_num;
    scanf("%f",&ordinary_num);
    int new_num=ordinary_num*10;
    float yu;
    float temp=0;
    while(new_num!=0)
    {
        yu=new_num%10;
        new_num/=10;
        temp=temp*10+yu;
    }
    printf("%.3f",temp/1000);
    return 0;
}