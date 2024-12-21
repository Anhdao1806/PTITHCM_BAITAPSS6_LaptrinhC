#include <stdio.h>

int main() {
    int a,b,c,soArmstrong;
    
    printf("Cac so Armstrong co 3 chu so la:\n");
    for (int i = 100; i <= 999; i++) {
        a = i / 100;
        b= (i / 10) % 10;
        c= i % 10;
        soArmstrong = (a * a * a) + (b * b * b) + (c * c * c);
        
        if (soArmstrong == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
