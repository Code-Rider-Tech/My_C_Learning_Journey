#include <stdio.h>
#include <stdbool.h>

/* 判断一个整数 n 是否为素数 */
bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    /* 只需检查到 sqrt(n) 即可，这里用 i * i <= n 避免浮点运算 */
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int count = 0;

    printf("1 到 100 之间的素数有：\n");
    for (int n = 1; n <= 100; n++) {
        if (is_prime(n)) {
            printf("%3d ", n);
            count++;
            /* 每行打印 10 个，便于阅读 */
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    if (count % 10 != 0) {
        printf("\n");
    }

    printf("共 %d 个素数。\n", count);
    return 0;
}
