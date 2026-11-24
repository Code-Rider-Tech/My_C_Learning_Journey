#include<stdio.h>
//函数运算
// int main()
// {
//     int x;
//     printf("请输入一个你喜欢的数字吧：\n");
//     scanf("%d",&x);
//     if(x<1)
//     {
//         printf("函数值为：%d\n",x);
//     }
//     else if(x>=1&&x<10)
//     {
//         printf("函数值为：%d\n",2*x-1);
//     }
//     else
//     {
//         printf("函数值为：%d\n",3*x-11);
//     }
//     return 0;
// }



//平方根
// int main()
// {
//     int x;
//     printf("请输入一个数字:\n");
//     scanf("%d",&x);
//     while(x>=1000)
//     {
//         printf("请输入一个小于1000的数字\n");
//         scanf("%d",&x);
//     }
//     int j=0;
//     for(int i=0;i*i<=x;i++)
//     {
//         j++;
//     }
//     printf("%d的平方根是:%d\n",x,j-1);
//     return 0;
// }



//the order of number
// void input(int arr[],int len);
// void printarr(int arr[],int len);
// void compare(int arr[],int len);
// int main()
// {
//     int arr[4]={0};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     input(arr,len);
//     printarr(arr,len);
//     compare(arr,len);
//     printarr(arr,len);
//     return 0;
// }
// void input(int arr[],int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         printf("请输入第%d个数字:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
// }
// void printarr(int arr[],int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
// }
// void compare(int arr[],int len)
// {
//    for(int j=0;j<len-1;j++)
//    {
//     for(int i=0;i<len-1;i++)
//     {
//         if(arr[i]>arr[i+1])
//         {
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//     }
//    } 
// }
