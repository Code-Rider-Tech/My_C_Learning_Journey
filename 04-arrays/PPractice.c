//冒泡排序
// #include<stdio.h>
// int main()
// {
//     int arr[5]={2,5,1,6,4};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<len-1;i++)
//     {
//         for(int j=i+1;j<len;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     for(int i=0;i<len;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }


//求素数
#include<stdio.h>
int main()
{
    int num=0;
    for(int i=1;i<101;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d是素数\n",i);
            num++;
        }
    }
    printf("素数有%d个\n",num);
    return 0;
}