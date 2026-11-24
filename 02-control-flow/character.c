#include <stdio.h>
int main() {
    char c;
    int letters = 0; 
    int spaces = 0;  
    int digits = 0;  
    int others = 0;  
    printf("请输入一行字符：\n");
    while (1) {
        scanf("%c", &c); 
        if (c == '\n') {
            break;
        }
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++;
        } 
        else if (c == ' ') {
            spaces++;
        } 
        else if (c >= '0' && c <= '9') {
            digits++;
        } 
        else {
            others++;
        }
    }
    printf("字母:%d 个, 空格:%d 个, 数字:%d 个, 其他:%d 个\n", letters, spaces, digits, others);
    return 0;
}