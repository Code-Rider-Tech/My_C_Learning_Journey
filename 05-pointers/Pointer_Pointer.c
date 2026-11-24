// #include<stdio.h>
// int main()
// {
//     int a=200;
//     int* p1=&a;
//     printf("%p\n",p1);
//     *p1=300;
//     printf("%d\n",*p1);
//     return 0;
// }


// #include<stdio.h>
// void original(int num1,int num2);
// void swap(int *p1,int *p2);
// int main()
// {
//     int a=200;
//     int b=300;
//     original(a,b);
//     swap(&a,&b);
//     original(a,b);
//     return 0;
// }
// void original(int num1,int num2)
// {
//     printf("值是：%d,%d\n",num1,num2);
// }
// void swap(int* p1,int* p2)
// {
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
// }



// Static Application
// #include<stdio.h>
// int* method();
// int main()
// {
//     int a=20;
//     int* p=method();
//     printf("%d",*p);
// }
// int* method()
// {
//     static int a=10;//Static
//     return &a;
// }


//Get max and min
// #include<stdio.h>
// void getminandmax(int arr[],int len,int* max,int* min);
// int main()
// {
//     int arr[6]={22,13,34,56,11,66};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int max=arr[0];
//     int min=arr[0];
//     getminandmax(arr,len,&max,&min);
//     int p1=max;
//     int p2=min;
//     printf("%d是最大值\n",p1);
//     printf("%d是最小值\n",p2);
//     return 0;
// }
// void getminandmax(int arr[],int len,int* max,int* min)
// {
//     *max=arr[0];
//     *min=arr[0];
//     for(int i=1;i<len;i++)
//     {
//         if(arr[i]>*max)
//         {
//             *max=arr[i];
//         }
//     }
//     for(int i=1;i<len;i++)
//     {
//         if(arr[i]<*min)
//         {
//             *min=arr[i];
//         }
//     }
// }


//Get Remainder
// #include<stdio.h>
// int getres(int num1,int num2,int* remainder);
// int main()
// {
//     int a=30;
//     int b=7;
//     int remainder=0;
//     int p=getres(a,b,&remainder);
//     if(!p)
//     {
//         printf("%d\n",remainder);
//     }
//     return 0;
// }
// int getres(int num1,int num2,int* remainder)
// {
//     if(num2==0)
//     {
//         return 1;
//     }
//     *remainder=num1%num2;
//     return 0;
// }

//  #include<stdio.h>
//  int main()
//  {
//     int a=10;
//     int b=20;
//     int c=30;
//     int *p1=&a;
//     int *p2=&b;
//     int *p3=&c;
//     printf("%d",p2-p3);
//  }

//交换两个数
// #include<stdio.h>
// void swap(void *p1,void *p2,int len);
// int main()
// {
//     int a=20;
//     int b=30;
//     int len=4;
//     swap(&a,&b,len);
//     printf("a=%d,b=%d\n",a,b);
//     return 0;
// }
// void swap(void *p1,void *p2,int len)
// {
//     char *pc1=p1;
//     char *pc2=p2;
//     char temp=0;
//     for(int i=0;i<len;i++)
//     {
//         temp=*pc1;
//         *pc1=*pc2;
//         *pc2=temp;
//         pc1++;
//         pc2++;
//     }
// }

//二级指针
// #include<stdio.h>
// int main()
// {
//     int a=20;
//     int b=30;
//     int *p=&a;
//     int **pp=&p;
//     *pp=&b;
//     printf("%d",*p);
//     return 0;
// }

//数组指针
// #include<stdio.h>
// int main()
// {
//     int arr[5]={23,45,21,67,98};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int *p=arr;
//     for(int i=0;i<len;i++)
//     {
//         printf("%d ",*(p+i));
//     }
//     return 0;
// }


//二维数组(1)
// #include<stdio.h>
// int main()
// {
//     int arr[3][5]=
//     {
//         {1,2,3,4,5},
//         {11,22,33,44,55},
//         {111,222,333,444,555}
//     };
//     int len1=sizeof(arr)/sizeof(arr[0]);
//     int len2=sizeof(arr[0])/sizeof(arr[0][0]);
//     for(int i=0;i<len1;i++)
//     {
//         for(int j=0;j<len2;j++)
//         {
//             printf("%d  ",arr[i][j]);
//         }
//         printf("\n");
//     }   
//     return 0;
// }


//二维数组(2)
// #include<stdio.h>
// int main()
// {
//     int arr1[3]={1,4,8};
//     int arr2[5]={11,44,88,22,33};
//     int arr3[4]={111,444,888,222};
//     int *arr[3]={arr1,arr2,arr3};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int len1=sizeof(arr1)/sizeof(arr1[0]);
//     int len2=sizeof(arr2)/sizeof(arr2[0]);
//     int len3=sizeof(arr3)/sizeof(arr3[0]);
//     int lensum[3]={len1,len2,len3};
//     for(int i=0;i<len;i++)
//     {
//         for(int j=0;j<lensum[i];j++)
//         {
//             printf("%d  ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;  
// }

//二维数组(3)
// #include<stdio.h>
// int main()
// {
//     int arr[3][5]=
//     {
//         {1,2,3,4,5},
//         {11,22,33,44,55},
//         {111,222,333,444,555}
//     };
//     int (*p)[5]=arr;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             printf("%d",*(*p+j));
//         }
//         printf("\n");
//         p++;
//     }
//     return 0;
// }


//二维数组(4)
// #include<stdio.h>
// int main()
// {
//     int arr1[5]={1,2,3,4,5};
//     int arr2[5]={11,22,33,44,55};
//     int arr3[5]={111,222,333,444,555};
//     int *arr[3]={arr1,arr2,arr3};
//     int* *p=arr;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<5;j++)
//         { 
//             printf("%d ",*(*p+j));
//         }
//         printf("\n");
//         p++;
//     }
//      return 0;
// }











