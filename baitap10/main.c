#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d Khong phai so nguyen to.\n", n);
    } else {
        int flag = 1;
        for (int i = 2; i * i <= n ; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("%d la so nguyen to.\n", n);
        else
            printf("%d Khong phai so nguyen to.\n", n);
    }

    return 0;
}


