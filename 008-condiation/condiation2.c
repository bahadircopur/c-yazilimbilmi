#include <stdio.h>

int main() {
    int ay;
    printf("Hangi ayda olduğunuzu giriniz (1-12): ");
    scanf("%d", &ay);

    switch(ay) {
        case 1:
            printf("Ocak ayındasınız.\n");
            break;
        case 2:
            printf("Şubat ayındasınız.\n");
            break;
        case 3:
            printf("Mart ayındasınız.\n");
            break;
        case 4:
            printf("Nisan ayındasınız.\n");
            break;
        case 5:
            printf("Mayıs ayındasınız.\n");
            break;
        case 6:
            printf("Haziran ayındasınız.\n");
            break;
        case 7:
            printf("Temmuz ayındasınız.\n");
            break;
        case 8:
            printf("Ağustos ayındasınız.\n");
            break;
        case 9:
            printf("Eylül ayındasınız.\n");
            break;
        case 10:
            printf("Ekim ayındasınız.\n");
            break;
        case 11:
            printf("Kasım ayındasınız.\n");
            break;
        case 12:
            printf("Aralık ayındasınız.\n");
            break;
        default:
            printf("Hatalı giriş yaptınız. Lütfen 1-12 arasında bir sayı girin.\n");
            break;
    }

    return 0;
}