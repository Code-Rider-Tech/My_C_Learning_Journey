//水仙数
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("请输入一个数字:\n");
//     scanf("%d",&n);
//     for(int num=1;num<=n;num++)
//     {
//         int num0=num;
//         int sum=0;//每一位数字相加之后的总值
//         while(num0!=0)
//         {
//             int num1=num0%10;//每次的余数
//             num0/=10;
//             sum+=num1;
//         }
//         if(sum==15)
//         {
//             printf("%d是符合条件的数\n",num);
//         }
//     }
//     return 0;
// }


//Monkey and peach
// #include<stdio.h>
// int main()
// {
//     int num=1;
//     for(int i=0;i<9;i++)
//     {
//         num=(num+1)*2;
//     } 
//     printf("一开始有%d个桃子\n",num);
//     return 0;   
// }