#include <stdio.h>

int main() {
    int month, days;
    printf("请输入一个月份（1-12）：");
    scanf("%d", &month);   // 输入月份

    switch(month) {   // 根据月份判断天数
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            days = 28;
            break;
        default:
            printf("输入错误，请输入有效的月份！\n");   // 处理错误情况
            return 0;
    }

    printf("%d月份有%d天。\n", month, days);   // 输出结果
    return 0;
}

