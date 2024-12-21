#include <stdio.h>

int main() {
    int password = 1112008;
    int input;

    printf("Nhap mat khau : ");
    scanf("%d", &input);
    if (input == password) {
        printf("Mat khau dung\n");
    } else {
        printf("Mat khau sai\n");
    }

    return 0;
}

