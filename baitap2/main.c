#include <stdio.h>

int main() {
    int number, soChan, soLe;

    printf("Nhap 5 so nguyen:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("So thu  %d: ", i + 1);
        scanf("%d", &number);
        if (number % 2 == 0) {
            soChan++;
        } else {
            soLe++;
        }
    }
    printf("So luong so chan: %d\n",soChan);
    printf("So luong so le: %d\n", soLe);

    return 0;
}

