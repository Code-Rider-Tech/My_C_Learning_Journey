// #include<stdio.h>
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }


//look for which number is the max number

// #include<stdio.h>
// int main()
// {
//     int arr[]={23,43,12,25,66};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int max=arr[0];
//     for(int i=1;i<len;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     printf("最大的数是：%d\n",max);
//     return 0;
// }


//Different numbers sum up
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int contains(int arr[],int num,int len);
// int main()
// {
//     int arr[8]={0};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     srand(time(NULL));
//     for(int i=0;i<len;)
//     {
//         int num=rand()%10+1;
//         int flag=contains(arr,num,len);
//         if(!flag)
//         {
//             arr[i]=num;
//             i++;
//         }
//     }
//     for(int m=0;m<len;m++)
//     {
//         sum+=arr[m];
//     }
//     float avg=(float)sum/len;
//     int num1=0;
//     for(int i=0;i<len;i++)
//     {
//         if(arr[i]<avg)
//         {
//             num1++;
//         }
        
//     }
//     printf("总和为:%d\n平均数为:%.1f\n比平均数小的数有:%d个",sum,avg,num1);
//     return 0;
// }
// int contains(int arr[],int num,int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         if(num==arr[i])
//         {
//             return 1;
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// void printarr(int arr[],int len);
// int main()
// {
//     int arr[5]={0};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<len;i++)
//     {
//         printf("请给第%d个元素赋值:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printarr(arr,len);
//     printf("\n\n");
//     int j=len-1;
//     for(int i=0;i<j;i++)
//     {
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         j--;
//     }
//     printarr(arr,len);
//     return 0;
// }
// void printarr(int arr[],int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// void printarr(int arr[],int len);
// int main()
// {
//     int arr[6]={0};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<len;i++)
//     {
//         printf("请输入第%d个元素:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printarr(arr,len);
//     printf("\n\n");
//     srand(time(NULL));
//     for(int i=0;i<len;i++)
//     {
//         int num=rand()%len;
//         int temp=arr[i];
//         arr[i]=arr[num];
//         arr[num]=temp;
//     }
//     printarr(arr,len);
//     return 0; 
// }
// void printarr(int arr[],int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }

