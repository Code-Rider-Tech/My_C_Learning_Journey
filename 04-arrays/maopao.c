// #include<stdio.h>
// void input(int arr[],int len);
// void maopao(int arr[],int len);
// int main()
// {
//     int arr[5]={0};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     input(arr,len);
//     maopao(arr,len);
//     for(int i=0;i<len;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// void input(int arr[],int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         printf("请输入第%d个数字:",i+1);
//         scanf("%d",&arr[i]);
//     }
// }
// void maopao(int arr[],int len)
// {
//     for(int i=0;i<len-1;i++)
//     {
//         for(int j=0;j<len-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }