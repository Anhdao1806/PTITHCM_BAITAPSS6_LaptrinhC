#include <stdio.h>
int main() {
    int ngay, thang;
    printf("Nhap ngay sinh : ");
    scanf("%d", &ngay);
    printf("Nhap thang sinh : ");
    scanf("%d", &thang);
        if ((thang == 3 && ngay >= 21) || (thang == 4 && ngay <= 20)) {
            printf("Cung hoang dao: Bach Duong\n");
    } else if ((thang == 4 && ngay >= 21) || (thang == 5 && ngay <= 20)) {
            printf("Cung hoang dao: Kim Nguu\n");
    } else if ((thang == 5 && ngay >= 21) || (thang == 6 && ngay <= 21)) {
            printf("Cung hoang dao: Song Tu\n");
    } else if ((thang == 6 && ngay >= 22) || (thang == 7 && ngay <= 22)) {
            printf("Cung hoang dao: Cu Giai\n");
    } else if ((thang == 7 && ngay >= 23) || (thang == 8 && ngay <= 22)) {
            printf("Cung hoang dao: Su Tu\n");
    } else if ((thang == 8 && ngay >= 23) || (thang == 9 && ngay <= 22)) {
            printf("Cung hoang dao: Xu Nu\n");
    } else if ((thang == 9 && ngay >= 23) || (thang == 10 && ngay <= 23)) {
            printf("Cung hoang dao: Thien Binh\n");
    } else if ((thang == 10 && ngay >= 24) || (thang == 11 && ngay <= 22)) {
            printf("Cung hoang dao: Bo Cap\n");
    } else if ((thang == 11 && ngay >= 23) || (thang == 12 && ngay <= 21)) {
            printf("Cung hoang dao: Nhan Ma\n");
    } else if ((thang == 12 && ngay >= 22) || (thang == 1 && ngay <= 19)) {
            printf("Cung hoang dao: Ma Ket\n");
    } else if ((thang == 1 && ngay >= 20) || (thang == 2 && ngay <= 18)) {
            printf("Cung hoang dao: Bao Binh\n");
    } else if ((thang == 2 && ngay >= 19) || (thang == 3 && ngay <= 20)) {
            printf("Cung hoang dao: Song Ngu\n");
    } else {
            printf("Nhap ngay sinh hoac thang sinh khong hop le.\n");
        }
        
        return 0;
}

