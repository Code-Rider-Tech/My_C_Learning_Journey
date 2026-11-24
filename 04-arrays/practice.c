// #include<stdio.h>
// void printarr(char arr[],int len);
// int main()
// {
//     char arr[5]={'a','b','c','d','e'};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     printarr(arr,len);
//     int j=len-1;
//     for(int i=0;i<j;i++)
//     {
//         char temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         j--;
//     }
//     printarr(arr,len);
//     return 0;
// }
// void printarr(char arr[],int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         printf("%c\n",arr[i]);
//     }
// }