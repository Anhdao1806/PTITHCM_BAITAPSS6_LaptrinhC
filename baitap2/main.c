#include <stdio.h>

int main() {
    int number, soChan, soLe;

    printf("Nhập 5 số nguyên:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Số thứ %d: ", i + 1);
        scanf("%d", &number);
        if (number % 2 == 0) {
            soChan++;
        } else {
            soLe++;
        }
    }
    printf("Số lượng số chẵn: %d\n",soChan);
    printf("Số lượng số lẻ: %d\n", soLe);

    return 0;
}

