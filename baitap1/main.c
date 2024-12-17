#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Nhập 5 số nguyên:\n");
    for (int i = 0; i < 5; i++) {
        printf("Số thứ %d: ",i + 1);
        scanf("%d", &number);
        if (number % 2 != 0) {
            sum += number;
        }
    }
    printf("Tổng các số lẻ là: %d\n", sum);

    return 0;
}

