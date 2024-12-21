#include <stdio.h>

int main() {
    int number;
    printf("Nhap mot so nguyen : ");
    scanf("%d", &number);
    if (number == 0) {
        printf("0 khong co uoc.\n");
    }
    printf("Cac uoc cua %d la: ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

