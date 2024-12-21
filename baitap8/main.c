#include <stdio.h>
#include <math.h>
int main() {
    double tienGui , laiThang ,tienLai , tienNhanDuoc;
    int soThangGui;
    printf("nhap tien gui ban dau: ");
    scanf("%lf", &tienGui);
    printf("nhap lai thang: ");
    scanf("%lf", &laiThang);
    printf("nhap so thang gui: ");
    scanf("%d", &soThangGui);
    
    laiThang = laiThang / 100;
    tienNhanDuoc = tienGui * pow(1 + laiThang,soThangGui);
    tienLai= tienNhanDuoc - tienGui;
      
    printf("tien lai: %.3f\n", tienLai);
    printf("tien nhan duoc: %.3f\n", tienNhanDuoc);
return 0;
}

