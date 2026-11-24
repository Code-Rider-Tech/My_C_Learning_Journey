#include <stdio.h>

/*
 * sizeof 收尾对照实验
 *
 * 目标:同样的"地址(数值)",因为【类型】不同,sizeof / 步长 / 行为完全不同。
 * 核心纪律:看类型,不看数值。
 *
 * 数组名衰变规则(只在两种地方【不】衰变):
 *   1. sizeof(arr)
 *   2. &arr
 * 其余所有表达式上下文(算术、赋值、函数传参)都会衰变成"首元素指针"。
 */

int main(void)
{
    int arr[3][5] =
    {
        {1,   2,   3,   4,   5  },
        {11,  22,  33,  44,  55 },
        {111, 222, 333, 444, 555}
    };

    printf("sizeof(int)   = %zu\n", sizeof(int));
    printf("sizeof(int *) = %zu\n\n", sizeof(int *));

    /* ===== 第一组:整体数组 vs 衰变后的指针 ===== */
    printf("---- 第一组:arr 本身 ----\n");
    /* arr 不衰变(sizeof 里),类型 int[3][5],大小 3*5*4 = 60 */
    printf("arr          : size=%2zu  (类型 int[3][5],不衰变)\n", sizeof(arr));
    /* &arr 取整个二维数组的地址,类型 int(*)[3][5],仍是 60,但"块"是整块 */
    printf("&arr         : size=%2zu  (类型 int(*)[3][5])\n", sizeof(&arr));
    /* arr 在表达式里衰变成 &arr[0],类型 int(*)[5],指针大小 8 */
    printf("arr(衰变)    : size=%2zu  (类型 int(*)[5],指针)\n", sizeof(arr + 0));

    printf("\n---- 第二组:行 arr[0] ----\n");
    /* arr[0] 是行数组,不衰变时类型 int[5],大小 20 */
    printf("arr[0]       : size=%2zu  (类型 int[5],不衰变)\n", sizeof(arr[0]));
    /* &arr[0] 取行数组地址,类型 int(*)[5],指针大小 8 */
    printf("&arr[0]      : size=%2zu  (类型 int(*)[5],指针)\n", sizeof(&arr[0]));
    /* arr[0] 在表达式里衰变成 &arr[0][0],类型 int*,指针大小 8 */
    printf("arr[0](衰变) : size=%2zu  (类型 int*,指针)\n", sizeof(arr[0] + 0));

    printf("\n---- 第三组:元素 arr[0][0] ----\n");
    /* arr[0][0] 是 int,不衰变,大小 4 */
    printf("arr[0][0]     : size=%2zu  (类型 int)\n", sizeof(arr[0][0]));
    /* &arr[0][0] 取元素地址,类型 int*,指针大小 8 */
    printf("&arr[0][0]    : size=%2zu  (类型 int*,指针)\n", sizeof(&arr[0][0]));

    /* ===== 关键:C 语言里的"类型优先级表" ===== */
    printf("\n==== 类型 / 大小 / 步长 对照表 ====\n");
    printf("%-14s %-16s %-6s %-6s\n", "表达式", "类型", "sizeof", "步长");
    printf("%-14s %-16s %-6zu %-6s\n", "arr",          "int[3][5]",       sizeof(arr),       "60");
    printf("%-14s %-16s %-6zu %-6s\n", "&arr",         "int(*)[3][5]",    sizeof(&arr),      "60");
    printf("%-14s %-16s %-6zu %-6s\n", "arr",          "int(*)[5](衰变)", sizeof(arr + 0),   "20");
    printf("%-14s %-16s %-6zu %-6s\n", "arr[0]",       "int[5]",          sizeof(arr[0]),    "20");
    printf("%-14s %-16s %-6zu %-6s\n", "&arr[0]",      "int(*)[5]",       sizeof(&arr[0]),   "20");
    printf("%-14s %-16s %-6zu %-6s\n", "arr[0]",       "int*(衰变)",      sizeof(arr[0]+0),  "4");
    printf("%-14s %-16s %-6zu %-6s\n", "arr[0][0]",    "int",             sizeof(arr[0][0]), "4");
    printf("%-14s %-16s %-6zu %-6s\n", "&arr[0][0]",   "int*",            sizeof(&arr[0][0]),"4");

    /* ===== 用 & 验证:"地址数值相同,但类型不同" ===== */
    printf("\n==== 地址数值 vs 类型 (&arr[0] vs &arr[0][0]) ====\n");
    printf("&arr[0]    = %p  (类型 int(*)[5],步长 20)\n", (void *)&arr[0]);
    printf("&arr[0][0] = %p  (类型 int*,     步长 4 )\n", (void *)&arr[0][0]);
    printf("数值相等?  %s(但类型不同,所以 +1 走的路不一样)\n",
           (&arr[0] == (int (*)[5])&arr[0][0]) ? "是" : "否");

    /* ===== 看步长的真实差异:同一个地址 +1,指针移动的字节数不同 ===== */
    printf("\n==== 同一地址 +1,看实际移动了多少字节 ====\n");
    int (*rp)[5] = &arr[0];   /* 块尺:int(*)[5],步长 20 */
    int *ep      = &arr[0][0];/* 点尺:int*,      步长 4  */
    printf("(&arr[0])   +1 后地址: %p  (前进 %ld 字节)\n",
           (void *)(rp + 1), (long)((char *)(rp + 1) - (char *)rp));
    printf("(&arr[0][0])+1 后地址: %p  (前进 %ld 字节)\n",
           (void *)(ep + 1), (long)((char *)(ep + 1) - (char *)ep));

    return 0;
}
