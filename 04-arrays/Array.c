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


// #include<stdio.h>
// void input(int arr[],int len);
// int look_for(int arr[],int len,int want);
// int main()
// {
//     int arr[8]={0};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     input(arr,len);
//     int want;
//     printf("你想查找的数字是:");
//     scanf("%d",&want);
//     int find=look_for(arr,len,want);
//     printf("%d的索引是%d",want,find);
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
// int look_for(int arr[],int len,int want)
// {
//     for(int j=0;j<len;j++)
//     {
//         if (arr[j]==want)
//         {
//             return j;   
//         }        
//     }
//     return -1;
// }


//binary_search
// #include<stdio.h>
// void input(int arr[],int len);
// int binary_search(int arr[],int len,int );
// int main()
// {
//     int arr[6]={0};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     input(arr,len);
//     printf("请输入你想要查询的数字:");
//     int look_for;
//     scanf("%d",&look_for);
//     int find=binary_search(arr,len,look_for);
//     printf("%d的索引是%d",look_for,find);
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
// int binary_search(int arr[],int len,int num)
// {
//     int min=0;
//     int max=len-1;
//     while(min<=max)
//     {
//         int mid=(min+max)/2;
//         if(arr[mid]>num)
//         {
//             max=mid-1;
//         }
//         else if(arr[mid]<num)
//         {
//             min=mid+1;
//         }
//         else
//         {
//             return mid;
//         }
//     }
//     return -1;
// }


// #include<stdio.h>
// void input(int arr[],int len);
// int look_for(int arr[],int len,int num);
// int main()
// {
//     int arr[5]={0};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     input(arr,len);
//     int num;
//     printf("你想查找的数字是:");
//     scanf("%d",&num);
//     int index=look_for(arr,len,num);
//     printf("查找数字的索引是%d",index);
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
// int look_for(int arr[],int len,int num)
// {
//     int min=0;
//     int max=len-1;
//     while(min<=max)
//     {
//         int mid=min+(num-arr[min])*(max-min)/(arr[max]-arr[min]);
//         if(arr[mid]<num)
//         {
//             min=mid+1;
//         }
//         else if(arr[mid]>num)
//         {
//             max=mid-1;
//         }
//         else
//         {
//             return mid;
//         }
//     }
//     return -1;
// }


// //冒泡排序
// #include<stdio.h>
// void input(int arr[],int len);
// void maopao(int arr[],int len);
// void printarr(int arr[],int len);
// int main()
// {
//     int arr[5]={0};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     input(arr,len);
//     maopao(arr,len);
//     printarr(arr,len);
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
//     for(int j=0;j<len-1;j++)
//     {
//         for(int i=0;i<len-j-1;i++)
//         {
//             if(arr[i]>arr[i+1])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//     }
// }
// void printarr(int arr[],int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }

// 选择排序
// #include<stdio.h>
// int main()
// {
//     int arr[4]={3,2,6,5};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<len-1;i++)
//     {
//         for(int j=i+1;j<len;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<len;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }













































