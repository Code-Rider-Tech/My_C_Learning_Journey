#include<stdio.h>
int main()
{
    for(int i=100;i<=200;i++)
    {
        if(i%3!=0&&i%2!=0)
        {
            printf("%d是既不能被3整除也不能被2整除的数\n",i);
        }
    }
    return 0;
}